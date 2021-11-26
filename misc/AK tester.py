import time
import board
import busio
import adafruit_ads1x15.ads1115 as ADS
from adafruit_ads1x15.analog_in import AnalogIn
i2c = busio.I2C(board.SCL, board.SDA)
ads = ADS.ADS1115(i2c)
chan1 = AnalogIn(ads,ADS.P1)
chan2 = AnalogIn(ads,ADS.P0)

chan3 = AnalogIn(ads,ADS.P2)
chan4 = AnalogIn(ads,ADS.P3)


GAIN = 1

print('Press Ctrl-C to quit...')
while True:
    value = ADS.read_ads_difference(0, gain=GAIN)
    print('Channel 0 minus 1: {0}'.format(value))
    time.sleep(0.5)