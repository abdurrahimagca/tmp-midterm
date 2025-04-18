# Detaylı Bilgi ve Ağ Güvenliği Kavramları Notları

## 1. Bilgi ve Ağ Güvenliği: Tanım, Kapsam ve Önemi

**Siber Güvenlik (Cybersecurity)**, dijital ortamdaki varlıkları korumayı amaçlayan, teknoloji, süreç ve kontrollerin bir bütünüdür. Bu varlıklar şunları içerir:

-   **Donanım:** Bilgisayarlar, sunucular, mobil cihazlar, ağ ekipmanları (router, switch, firewall).
-   **Yazılım:** İşletim sistemleri, uygulamalar, veritabanları.
-   **Veri:** Kurumsal bilgiler, kişisel veriler, finansal kayıtlar, fikri mülkiyet.
-   **Altyapı:** Ağlar (LAN, WAN, İnternet), bulut bilişim ortamları, endüstriyel kontrol sistemleri (ICS/SCADA).
-   **İnsan Faktörü:** Çalışanlar, kullanıcılar, yöneticiler.

**Temel Amaç:** Siber tehditlere ve saldırılara karşı koruma sağlayarak, bilgi sistemlerinin ve verilerin **Gizliliğini (Confidentiality)**, **Bütünlüğünü (Integrity)** ve **Erişilebilirliğini (Availability)** (CIA Üçgeni) sağlamaktır.

**Kapsamı:** Siber güvenlik, yalnızca teknik önlemleri değil, aynı zamanda şunları da içerir:

-   **Güvenlik Politikaları ve Prosedürleri:** Kurumun güvenlik hedeflerini, sorumlulukları ve uyulması gereken kuralları tanımlar. (Örn: Parola politikası, veri sınıflandırma politikası, olay müdahale planı).
-   **Risk Yönetimi:** Potansiyel tehditlerin ve zafiyetlerin belirlenmesi, analiz edilmesi ve azaltılması süreçleri.
-   **Erişim Yönetimi (Access Control):** Kullanıcıların ve sistemlerin yalnızca yetkili oldukları kaynaklara erişebilmesini sağlama.
-   **Kriptografi:** Verilerin yetkisiz erişime karşı korunması (şifreleme) ve doğrulanması (dijital imza, hash).
-   **Ağ Güvenliği:** Ağ altyapısını ve ağ üzerinden iletilen veriyi koruma (Firewall, IDS/IPS, VPN).
-   **Uygulama Güvenliği:** Yazılım geliştirme yaşam döngüsü boyunca güvenlik prensiplerinin uygulanması (OWASP Top 10).
-   **Fiziksel Güvenlik:** Bilgi işlem varlıklarının bulunduğu fiziksel ortamların korunması (Kilitli odalar, kameralar, erişim kartları).
-   **İş Sürekliliği ve Felaket Kurtarma (BCDR):** Kesinti veya felaket durumunda operasyonların devamlılığını ve sistemlerin kurtarılmasını planlama.
-   **Eğitim ve Farkındalık:** Kullanıcıları güvenlik tehditleri ve en iyi uygulamalar konusunda bilinçlendirme (Phishing, sosyal mühendislik).
-   **Yasal ve Düzenleyici Uyum:** GDPR, KVKK, HIPAA, PCI-DSS gibi yasal düzenlemelere ve standartlara uyum sağlama.

---

## 2. Güvenlik Tehditleri, Saldırılar, Hizmetler ve Mekanizmalar

**Tehdit (Threat):** Güvenliği potansiyel olarak ihlal edebilecek herhangi bir durum, olay, kişi veya yetenek. Örnekler: Kötü amaçlı yazılımlar (malware), zafiyetler (vulnerabilities), doğal afetler, insan hataları, kasıtlı saldırılar.

**Zafiyet (Vulnerability):** Bir sistemin veya varlığın tasarımındaki, uygulamasındaki veya operasyonundaki bir zayıflık. Tehditler bu zafiyetleri kullanarak saldırı gerçekleştirir. Örnekler: Yazılım hataları (bugs), konfigürasyon hataları, zayıf parolalar, güncellenmemiş sistemler.

