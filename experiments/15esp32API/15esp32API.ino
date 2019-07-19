#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Emprendedores";
const char* password = "AxtVvm13";

void connectToNetwork() 
{
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Tratando de establecer conexión...");
    }
    Serial.println("Conexión establecida :D");
}

void setup(){

    Serial.begin(115200);
    delay(1000);
    // WiFi.begin(ssid, password);
    connectToNetwork();

}

void loop()
{


    if (WiFi.status() == WL_CONNECTED)
    {

        HTTPClient http;
        http.begin("https://iot-course-a2bfd.firebaseio.com/data.json");
        //int httpCode = http.GET();
        int httpCode = http.POST("{\"nombre\": \"Daniela\"}");

        if (httpCode >= 200 && httpCode < 206)
        {
            String payload = http.getString();
            Serial.println(httpCode);
            Serial.println(payload); 
        }
        else
        {
            Serial.println(httpCode);
            Serial.println("Error en la conexion");
        }

        http.end();
    }
    
    delay(10000);



}

