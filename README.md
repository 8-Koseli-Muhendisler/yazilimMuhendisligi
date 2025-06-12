# yazilimMuhendisligi
yazilim muhendisligi donem projesi deposudur

# 🌱 ESP32-CAM ile TinyML Tabanlı Nesne Tanıma Sistemi

Bu proje, düşük güçlü IoT cihazları olan **ESP32-CAM** üzerinde çalışan, **TinyML (Tiny Machine Learning)** tabanlı bir nesne tanıma sistemidir. Projede, makine öğrenmesi modeli **Edge Impulse** platformu kullanılarak eğitilmiş ve ESP32-CAM’e deploy edilmiştir.

## 🎯 Proje Amacı

ESP32-CAM gibi donanım açısından kısıtlı gömülü sistemlerde, gerçek zamanlı görüntü işleme ve nesne tanıma işlemini gerçekleştirmek. Bu amaçla:

- Düşük maliyetli ve enerji verimli bir çözüm geliştirmek
- Görüntüleri cihaz üzerinde işleyerek gecikmeyi azaltmak
- Ağ trafiğini düşürmek ve gizliliği korumak

---

## 🧠 Kullanılan Teknolojiler

- **ESP32-CAM (AI-Thinker modeli)**
- **Edge Impulse Studio** (model eğitimi)
- **FOMO (MobileNetV2)** modeli
- **Arduino IDE**
- **GitHub + Jira** (proje ve kod yönetimi)

---

## ⚙️ Kurulum ve Kullanım

### 1. Gerekli Yazılımlar:
- [Arduino IDE](https://www.arduino.cc/en/software)
- ESP32 board tanımı (Boards Manager'dan ESP32 kurun)
- Gerekli kütüphaneler:
  - `esp_camera`
  - `Wire`

### 2. Kurulum Adımları:

```bash
1. Projeyi klonlayın: git clone https://github.com/kullanici/proje.git
2. Arduino IDE ile source/esp32_camera.ino dosyasını açın
3. Araçlar > Kart: ESP32 Wrover Module /AI Thinker ESP32-CAM
4. Bağlantı Noktası (Port) seçin
5. Kodu ESP32-CAM'e yükleyin


🔍 Test Edilen Özellikler
 - Seri port iletişimi (UART) testi

 - PSRAM algılama ve bellek durumu

 - Kamera başlatma ve görüntü alma

 - Farklı ışık koşullarında modelin başarımı

🧪 Model Bilgisi
Model türü: FOMO (MobileNetV2 tabanlı)

Eğitildiği platform: Edge Impulse

Sınıflar: Domates, Biber, Havuç, Patlıcan, Salatalık

F1 Skoru:

 - Başlangıç modeli: %94 (overfit) 

 - Optimize edilmiş model: %78

📌 Bilinen Sorunlar ve Sınırlamalar
 - Düşük ışıkta model doğruluğu azalabilir

 - Daha büyük modeller deploy edilememektedir (PSRAM sınırları) 

🤝 Katkı Sağlayanlar
[Hazan Yücel] – Model Eğitimi, Kod Entegrasyonu

[Hacer Çadırcı] – Test Kodları, Donanım Testleri

[Esra Aslanboğa] – Görüntü Etiketlemesi