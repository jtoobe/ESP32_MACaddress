// para obtener la mac address de una placa ESP8266
// tambien sirve para la wemos 01

// Para ESP8266
#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(2000);  // espera de 2 segundos

  // Modo estación (para obtener la MAC del WiFi)
  WiFi.mode(WIFI_STA);

  // Obtiene la dirección MAC como array de bytes
  uint8_t mac[6];
  WiFi.macAddress(mac);

  // Muestra la MAC en formato 0xXX,0xXX,0xXX,0xXX,0xXX,0xXX
  Serial.println();
  Serial.print("MAC: ");
  for (int i = 0; i < 6; i++) {
    Serial.print("0x");
    if (mac[i] < 0x10) Serial.print("0"); // agrega un 0 delante si hace falta
    Serial.print(mac[i], HEX);
    if (i < 5) Serial.print(",");
  }
  Serial.println();
}

void loop() {}

