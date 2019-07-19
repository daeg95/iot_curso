import RPi.GPIO as gpio

gpio.setmode(gpio.BOARD) # Iniciar la board
gpio.setup(12, gpio.OUT) # Asignacion del pin
gpio.output(12, True) # encender 
gpio.output(12, False)
gpio.cleanup(12)


