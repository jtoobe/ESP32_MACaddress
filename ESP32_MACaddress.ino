// para ESP8266
#include <ESP8266WiFi.h>
// para ESP32
#include <WiFi.h>

void setup(){

   Serial.begin(115200);

   // espera de 5 segundos (para ESP01)
   delay(5000);

   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress());

}

void loop(){}
