import subprocess
import os


os.chdir('/home/pi/trial_autostart')
print(os.getcwd())


cmd = './trial_autostart'
subprocess.call(cmd)
