# Özet: Bilgi ve Ağ Güvenliği Kavramları

## 1. Bilgi ve Ağ Güvenliği Tanımı ve Kapsamı
**Siber güvenlik**, siber uzay ortamını, organizasyonu ve kullanıcı varlıklarını korumak için bir araya getirilen:

- **Politikalar**  
- **Prosedürler**  
- **Güvenlik kavramları ve mekanizmaları**  
- **Erişim yönetimi yaklaşımları**  
- **Eğitim & farkındalık**  
- **En iyi uygulamalar**  
- **Teknolojiler**  

Bu varlıklar; bilgi işlem cihazları, personel, altyapı, uygulamalar, hizmetler, telekomünikasyon sistemleri ve siber ortamda iletilen/depolanan tüm bilgileri kapsar.

---

## 2. Güvenlik Hizmetleri, Mekanizmaları ve Saldırılar

- **Tehdit**  
  Güvenlik ihlaline yol açma potansiyeli olan durum, olay veya eylem.

- **Saldırı**  
  Tehdidi kullanarak sistemin güvenlik politikalarını kasıtlı ihlal etme eylemi.

- **Hizmet**  
  Saldırılara karşı koyan; örn. kimlik doğrulama, şifreleme, bütünlük kontrolü.

- **Mekanizma**  
  Hizmeti sağlayan teknik veya prosedür; örn. SSL/TLS, dijital imza, erişim kontrol listeleri.

### Pasif vs. Aktif Saldırılar

| Tür     | Açıklama                                                | Örnek                                            |
|---------|---------------------------------------------------------|--------------------------------------------------|
| **Pasif**  | Sistem kaynaklarını etkilemeden, bilgi toplama         | Dinleme (eavesdropping), trafik analizi             |
| **Aktif**  | Sisteme müdahale ederek veri değiştirme veya hizmet bozma | Masquerade, veri modifikasyonu, replay, DoS        |

---

## 3. Güvenlik Hedefleri (CIA +)

1. **Gizlilik (Confidentiality)**  
   - Yetkisiz erişimi önleme  
   - Mahremiyet: Kullanıcıların verileri üzerinde kontrol

2. **Bütünlük (Integrity)**  
   - Verilerin yalnızca yetkili kişilerce değiştirilmesi  
   - **Reddetmeme (Non‑repudiation)**: İşlemi inkar edememe

3. **Kullanılabilirlik (Availability)**  
   - Hizmetlerin kesintisiz sunulması

> **Ek hedefler:**  
> - **Kimlik Doğrulama (Authentication)**  
> - **Hesap Verebilirlik (Accountability)**

---

## 4. Kimlik Doğrulama ve Erişim Kontrol

- **Kimlik Doğrulama**  
  1. Eş varlık doğrulama (karşı tarafın gerçekliğini garanti etme)  
  2. Veri kaynağı doğrulama (verinin gerçek kaynağını garanti etme)

- **Erişim Kontrol**  
  Kaynaklara erişimi kısıtlama ve denetleme:
  - DAC (Discretionary Access Control)  
  - MAC (Mandatory Access Control)  
  - RBAC (Role‑Based Access Control)

---

## 5. Kriptografinin Temel Sınıflaması

1. **Anahtarsız (Hash) Algoritmalar**  
   - Tek yönlü hash fonksiyonları  
   - HMAC: Anahtar tabanlı mesaj doğrulama

2. **Simetrik Algoritmalar**  
   - **Akış şifreleri** (stream ciphers): Bit‑bit veya byte‑byte  
   - **Blok şifreleri** (block ciphers): Sabit uzunluklu bloklar (64/128 bit)

3. **Asimetrik Algoritmalar**  
   - Açık anahtar–özel anahtar çifti  
   - RSA, ElGamal, ECC  
   - Dijital imza & anahtar değişimi

---

## 6. Başlıca Standartlar ve Kaynaklar

- **W. Stallings**, _Cryptography and Network Security: Principles and Practice_, 8th Ed., Pearson, 2017.  
- **B. Schneier**, _Applied Cryptography_, 20th Anniversary Ed., Wiley, 2015.  
- **RFC 4949**, “Internet Security Glossary, Version 2”, IETF, 2007.  
- **ISO/IEC 27001:2013**, Information Security Management Systems.  
- **NIST SP 800‑53 Rev. 5**, Security and Privacy Controls for Information Systems.  
- **NIST FIPS 140‑2**, Security Requirements for Cryptographic Modules.  
