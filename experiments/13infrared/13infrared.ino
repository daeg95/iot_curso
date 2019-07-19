#include "IRLremote.h"
#define LED_BUILTIN 13
#define IR_PIN 2

CNec IRLremote;

const int interruptIR= 0;
uint8_t IRProtocol = 0;
uint16_t IRAddress = 0;
uint32_t IRCommand = 0;

void setup(){

    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT);
    IRLremote.begin(IR_PIN);



}

void loop(){

   
    if (IRLremote.available())
    {
     
    auto data = IRLremote.read() ;
    Serial.print("address: ");
    Serial.println(data.address);
    Serial.print("command: ");
    Serial.println(data.command);

    switch (data.command)
    {
    case 40:
        digitalWrite(LED_BUILTIN, HIGH);
        break;
    case 0:
        digitalWrite(LED_BUILTIN, LOW);
        break;
    default:
        break;
    }


    }
    
    


}