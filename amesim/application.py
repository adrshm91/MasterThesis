from amesim import AmeCommunication
import tkinter
import time

''' 
This scripts displays a chart that is updated with data read on sharedmemory
The sharedmemory is accessed with a python binding of amecommunication c-functions
'''
''' a class to hold chart data '''
class ChartData(object):
    ''' init method '''

    def __init__(self, size_max=0):
        self.x = []
        self.y = []
        self.last_x = 0
        self.size_max = size_max

    ''' append new point to the current data '''

    def add_point(self, x, y):
        if (x - self.last_x) * (x - self.last_x) < 0.0001:
            return
        self.last_x = x
        self.x.append(1.0 * x)
        self.y.append(1.0 * y)
        if (self.size_max > 0 and len(self.x) > self.size_max):
            self.x.pop(0)
            self.y.pop(0)

    ''' transform vector with values in range to vector with values in [0, canvas_width-1] '''

    def get_scaled_vector(self, vector, range, canvas_width):
        scaled = []
        for val in vector:
            scaled.append((val - range[0]) * canvas_width / (range[1] - range[0]))
        return scaled

    ''' get line to draw on a canvas with create_line '''

    def get_line(self, horizontal_range, canvas_width, vertical_range, canvas_height):
        x_scaled = self.get_scaled_vector(self.x, horizontal_range, canvas_width)
        y_scaled = self.get_scaled_vector(self.y, vertical_range, canvas_height)
        line = []
        for (i, j) in zip(x_scaled, y_scaled):
            if (i >= 0 and i < canvas_width and j >= 0 and j < canvas_height):
                line.append(i)
                line.append(canvas_height - 1 - j)
        return line

# a class to display plot curves on a canvas
class Chart(object):
    ''' init method '''

    def __init__(self, canvas, horizontal_range, vertical_range, nb_max_points=5000):
        self.canvas = canvas
        self.data = ChartData(nb_max_points)
        self.x_range = horizontal_range
        self.y_range = vertical_range
        self.line = None

    ''' update x_range and y_range so that point is visible '''

    def ensure_visible(self, x, y):
        # retrieve canvas dimension
        width = 1.0 * self.canvas.winfo_width()
        height = 1.0 * self.canvas.winfo_height()
        # retrieve plot dimension
        scaled_width = 1.0 * (self.x_range[1] - self.x_range[0])
        scaled_height = 1.0 * (self.y_range[1] - self.y_range[0])
        # compute min vertical and horizontal steps
        x_step = scaled_width / width
        y_step = scaled_height / height
        # compute the max visible value on plot : the greatest value in [range(0], range(1)[
        x_maxvisible = self.x_range[0] + (width - 1.0) * x_step
        y_maxvisible = self.y_range[0] + (height - 1.0) * y_step
        # check that point is visible and update range
        if x > x_maxvisible:
            self.x_range = (self.x_range[0] + x - x_maxvisible, self.x_range[1] + x - x_maxvisible)
        if x < self.x_range[0]:
            self.x_range = (x, x + self.x_range[1] - self.x_range[0])
        if y >= y_maxvisible:
            self.y_range = (self.y_range[0], y + 0.1 * abs(y) + 1e-6)
        if y <= self.y_range[0]:
            self.y_range = (y - 0.1 * abs(y) - 1e-6, self.y_range[1])

    ''' to add a point to the chart '''

    def add_point(self, x, y):
        self.ensure_visible(x, y)
        self.data.add_point(x, y)

    ''' redraw current visible line '''

    def update(self):
        # canvas dimensions
        width = self.canvas.winfo_width()
        height = self.canvas.winfo_height()
        # get visible points from data
        l = self.data.get_line(self.x_range, width, self.y_range, height)
        # check that there's more than one visible point
        if (len(l) > 2):
            # create new line
            new_line = self.canvas.create_line(l)
            # delete old one
            if self.line:
                self.canvas.delete(self.line)
            self.line = new_line

    ''' to delete all points from datas '''

    def clean(self):
        self.data.x = []
        self.data.y = []
        self.data.last_x = 0

