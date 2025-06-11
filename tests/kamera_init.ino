#include "esp_camera.h"

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("📷 Kamera testi başlıyor...");

  if (!psramFound()) {
    Serial.println("❌ PSRAM bulunamadı!");
  } else {
    Serial.println("✅ PSRAM bulundu!");
  }

  camera_config_t config;
  config.ledc_channel = LEDC_CHANNEL_0;
  config.ledc_timer = LEDC_TIMER_0;
  config.pin_d0 = 5;
  config.pin_d1 = 18;
  config.pin_d2 = 19;
  config.pin_d3 = 21;
  config.pin_d4 = 36;
  config.pin_d5 = 39;
  config.pin_d6 = 34;
  config.pin_d7 = 35;
  config.pin_xclk = 0;
  config.pin_pclk = 22;
  config.pin_vsync = 25;
  config.pin_href = 23;
  config.pin_sscb_sda = 26;
  config.pin_sscb_scl = 27;
  config.pin_pwdn = 32;
  config.pin_reset = -1;
  config.xclk_freq_hz = 20000000;
  config.pixel_format = PIXFORMAT_JPEG;

  if(psramFound()){
    config.frame_size = FRAMESIZE_QVGA;
    config.jpeg_quality = 12;
    config.fb_count = 1;
  } else {
    config.frame_size = FRAMESIZE_QQVGA;
    config.jpeg_quality = 12;
    config.fb_count = 1;
  }

  Serial.println("📷 Kamera başlatılıyor...");
  esp_err_t err = esp_camera_init(&config);
  if (err != ESP_OK) {
    Serial.printf("❌ Kamera başlatılamadı. Hata kodu: 0x%x\n", err);
    return;
  }

  Serial.println("🎉 Kamera başarıyla başlatıldı!");
}

void loop() {
  delay(1000);
}

