#include <WiFi.h>
const char* ssid = "Dialog 4G+";
const char* password = "0724040@#";

//->Wifi
void initWiFi() {

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}
//<-Wifi

void setup() {

Serial.begin(9600);

//->Wifi
  initWiFi();
  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("Connected to WiFi. IP address: ");
    Serial.println(WiFi.localIP());
    Serial.println(ssid);
    Serial.print("RSSI: ");
    Serial.println(WiFi.RSSI());
  } else {
    Serial.println("Failed to connect to WiFi.");
  }
//<-Wifi

}

void loop() {
  
}