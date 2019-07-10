int LED = 10;
int BUTTON = 6;
bool state = false;

void setup(){

    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);

}
void loop(){ 
    
    state = digitalRead (BUTTON);

    if (state == false)
    {
        digitalWrite(LED, HIGH);
    }
    
    else
    {
        digitalWrite(LED, LOW);
    }
    



}