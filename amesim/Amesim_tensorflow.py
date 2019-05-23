import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm
from scinet_motor import model_new as nn
import scinet_motor.ed_motor as edm
import pandas as pd
from tqdm import *
from sklearn.metrics import mean_squared_error
from math import sqrt
from amesim import AmeCommunication
import time
import scinet_motor.io_nn as io_nn
import os

model_id = "latent4_100"
input_output = io_nn.Io_nn(model_id, path=os.path.abspath("."))

series_length = 50
N = 20
L = 64000
var_to_amesim = 2
var_from_amesim = 3
sharedMemoryName = 'shm_0'

net = nn.Network.from_saved('motor_speed_torque_50',
                            change_params={'load_file': 'model_motor_speed_torque_50_epoch_975'},  io_nn=input_output)




class AmesimDataExchange(object):

    def __init__(self, var_to_amesim, var_from_amesim, shname):
        self.shm = AmeCommunication.AmeSharedmem()
        self.is_running = False
        self.nb_input = var_to_amesim + 2
        self.nb_output = var_from_amesim + 2
        self.shname = shname
        self.input_to_network = [0]
        self.network_output = [10.0, 5.0]
        self.simulation_time = 10
        self.simulation_time_step = 0.001
        self.next_meeting_point = -1
        self.send = False

    def initialize_amesim(self):
        if self.is_running:
            self.shm.close()
            self.is_running = False
        try:
            self.shm.init(False, self.shname, self.nb_input, self.nb_output)
            self.is_running = True
        except RuntimeError:
            return

        return

    def send_to_amesim(self):
        if not self.is_running:
            self.initialize_amesim()
        total_time_steps = int(self.simulation_time//self.simulation_time_step)
        time_steps = [x * self.simulation_time_step for x in range(0, total_time_steps)]
        for time_step in time_steps:
            if time_step > self.next_meeting_point:
                try:
                    # exchange values
                    ret = self.shm.exchange([0.0, time_step] + self.network_output)
                    self.input_to_network = [ret[i] for i in range(2, len(ret))]
                    self.next_meeting_point = ret[0]
                    current_input = self.input_to_network[0]
                    speed_input = self.input_to_network[1]
                    torque_input = self.input_to_network[2]
                    data_input = [np.expand_dims(np.array([current_input]), axis=0)] +\
                                 [np.expand_dims(np.array([speed_input, torque_input]), axis=0)] +\
                                 [np.expand_dims(np.array(np.zeros((series_length-1)*2)), axis=0)]
                    b = net.run(data_input, net.decoded_list)
                    self.network_output = np.squeeze(b[0]).tolist()
                    print(current_input)
                    print(speed_input)
                    print(torque_input)
                except RuntimeError:
                    return


try:
    while True:
        amesim = AmesimDataExchange(var_to_amesim, var_from_amesim, sharedMemoryName)

        amesim.send_to_amesim()
except KeyboardInterrupt:
    print('interrupted!')