**Risk:** Bir tehdidin belirli bir zafiyetten yararlanma olasılığı ile bunun sonucunda ortaya çıkacak etkinin (kaybın) birleşimi. Risk = Olasılık x Etki.

**Saldırı (Attack):** Bir tehdit kaynağının (saldırganın) bir zafiyetten yararlanarak güvenlik politikalarını kasıtlı olarak ihlal etme eylemi.

**Güvenlik Hizmeti (Security Service):** Bir sistemin veya organizasyonun bilgi varlıklarının güvenliğini artırmaya yönelik bir işleme veya iletişim hizmeti. OSI Güvenlik Mimarisi (X.800) ve RFC 4949 tarafından tanımlanmıştır. Başlıca hizmetler:
    -   **Kimlik Doğrulama (Authentication):** İletişim kuran tarafların veya veri kaynağının kimliğini doğrulama.
    -   **Erişim Kontrol (Access Control):** Kaynaklara yetkisiz erişimi engelleme.
    -   **Veri Gizliliği (Data Confidentiality):** Verinin yetkisiz kişilerce okunmasını engelleme (Şifreleme).
    -   **Veri Bütünlüğü (Data Integrity):** Verinin yetkisiz olarak değiştirilmediğini veya bozulmadığını garanti etme.
    -   **Reddetmeme (Non-repudiation):** Bir eylemin veya olayın gerçekleştiğinin inkar edilememesini sağlama (Gönderenin gönderdiğini, alıcının aldığını inkar edememesi).
    -   **Kullanılabilirlik (Availability):** Yetkili kullanıcıların kaynaklara ihtiyaç duyduklarında erişebilmesini sağlama.

**Güvenlik Mekanizması (Security Mechanism):** Bir veya daha fazla güvenlik hizmetini sağlamak için kullanılan teknik veya prosedür.
    -   **Şifreleme (Encryption):** Veri gizliliğini sağlar.
    -   **Dijital İmza (Digital Signature):** Kimlik doğrulama, veri bütünlüğü ve reddetmeme sağlar.
    -   **Erişim Kontrol Mekanizmaları:** Erişim kontrol listeleri (ACL), roller, yetenekler (capabilities).
    -   **Veri Bütünlüğü Mekanizmaları:** Hash fonksiyonları (MD5, SHA-256), Mesaj Doğrulama Kodları (MAC, HMAC).
    -   **Kimlik Doğrulama Değişimi (Authentication Exchange):** Parolalar, Kerberos, sertifikalar (X.509).
    -   **Trafik Dolgusu (Traffic Padding):** Trafik analizi saldırılarına karşı koruma.
    -   **Yönlendirme Kontrolü (Routing Control):** Güvenli yollar üzerinden veri iletimi.
    -   **Noter Tasdiki (Notarization):** Üçüncü bir güvenilir taraf aracılığıyla veri özelliklerini (bütünlük, kaynak, zaman) doğrulama.

### Saldırı Sınıflandırması

**Pasif Saldırılar:** Sisteme doğrudan müdahale etmeden bilgi toplamaya odaklanır. Tespit edilmesi zordur. Önleme odaklıdır.
    -   **Mesaj İçeriğinin Açığa Çıkması (Release of Message Contents / Eavesdropping):** İletişimi dinleyerek (örn. ağ trafiğini yakalayarak) hassas bilgileri elde etme.
    -   **Trafik Analizi (Traffic Analysis):** İletişimin içeriğini anlamasa bile, iletişim kuran tarafları, iletişimin sıklığını ve uzunluğunu analiz ederek bilgi çıkarma. Şifreli trafikte bile yapılabilir.