# a small timer
class Chrono(object):
    def __init__(self):
        self.timestart = time.time()

    ''' set start time to current time '''

    def start(self):
        self.timestart = time.time()

    ''' reset start time to current time and return last elapsed time'''

    def restart(self):
        ret = time.time() - self.timestart
        self.timestart = time.time()
        return ret

    ''' return time elapsed since last start/restart '''

    def gettime(self):
        return time.time() - self.timestart

    ''' settime to time_origin '''

    def settime(self, time_origin):
        self.timestart = time.time() - time_origin


class MainWindow(object):

    # construct window
    def __init__(self):
        # shared memory is not connected and plot is not updated
        self.isrunning = False
        # create main tk window
        self.root = tkinter.Tk()
        # create left frame
        self.leftframe = tkinter.Frame(self.root)
        self.leftframe.pack(side='left')
        # add launch/stop button to left frame
        self.button = tkinter.Button(self.leftframe, text='launch/stop', command=self.launch_callback)
        self.button.pack()
        # create a text entry to hold sharedmem name
        self.shmentry = tkinter.Entry(self.leftframe, width=30)
        self.shmentry.insert(tkinter.END, 'shm_0')
        self.shmentry.pack()
        # create a slider to change output value
        self.scale = tkinter.Scale(self.leftframe, from_=1, to=-1, resolution=0.1, orient='vertical')
        self.scale.pack()
        # set up variable text for labels
        self.time_val = tkinter.StringVar()
        self.time_val.set('time_val')
        self.output_val = tkinter.StringVar()
        self.output_val.set('output')
        # create labels
        self.label = tkinter.Label(self.leftframe, textvariable=self.time_val)
        self.label.pack()
        self.time_label = tkinter.Label(self.leftframe, textvariable=self.output_val)
        self.time_label.pack()
        # create a main frame for canvas
        self.frame = tkinter.Frame(self.root)
        self.frame.pack()
        self.canvas = tkinter.Canvas(self.frame)
        self.canvas.pack()
        # add a plot to canvas
        self.chart = Chart(self.canvas, (0.0, 5.0), (1e-6, -1e-6))
        # create sharedmem communicator
        self.shm = AmeCommunication.AmeSharedmem()
        self.chrono = Chrono()
        self.lastrefreshtime = 0
        # enter main loop
        tkinter.mainloop()

        ''' this method is called when button is pressed '''

    def launch_callback(self):
        # if sharedmem is already connected
        if self.isrunning:
            # close sharedmemory
            self.isrunning = False
            self.chart.clean()
            self.canvas.after(100, self.shm.close)
        else:
            try:
                # initialize and connect to sharedmemory
                self.shm.init(False, str(self.shmentry.get()), 3, 3)
                ret = self.shm.exchange([0, 0, 0])
                self.isrunning = True
            except RuntimeError:
                return
            # initialize chrono to extern time
            self.chrono.settime(ret[1])
            # set initial value for last output
            self.lastoutput = ret[2]
            # enter main loop to add_points
            self.add_points()

    ''' main loop : add points to the graphic from sharedmemory '''

    def add_points(self):
        # enter active loop without any redraw of the chart
        while (self.isrunning):
            # get current time
            t = self.chrono.gettime()
            try:
                # exchange values
                ret = self.shm.exchange([0.0, t, float(self.scale.get())])
                self.lastoutput = ret[2]
            except RuntimeError:
                return
            # append new point but do not redraw
            self.chart.add_point(ret[1], ret[2])
            # check if there's some time for a redraw : in that case, exit active loop and use a timer
            # to recall add_points method
            t = self.chrono.gettime()
            if t - self.lastrefreshtime > 0.1:
                print("Warning: exchange rate goes to fast to ensure a smooth display")
                print("Try with a smaller sample time")
                self.lastrefreshtime = t
                self.chart.update()
                self.time_val.set('time: ' + str(self.chrono.gettime()))
                self.output_val.set('val: ' + str(self.lastoutput))
                self.chart.canvas.after(1, self.add_points)
                break
            elif ret[1] - t > 0.001:
                # there's time for redrawing chart : do it now:
                self.lastrefreshtime = t
                self.chart.update()
                self.time_val.set('time: ' + str(self.chrono.gettime()))
                self.output_val.set('val: ' + str(self.lastoutput))
                # use a timer to recall add_points method
                self.chart.canvas.after(1 + int((ret[1] - t) * 1000), self.add_points)
                break

MainWindow()


