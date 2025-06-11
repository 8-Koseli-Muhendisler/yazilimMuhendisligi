#include "esp_system.h"
#include "esp_heap_caps.h"

void setup() {
  Serial.begin(115200);
  delay(1000);

  if (psramFound()) {
    Serial.println("✅ PSRAM bulundu!");
    size_t total_psram = heap_caps_get_total_size(MALLOC_CAP_SPIRAM);
    size_t free_psram = heap_caps_get_free_size(MALLOC_CAP_SPIRAM);
    Serial.printf("📦 Toplam PSRAM: %u byte\n", total_psram);
    Serial.printf("📭 Boş PSRAM: %u byte\n", free_psram);
  } else {
    Serial.println("❌ PSRAM bulunamadı veya çalışmıyor.");
  }
}

void loop() {
  delay(5000);
}