**Aktif Saldırılar:** Veri akışını değiştirme veya sahte bir akış oluşturma yoluyla sisteme müdahale eder. Tespit odaklıdır (ve önleme).
    -   **Maskeli Balo / Taklit (Masquerade):** Bir varlığın başka bir varlık gibi davranması (örn. sahte IP adresi kullanma, sahte e-posta gönderme).
    -   **Tekrarlama (Replay):** Yakalanan geçerli bir veri biriminin daha sonra tekrar gönderilmesi (örn. eski bir kimlik doğrulama mesajının tekrar kullanılması). Zaman damgaları ve sıra numaraları ile önlenebilir.
    -   **Mesaj Değiştirme (Modification of Messages):** İletilen mesajın içeriğinin bir kısmının değiştirilmesi, geciktirilmesi veya sırasının bozulması.
    -   **Hizmet Reddi (Denial of Service - DoS):** Bir sistemin veya ağın kaynaklarını tüketerek veya hizmetlerini kesintiye uğratarak meşru kullanıcıların erişimini engelleme.
        -   **Dağıtık Hizmet Reddi (Distributed Denial of Service - DDoS):** Çok sayıda ele geçirilmiş sistem (botnet) kullanılarak yapılan DoS saldırısı.

---

## 3. Güvenlik Hedefleri: CIA Üçgeni ve Ötesi

Güvenliğin temel taşları genellikle CIA Üçgeni olarak adlandırılır:

1.  **Gizlilik (Confidentiality):**
    -   **Tanım:** Bilginin yalnızca yetkili kişiler, süreçler veya sistemler tarafından erişilebilir olmasını sağlama. Yetkisiz ifşayı önleme.
    -   **Mekanizmalar:** Şifreleme (veriyi okunamaz hale getirme), Erişim Kontrolü (kimin neye erişebileceğini belirleme), Veri Maskeleme/Anonimleştirme, Fiziksel Güvenlik.
    -   **İhlal Örnekleri:** Veri sızıntıları, ağ dinleme, omuz sörfü (shoulder surfing), parola çalma.
    -   **Mahremiyet (Privacy):** Genellikle kişisel verilerle ilgilidir. Bireylerin kişisel bilgilerinin toplanması, kullanılması ve ifşa edilmesi üzerinde kontrol sahibi olma hakkı. Gizliliğin bir alt kümesi veya ilişkili bir kavram olarak görülebilir.

2.  **Bütünlük (Integrity):**
    -   **Tanım:** Verilerin ve sistemlerin doğruluğunu, tutarlılığını ve güvenilirliğini koruma. Bilginin yetkisiz olarak değiştirilmesini, silinmesini veya oluşturulmasını önleme.
    -   **Mekanizmalar:** Hash Fonksiyonları (verinin değişip değişmediğini kontrol etme), Dijital İmzalar (kaynağı doğrulama ve değişikliği tespit etme), Erişim Kontrolü, Sürüm Kontrolü, Yedekleme ve Geri Yükleme.
    -   **İhlal Örnekleri:** Veritabanı kayıtlarının izinsiz değiştirilmesi, web sitesi içeriğinin tahrif edilmesi (defacement), virüs bulaşması sonucu dosyaların bozulması.

3.  **Kullanılabilirlik / Erişilebilirlik (Availability):**
    -   **Tanım:** Yetkili kullanıcıların ihtiyaç duydukları anda bilgiye ve kaynaklara zamanında ve kesintisiz olarak erişebilmesini sağlama.
    -   **Mekanizmalar:** Yedeklilik (Redundancy - donanım, ağ bağlantıları), Yük Dengeleme (Load Balancing), Felaket Kurtarma Planları, DoS/DDoS Koruma Sistemleri, Düzenli Bakım ve Güncelleme.
    -   **İhlal Örnekleri:** DoS/DDoS saldırıları, donanım arızaları, yazılım hataları, fidye yazılımları (ransomware), altyapı sorunları (elektrik kesintisi).

**Ek Güvenlik Hedefleri:** CIA üçgeni temel olsa da, modern güvenlik anlayışı genellikle ek hedefleri de içerir:

