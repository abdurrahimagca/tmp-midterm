## Slayt 1 


### DSLAM (Digital Subscriber Line Access Multiplexer)

> DSLAM, internet servis sağlayıcılarının kullanıcılarına DSL teknolojisi üzerinden internet erişimi sağlamak için kullandığı bir cihazdır. Telefon hatları üzerinden gelen sinyalleri alır ve bunları yüksek hızlı dijital sinyallere dönüştürerek ağ altyapısına iletir.

#### Soru: Uç sistemleri kenar yönlendiriciye nasıl bağlarız?

- Yerleşik erişim ağları
- Kurumsal erişim ağları (ör. okul, şirket)
- Mobil erişim ağları

#### Unutulmaması Gerekenler:

- Erişim ağlarının bant genişliği (bits/saniye)?
- Paylaşımlı mı? Ayrılmış mı?

***startofai

# Uç Sistemleri Kenar Yönlendiriciye Nasıl Bağlanır?

Uç sistemleri (bilgisayarlar, telefonlar, yazıcılar vb.), **kenar yönlendiriciye** (edge router) **erişim ağları** aracılığıyla bağlanır. Bu ağlar üç ana gruba ayrılır:

---

## 1. 🏠 Yerleşik Erişim Ağları (Residential Access Networks)

Ev kullanıcıları tarafından kullanılır.

- **DSL (Digital Subscriber Line):** Telefon hattı üzerinden internet sağlar.  
- **Kablo İnternet:** TV kablosu üzerinden yüksek hızlı bağlantı.  
- **Fiber Optik:** En hızlı erişim şeklidir, doğrudan eve fiber kablo gelir.  
- **Wi-Fi:** Modem üzerinden ev içi kablosuz bağlantı.

**Bant Genişliği:**
- Genellikle **paylaşımlı**dır.
- Aynı mahalledeki kullanıcılar aynı altyapıyı paylaşır.
- **Tipik hızlar:** 10 Mbps – 1 Gbps

---

## 2. 🏢 Kurumsal Erişim Ağları (Institutional/Enterprise Access Networks)

Şirketler, okullar, hastaneler gibi kurumlar tarafından kullanılır.

- **Ethernet LAN:** Kablolu bağlantı, yüksek hız ve kararlılık sağlar.  
- **Wi-Fi:** Kurumsal güvenlik seviyesinde kablosuz bağlantı.  
- **VPN:** Dış ağdan kurumsal ağa güvenli erişim için kullanılır.

**Bant Genişliği:**
- Genellikle **ayrılmış**tır veya yöneticiler tarafından yönetilir.
- Kullanıcılar için belirli hızlar atanabilir.
- **Tipik hızlar:** 100 Mbps – 10 Gbps

---

## 3. 📱 Mobil Erişim Ağları (Mobile Access Networks)

Cep telefonları, tabletler ve mobil cihazlar içindir.

- **4G/5G/LTE:** Operatör bazlı mobil bağlantılar.  
- **Mobil hotspot:** Telefon veya cihaz üzerinden internet paylaşımı.

**Bant Genişliği:**
- Genellikle **paylaşımlı**dır.
- Aynı baz istasyonuna bağlı tüm kullanıcılar bant genişliğini paylaşır.
- **Tipik hızlar:**
  - 4G: 10–100 Mbps  
  - 5G: 100 Mbps – 1 Gbps+

---

## ❗ "Paylaşımlı mı? Ayrılmış mı?" Açıklaması

| Özellik       | Paylaşımlı                                | Ayrılmış                                  |
|---------------|--------------------------------------------|--------------------------------------------|
| **Tanım**      | Aynı bağlantıyı birden çok kullanıcı paylaşır | Her kullanıcıya özel bir bant genişliği sağlanır |
| **Örnek**      | Kablo internet, mobil şebekeler           | Kurumsal Ethernet bağlantısı               |
| **Avantaj**    | Daha ucuz ve yaygın                       | Daha hızlı ve kararlı bağlantı             |
| **Dezavantaj** | Yoğun saatlerde hız düşebilir             | Maliyet daha yüksektir                     |

---

Bu bilgiler, uç sistemlerin internete nasıl bağlandığını ve bağlantının doğasına göre değişen özellikleri anlamak için önemlidir.
***endofai

