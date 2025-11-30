#include <WiFi.h>

const char* ssid = "505_escritorio";
const char* senha = "29102017";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, senha);

  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConectado!");
  Serial.println(WiFi.localIP());
}

void loop() {}