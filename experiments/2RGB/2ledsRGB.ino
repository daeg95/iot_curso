    int RED = 13;
    int GREEN = 12;
    int YELLOW = 11;

    
void setup(){


    pinMode(RED,OUTPUT);
    pinMode(GREEN,OUTPUT);
    pinMode(YELLOW,OUTPUT);

    digitalWrite(RED,LOW);
    digitalWrite(GREEN,LOW);
    digitalWrite(YELLOW,LOW);
}
void loop(){


    digitalWrite(RED,HIGH);
    delay(1000);
    digitalWrite(RED,LOW);
    delay(1000);
    digitalWrite(YELLOW,HIGH);
    delay(500);
    digitalWrite(YELLOW,LOW);
    delay(500);
    digitalWrite(GREEN,HIGH);
    delay(1000);
    digitalWrite(GREEN,LOW);
    delay(1000);

    
    
    

    



}