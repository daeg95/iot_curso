    int RED = 13;
    int GREEN = 12;
    int YELLOW = 11;

    
void setup(){


    for (size_t i = 10; i < 14; i++)
    {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }

}
void loop(){ 

        for (size_t i = 10; i < 14; i++)
    {
        
        digitalWrite(i, HIGH);
        delay(1000);
        digitalWrite(i, LOW);
    }


}