4.  **Kimlik Doğrulama (Authentication):**
    -   **Tanım:** Bir kullanıcı, cihaz veya sürecin iddia ettiği kimlik olduğunu doğrulama. "Sen kimsin?" sorusuna cevap verir.
    -   **Yöntemler:** Bildiğiniz bir şey (parola, PIN), Sahip olduğunuz bir şey (token, akıllı kart, cep telefonu), Olduğunuz bir şey (biyometri - parmak izi, yüz tanıma). Çok Faktörlü Kimlik Doğrulama (MFA) bu yöntemlerden en az ikisini birleştirir.
    -   **İlişkili Hizmet:** Eş varlık doğrulama, Veri kaynağı doğrulama.

5.  **Yetkilendirme (Authorization):**
    -   **Tanım:** Kimliği doğrulanmış bir kullanıcının veya sürecin hangi kaynaklara erişebileceğini ve bu kaynaklar üzerinde hangi işlemleri yapabileceğini belirleme. "Ne yapmana izin var?" sorusuna cevap verir. Genellikle Erişim Kontrolü ile yakından ilişkilidir.

6.  **Hesap Verebilirlik / İzlenebilirlik (Accountability / Auditability):**
    -   **Tanım:** Bir varlığın eylemlerinin benzersiz bir şekilde o varlığa kadar izlenebilmesini sağlama. Güvenlik olaylarının kaydedilmesi (logging) ve bu kayıtların incelenmesi (auditing).
    -   **Mekanizmalar:** Sistem günlükleri (System Logs), Denetim İzleri (Audit Trails), Güvenlik Bilgi ve Olay Yönetimi (SIEM) sistemleri.

7.  **Reddetmeme (Non-repudiation):**
    -   **Tanım:** Bir eylemin veya işlemin gerçekleştirildiğinin veya bir mesajın gönderildiğinin/alındığının daha sonra inkar edilememesini sağlama.
    -   **Mekanizmalar:** Dijital İmzalar (Gönderimi reddetmeme), Teslimat ve Okundu Bilgileri (Alımı reddetmeme - daha zayıf güvence). Özellikle yasal ve finansal işlemlerde önemlidir.

---

## 4. Kimlik Doğrulama ve Erişim Kontrol Modelleri

**Kimlik Doğrulama (Authentication):** Yukarıda (Güvenlik Hedefleri altında) detaylandırılmıştır. Temel olarak bir kimlik iddiasının doğrulanmasıdır.

**Erişim Kontrol (Access Control):** Kimliği doğrulanmış öznelerin (kullanıcılar, süreçler) nesnelere (dosyalar, veritabanları, cihazlar) erişimini yönetme sürecidir. Yetkilendirme politikalarını uygular.

**Temel Erişim Kontrol Modelleri:**

1.  **İsteğe Bağlı Erişim Kontrolü (Discretionary Access Control - DAC):**
    -   **Tanım:** Nesnenin sahibi (genellikle oluşturan kullanıcı) erişim izinlerini belirler ve diğer kullanıcılara yetki verir veya vermez. Esnektir ancak merkezi kontrolü zayıftır.
    -   **Örnek:** Standart dosya sistemi izinleri (Linux/Unix `chmod`, Windows NTFS izinleri). Bir kullanıcı kendi dosyasının okuma/yazma izinlerini diğer kullanıcılara verebilir.
    -   **Zayıflık:** Yetki verilen bir kullanıcı bu yetkiyi başkalarına aktarabilir (Truva atı riski). Bilgi akışını kontrol etmek zordur.

