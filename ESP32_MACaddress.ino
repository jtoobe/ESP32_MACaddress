// para ESP32

// Muestra la direccion macaddress en un formato listo para copiar y pegar para su uso con ESP-NOW


#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(2000);  // espera de 2 segundos (para ESP01)

  // Inicializa WiFi (no se conecta a ninguna red)
  WiFi.mode(WIFI_STA);
  WiFi.begin();

  // Obtiene la dirección MAC como array de bytes
  uint8_t mac[6];
  WiFi.macAddress(mac);

  // Muestra la MAC en formato 0xXX,0xXX,0xXX,0xXX,0xXX,0xXX
  Serial.println();
  Serial.print("MAC: ");
  for (int i = 0; i < 6; i++) {
    Serial.print("0x");
    if (mac[i] < 0x10) Serial.print("0"); // agrega un 0 delante si es menor a 0x10
    Serial.print(mac[i], HEX);
    if (i < 5) Serial.print(",");
  }
  Serial.println();
}

void loop() {}
