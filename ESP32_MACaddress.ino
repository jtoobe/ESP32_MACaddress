// para ESP32
#include <WiFi.h>

void setup(){

   Serial.begin(115200);

   // espera de 2 segundos (para ESP01)
   delay(2000);

   // para ESP32
   WiFi.begin();
   

   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress());

}

void loop(){}