2.  **Zorunlu Erişim Kontrolü (Mandatory Access Control - MAC):**
    -   **Tanım:** Erişim kararları, sistem yöneticisi tarafından tanımlanan merkezi bir güvenlik politikasına dayanır. Özneler (kullanıcılar) ve nesneler (veriler) güvenlik etiketleri (örn: Çok Gizli, Gizli, Özel) ile sınıflandırılır. Erişim, öznenin güvenlik seviyesi ile nesnenin güvenlik seviyesi arasındaki ilişkiye göre belirlenir (örn: Bell-LaPadula modeli - gizlilik odaklı, Biba modeli - bütünlük odaklı).
    -   **Özellikler:** Daha güvenli, merkezi kontrol sağlar, bilgi akışını kısıtlar. Daha az esnektir ve yönetimi karmaşıktır.
    -   **Kullanım Alanları:** Askeri sistemler, yüksek güvenlik gerektiren devlet kurumları, bazı güvenli işletim sistemleri (SELinux, AppArmor).

3.  **Rol Tabanlı Erişim Kontrolü (Role-Based Access Control - RBAC):**
    -   **Tanım:** Erişim izinleri doğrudan kullanıcılara değil, roller aracılığıyla atanır. Kullanıcılara bir veya daha fazla rol atanır ve bu roller aracılığıyla ilgili izinlere sahip olurlar. Yönetimi basitleştirir.
    -   **Özellikler:** Yönetilebilirlik (kullanıcı ekleme/çıkarma/pozisyon değişikliği kolaylaşır), En Az Yetki Prensibi (Principle of Least Privilege) uygulamasını kolaylaştırır, görev ayrılığı (Separation of Duties) politikalarını destekler.
    -   **Kullanım Alanları:** Kurumsal uygulamalar, veritabanı yönetim sistemleri, işletim sistemleri. Günümüzde en yaygın kullanılan modellerden biridir.

4.  **Öznitelik Tabanlı Erişim Kontrolü (Attribute-Based Access Control - ABAC):**
    -   **Tanım:** Erişim kararları, özneler (kullanıcı özellikleri: departman, pozisyon, konum), nesneler (veri sınıflandırması, oluşturulma tarihi), eylemler (okuma, yazma, silme) ve çevresel koşullar (zaman, konum, tehdit seviyesi) gibi çeşitli özniteliklere dayalı olarak dinamik olarak belirlenen politikalara göre verilir.
    -   **Özellikler:** Çok esnek ve granüler kontrol sağlar. Karmaşık senaryoları destekler. Politika yönetimi karmaşık olabilir.
    -   **Kullanım Alanları:** Modern, dinamik ve karmaşık sistemler, bulut ortamları, IoT.

---

## 5. Kriptografinin Temelleri ve Sınıflandırılması

**Kriptografi:** Mesajları (veriyi) yetkisiz tarafların anlayamayacağı bir forma dönüştürme (şifreleme) ve/veya mesajın bütünlüğünü ve kaynağını doğrulama bilimi ve sanatıdır.

**Temel Kavramlar:**
-   **Düz Metin (Plaintext):** Orijinal, okunabilir mesaj.
-   **Şifreli Metin (Ciphertext):** Şifreleme algoritması uygulandıktan sonraki anlaşılamaz mesaj.
-   **Şifreleme (Encryption):** Düz metni şifreli metne dönüştürme işlemi.
-   **Deşifreleme (Decryption):** Şifreli metni tekrar düz metne dönüştürme işlemi.
-   **Anahtar (Key):** Şifreleme ve deşifreleme işlemlerini kontrol eden parametre. Algoritmanın güvenliği genellikle anahtarın gizliliğine dayanır (Kerckhoffs Prensibi).
-   **Kriptanaliz (Cryptanalysis):** Anahtarı bilmeden şifreli metinden düz metni elde etme veya anahtarı kırma bilimi.

**Kriptografik Algoritmaların Sınıflandırılması:**

