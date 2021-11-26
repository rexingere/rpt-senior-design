import time
import board
import busio
import adafruit_ads1x15.ads1115 as ADS
from adafruit_ads1x15.analog_in import AnalogIn

i2c = busio.I2C(board.SCL, board.SDA)
ads = ADS.ADS1115(i2c)
chan1 = AnalogIn(ads,ADS.P0)
chan2 = AnalogIn(ads,ADS.P1)

chan3 = AnalogIn(ads,ADS.P2)
chan4 = AnalogIn(ads,ADS.P3)


#print("{:>5}\t{:>5}".format('ch1', 'ch2'))
print("{:>5}\t{:>5}\t{:>5}\t{:>5}".format('ch1', 'ch2', 'ch3', 'ch4'))
# print("{0:>5}\t{1:>5}\t{2:>5}\t{3:>5}".format('ch1', 'ch2', 'ch3', 'ch4'))
while True:
    curVal1 = chan1.voltage
    curVal2 = chan2.voltage
    curVal3 = chan3.voltage
    curVal4 = chan4.voltage

    #print("{:>5.3f}\t{:>5.3f}".format(curVal1, curVal2))
    print("{:>5.3f}\t{:>5.3f}\t{:>5.3f}\t{:>5.3f}".format(curVal1, curVal2, curVal3, curVal4))
    time.sleep(0.5)
    
def getPos():
    curVal1 = chan1.voltage
    curVal2 = chan2.voltage
    curVal3 = chan3.voltage
    curVal4 = chan4.voltage

    #print("{:>5}\t{:>5}".format('ch1', 'ch2'))
    print("{:>5}\t{:>5}\t{:>5}\t{:>5}".format('ch1', 'ch2', 'ch3', 'ch4'))
    #print("{:>5.3f}\t{:>5.3f}".format(curVal1, curVal2))
    print("{:>5.3f}\t{:>5.3f}".format(curVal1, curVal2, curVal3, curVal4))
