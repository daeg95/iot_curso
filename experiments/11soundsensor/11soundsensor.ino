#define umbral 34 // Sensor grande (definir variable global)

const int sound = A0; // const para 
const int led = 10; 
//const int digital = 11; 
int sensorValue = 0;



void setup (){

    pinMode(10, OUTPUT);
    Serial.begin(9600);
}

void loop(){

    sensorValue = map(analogRead(sound),0,1023,0,5);
    //sensorValue = analogRead(sound);
    Serial.println("Umbral de ruido: ");

    //sensorValue = digitalRead(digital);
    //Serial.println("Umbral de ruido: ");

    Serial.println(sensorValue);
    delay(10);
    if (sensorValue > umbral )
    {
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
    
    


}