1.  **Anahtarsız Kriptografi (Hash Fonksiyonları):**
    -   **Tanım:** Girdi olarak herhangi bir boyutta veri alır ve sabit boyutta bir çıktı (özet, hash değeri, mesaj özeti) üretir. Tek yönlüdür (özetten orijinal veriye dönmek hesaplama açısından imkansızdır). Girdideki küçük bir değişiklik bile çıktıda büyük bir değişikliğe neden olur (çığ etkisi).
    -   **Özellikler:**
        -   **Tek Yönlülük (One-way):** `H(x)` hesaplamak kolay, `H(x)`'ten `x`'i bulmak zor.
        -   **Çakışma Direnci (Collision Resistance):** `H(x) = H(y)` olacak şekilde farklı `x` ve `y` bulmak zor (güçlü çakışma direnci). Belirli bir `x` için `H(x) = H(y)` olacak `y` bulmak zor (zayıf çakışma direnci).
    -   **Kullanım Alanları:** Veri bütünlüğü kontrolü (dosya indirmeleri, veritabanı kayıtları), parola depolama (parolanın hash'ini saklama), dijital imzalar (mesajın hash'ini imzalama).
    -   **Algoritmalar:** MD5 (Artık güvenli değil - çakışmalar bulundu), SHA-1 (Zayıfladı), SHA-2 (SHA-256, SHA-512 - Yaygın ve güvenli), SHA-3, BLAKE2/BLAKE3.
    -   **HMAC (Hash-based Message Authentication Code):** Hash fonksiyonunu gizli bir anahtarla birleştirerek mesaj doğrulama kodu oluşturur. Hem veri bütünlüğünü hem de mesaj kaynağının kimliğini (anahtarı bilen taraf olduğunu) doğrular.

2.  **Simetrik Anahtarlı Kriptografi (Gizli Anahtarlı Kriptografi):**
    -   **Tanım:** Şifreleme ve deşifreleme için aynı gizli anahtar kullanılır. Anahtarın gönderici ve alıcı arasında güvenli bir şekilde paylaşılması gerekir (anahtar dağıtım problemi).
    -   **Avantajları:** Hızlıdır, büyük veri hacimlerini şifrelemek için uygundur.
    -   **Dezavantajları:** Anahtar yönetimi zordur (çok sayıda kullanıcı varsa çok sayıda anahtar gerekir), reddetmeme sağlamaz.
    -   **Türleri:**
        -   **Akış Şifreleri (Stream Ciphers):** Düz metni bit bit veya byte byte şifreler. Genellikle bir anahtar ve başlangıç vektörü (IV) kullanılarak üretilen sözde rastgele bir anahtar akışı (keystream) ile düz metin XOR'lanır. Örnekler: RC4 (Artık güvensiz), ChaCha20, AES-CTR (Blok şifresinin akış modunda kullanımı). Gerçek zamanlı iletişim için uygundur (ses, video).
        -   **Blok Şifreleri (Block Ciphers):** Düz metni sabit boyutlu bloklara (örn. 64-bit, 128-bit) böler ve her bloğu ayrı ayrı şifreler. Aynı anahtarla aynı düz metin bloğu her zaman aynı şifreli metin bloğunu üretir (ECB modu - güvensiz). Bu nedenle farklı çalışma modları (CBC, CFB, OFB, CTR, GCM) kullanılır. Örnekler: DES (Artık güvensiz), 3DES (Yavaş ve zayıflıyor), AES (Advanced Encryption Standard - Rijndael, 128/192/256 bit anahtar boyutları ile günümüz standardı), Blowfish, Twofish, Serpent.

