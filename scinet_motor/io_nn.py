import os


class Io_nn(object):

    def __init__(self, model_id, path):
        self.model_id = model_id
        self.project_dir = os.path.dirname(path)
        self.logs_dir = self.project_dir + "/training_logs/"
        self.checkpoints_dir = self.project_dir + "/checkpoints/"
        if not os.path.exists(self.logs_dir):
            os.makedirs(self.logs_dir)
        if not os.path.exists(self.checkpoints_dir):
            os.makedirs(self.checkpoints_dir)
        # create all dirs for storing checkpoints and other log data:
        self.create_model_dirs()

    def create_model_dirs(self):
        self.model_dir_logs = self.logs_dir + "model_%s" % self.model_id + "/"
        self.model_dir_checkpoints = self.checkpoints_dir + "model_%s" % self.model_id + "/"
        self.log_dir_train = self.model_dir_logs + "/logs_train/"
        self.log_dir_val = self.model_dir_logs + "/logs_val/"
        if not os.path.exists(self.model_dir_logs):
            os.makedirs(self.model_dir_logs)
            os.makedirs(self.checkpoints_dir)
            os.makedirs(self.log_dir_val)
            os.makedirs(self.log_dir_train)
        if not os.path.exists(self.model_dir_checkpoints):
            os.makedirs(self.model_dir_checkpoints)


file_path = os.path.dirname(__file__)
data_path = os.path.realpath(os.path.join(file_path, '../data/')) + '/'
tf_save_path = os.path.realpath(os.path.join(file_path, '../tf_save/')) + '/'
tf_log_path = os.path.realpath(os.path.join(file_path, '../tf_log/')) + '/'