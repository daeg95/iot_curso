#include <BluetoothSerial.h>
#define LED_BUILDIN 2

BluetoothSerial bluetooth;
int incoming = 0;

void setup(){

    Serial.begin(115200);
    bluetooth.begin("Hello - ESP32");
    Serial.println("Listo para vincular");
    //Serial.println(bluetooth.MAC());

    pinMode(LED_BUILDIN, OUTPUT);

}

void loop(){

    if (bluetooth.available())
    {
        incoming = bluetooth.read();
        Serial.print("Mensaje: ");
        Serial.print(incoming);

        switch (incoming)
        {
        case 48:
            digitalWrite(LED_BUILDIN, LOW);
            break;
        case 49:
            digitalWrite(LED_BUILDIN, HIGH);
            break;
        default:
            break;
        }
    }

    delay(20);
    





}