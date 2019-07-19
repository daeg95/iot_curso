#include <Servo.h>
Servo servo;
int angle = 0;
int axis_x = A1;
int axis_y = A2;
int button = 4;
int led = 13;


void setup()
{
    servo.attach(10);
    pinMode(button, INPUT);
}
void loop()
{
    angle = map( analogRead(axis_x), 0, 1024, 0, 180);
    servo.write(angle);
    delay(50);

    if (digitalRead(button))
    {
        digitalWrite(led, LOW);
    }
    else
    {
        digitalWrite(led, HIGH);
    }

    delay(250);
        
}