3.  **Asimetrik Anahtarlı Kriptografi (Açık Anahtarlı Kriptografi):**
    -   **Tanım:** Birbirleriyle matematiksel olarak ilişkili iki anahtar kullanılır: **Açık Anahtar (Public Key)** ve **Özel Anahtar (Private Key)**. Açık anahtar serbestçe dağıtılabilir, özel anahtar ise sahibi tarafından gizli tutulmalıdır. Bir anahtarla şifrelenen veri yalnızca diğer anahtarla deşifre edilebilir.
    -   **Avantajları:** Anahtar dağıtım problemini çözer (gizli anahtarı paylaşmaya gerek yoktur), dijital imza ile kimlik doğrulama ve reddetmeme sağlar.
    -   **Dezavantajları:** Simetrik algoritmalara göre çok daha yavaştır. Genellikle büyük verileri şifrelemek için doğrudan kullanılmaz.
    -   **Kullanım Alanları:**
        -   **Şifreleme/Gizlilik:** Alıcının açık anahtarı ile şifreleme yapılır, alıcı kendi özel anahtarı ile deşifreler.
        -   **Dijital İmza (Kimlik Doğrulama, Bütünlük, Reddetmeme):** Gönderici mesajın özetini (hash) kendi özel anahtarı ile şifreler (imzalar). Alıcı, göndericinin açık anahtarı ile imzayı doğrular.
        -   **Anahtar Değişimi (Key Exchange):** Simetrik bir oturum anahtarını güvenli bir şekilde oluşturmak veya değiş tokuş etmek için kullanılır (örn. Diffie-Hellman, RSA anahtar değişimi). Hibrit şifreleme sistemlerinin temelidir (Asimetrik ile simetrik anahtar değişimi yapılır, veri simetrik anahtarla şifrelenir).
    -   **Algoritmalar:**
        -   **RSA:** Faktörizasyon zorluğuna dayanır. Hem şifreleme hem de dijital imza için kullanılır. Yaygındır.
        -   **Diffie-Hellman (DH):** Ayrık logaritma problemine dayanır. Güvenli anahtar değişimi için kullanılır, şifreleme veya imza yapmaz.
        -   **ElGamal:** Ayrık logaritma problemine dayanır. Şifreleme ve dijital imza için kullanılabilir.
        -   **Eliptik Eğri Kriptografisi (Elliptic Curve Cryptography - ECC):** Eliptik eğriler üzerindeki ayrık logaritma problemine dayanır. RSA'ya göre daha kısa anahtar boyutları ile benzer güvenlik seviyesi sağlar. Mobil cihazlar ve kısıtlı kaynaklara sahip sistemler için avantajlıdır. ECDSA (Dijital İmza), ECDH (Anahtar Değişimi).

---

## 6. Başlıca Standartlar, Organizasyonlar ve Kaynaklar

**Uluslararası Standart Kuruluşları:**

-   **ISO (International Organization for Standardization):**
    -   **ISO/IEC 27000 serisi:** Bilgi Güvenliği Yönetim Sistemleri (ISMS) standartları.
        -   **ISO/IEC 27001:** ISMS gereksinimleri (Sertifikasyon standardı).
        -   **ISO/IEC 27002:** Bilgi güvenliği kontrolleri için uygulama rehberi.
        -   **ISO/IEC 27005:** Bilgi güvenliği risk yönetimi.
        -   **ISO/IEC 27017:** Bulut hizmetleri için güvenlik kontrolleri.
        -   **ISO/IEC 27018:** Bulutta kişisel verilerin korunması.
        -   **ISO/IEC 27701:** Gizlilik Bilgi Yönetim Sistemi (PIMS) - GDPR uyumu için.
-   **IEC (International Electrotechnical Commission):** ISO ile birlikte çalışır (JTC1).
-   **ITU-T (International Telecommunication Union - Telecommunication Standardization Sector):** Telekomünikasyon ve ağ güvenliği standartları.
    -   **X.509:** Açık anahtar sertifikaları için standart.
    -   **X.800:** OSI Güvenlik Mimarisi.

**ABD Ulusal Standartlar ve Teknoloji Enstitüsü (NIST):**

-   **Special Publications (SP) 800 Serisi:** Bilgisayar güvenliği üzerine rehberler ve öneriler.
    -   **SP 800-53:** Bilgi Sistemleri ve Organizasyonlar için Güvenlik ve Gizlilik Kontrolleri.
    -   **SP 800-37:** Risk Yönetimi Çerçevesi (RMF).
    -   **SP 800-63:** Dijital Kimlik Rehberleri (Kimlik Doğrulama).
    -   **SP 800-171:** Kontrollü Sınıflandırılmamış Bilgilerin (CUI) korunması.
