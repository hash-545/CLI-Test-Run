#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    Serial.Println("Comm. Started!");
    
    
}

void loop()
{
    Serial.Println("This is loop!");
    delay(10000);
}