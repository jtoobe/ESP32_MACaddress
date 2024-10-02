// para obtener la mac address de una placa ESP8266
// tambien sirve para la wemos 01


#include <ESP8266WiFi.h>
 
void setup(){
 
   Serial.begin(115200);
   delay(500);
 
   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress());
 
}
 
void loop(){}
