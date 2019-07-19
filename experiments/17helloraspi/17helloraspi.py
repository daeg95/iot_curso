import RPi.GPIO as gpio
import time

gpio.setmode(gpio.BOARD) # Iniciar la board
gpio.setup(12, gpio.OUT) # Asignacion del pin
gpio.output(12, True) # encender 
time.sleep(12)
gpio.output(12, False)
gpio.cleanup(12)