-   **FIPS (Federal Information Processing Standards):** ABD federal kurumları için zorunlu standartlar.
    -   **FIPS 140-2 / FIPS 140-3:** Kriptografik modüller için güvenlik gereksinimleri.
    -   **FIPS 186:** Dijital İmza Standardı (DSS).
    -   **FIPS 197:** Gelişmiş Şifreleme Standardı (AES).
-   **NIST Cybersecurity Framework (CSF):** Kritik altyapıların siber güvenliğini iyileştirmek için risk tabanlı bir yaklaşım sunan gönüllü bir çerçeve.

**İnternet Mühendisliği Görev Gücü (IETF):**

-   **RFC (Request for Comments):** İnternet standartlarını (protokoller, prosedürler) tanımlayan belgeler.
    -   **RFC 4949:** İnternet Güvenlik Sözlüğü, Sürüm 2.
    -   **RFC 5246 / RFC 8446:** TLS (Transport Layer Security) Protokolü v1.2 / v1.3.
    -   **RFC 4301-4309:** IPsec (Internet Protocol Security) Protokol paketi.
    -   **RFC 6749:** OAuth 2.0 Yetkilendirme Çerçevesi.
    -   **RFC 7519:** JSON Web Token (JWT).

**Diğer Önemli Organizasyonlar ve Kaynaklar:**

-   **OWASP (Open Web Application Security Project):** Web uygulaması güvenliği konusunda farkındalığı artırmayı amaçlayan açık bir topluluk.
    -   **OWASP Top 10:** En kritik web uygulaması güvenlik risklerinin listesi.
    -   **OWASP ASVS (Application Security Verification Standard):** Uygulama güvenliği gereksinimleri standardı.
    -   Çeşitli araçlar, belgeler ve rehberler.
-   **CIS (Center for Internet Security):** Güvenlik en iyi uygulamaları ve kıyaslamaları (benchmarks) geliştiren kar amacı gütmeyen kuruluş.
    -   **CIS Controls:** Önceliklendirilmiş siber savunma eylemleri seti.
    -   **CIS Benchmarks:** İşletim sistemleri, ara katman yazılımları, ağ cihazları için güvenli yapılandırma rehberleri.
-   **SANS Institute:** Siber güvenlik eğitimi ve sertifikasyonu konusunda lider kuruluş. Okuma odası (Reading Room) ve yayınları değerli kaynaklardır.
-   **ENISA (European Union Agency for Cybersecurity):** Avrupa Birliği'nin siber güvenlik kurumu. Raporlar, rehberler ve analizler yayınlar.
-   **PCI Security Standards Council:** Ödeme Kartı Endüstrisi (PCI) Veri Güvenliği Standardını (PCI DSS) yönetir.

**Önemli Kitaplar:**

-   **W. Stallings**, _Cryptography and Network Security: Principles and Practice_, (Son Baskı). (Kapsamlı ve akademik bir kaynak).
-   **B. Schneier**, _Applied Cryptography: Protocols, Algorithms, and Source Code in C_, (Yıldönümü Baskısı). (Kriptografi uygulamaları üzerine klasikleşmiş bir eser).
-   **C. Kaufman, R. Perlman, M. Speciner**, _Network Security: Private Communication in a Public World_, (Son Baskı). (Ağ güvenliği protokolleri üzerine detaylı bir kaynak).
-   **M. Goodrich, R. Tamassia**, _Introduction to Computer Security_. (Daha giriş seviyesi, geniş kapsamlı bir kitap).
-   **Ross Anderson**, _Security Engineering: A Guide to Building Dependable Distributed Systems_, (Son Baskı). (Güvenli sistem tasarımı üzerine derinlemesine bir eser).

Bu notlar, bilgi ve ağ güvenliğinin temel kavramlarını, mekanizmalarını ve standartlarını daha detaylı bir şekilde ele almaktadır. Alan sürekli geliştiği için güncel kaynakları ve yayınları takip etmek önemlidir.