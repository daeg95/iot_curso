import RPi.GPIO as gpio
import time

gpio.setmode(gpio.BOARD) # Iniciar la board

gpio.setup(23, gpio.IN, pull_up_down = gpio.PUD_UP)
gpio.setup(24, gpio.OUT) # Asignacion del pin



# gpio.output(12, True) # encender 
# time.sleep(12)
# gpio.output(12, False)
# gpio.cleanup(12)



while True: 
    input_state == GPIO.input(23)
    if input_state == False:
        gpio.output(24, True)
    else:
        gpio.output(24, False)

gpio.cleanup(23)
gpio.cleanup(24)
