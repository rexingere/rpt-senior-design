import RPi.GPIO as gpio
from multiprocessing import Process
import time

gpio.setwarnings(False)
gpio.setmode(gpio.BCM)
gpio.setup(18, gpio.OUT, initial=gpio.LOW)
gpio.setup(26, gpio.OUT, initial=gpio.LOW)




def func1():
    print("func1 starting")
    gpio.output(18, gpio.HIGH)
    time.sleep(4)
    gpio.output(18, gpio.LOW)
    time.sleep(1)
    print("func1 ending")

def func2():
    print("func2 starting")
    gpio.output(26, gpio.HIGH)
    time.sleep(1)
    gpio.output(26, gpio.LOW)
    time.sleep(1)  
    print("func2 ending")
    

    

#     p1 = Process(target=func1)
#     p1.start()
#     p2 = Process(target=func2)
#     p2.start()
#     p1.join()
#     p2.join()


def ledBlink():
    print("ledBlink")
    gpio.output(18, gpio.HIGH)
    time.sleep(1)

    gpio.output(26, gpio.HIGH)

    time.sleep(1)
    gpio.output(18, gpio.LOW)
    gpio.output(26, gpio.LOW)

    time.sleep(1)  

    gpio.cleanup()
    

def runInParallel():
    p1 = Process(target=func1)
    p2 = Process(target=func2)
    
    p1.start()
    p2.start()
    
    p1.join()
    p2.join()
    print("done")
        
        


















