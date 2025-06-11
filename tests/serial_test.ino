void setup() {
  Serial.begin(115200);
  delay(1000); // Seri portun hazırlanmasını bekle
  Serial.println("Merhaba dünya! ESP32-CAM ayakta 🚀");
}

void loop() {
  Serial.println("Loop çalışıyor...");
  delay(2000);
}
