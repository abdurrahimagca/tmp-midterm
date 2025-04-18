# Bilgi ve Ağ Güvenliği - Kilit Test Soruları ve Cevapları

**1. Soru:** Siber güvenliğin temel amacını CIA üçgeni bağlamında açıklayınız ve her bir bileşeni (Gizlilik, Bütünlük, Erişilebilirlik) tanımlayınız.
**Cevap:** Siber güvenliğin temel amacı, bilgi sistemlerinin ve verilerin Gizliliğini (Confidentiality), Bütünlüğünü (Integrity) ve Erişilebilirliğini (Availability) sağlamaktır.
    *   **Gizlilik:** Bilginin yalnızca yetkili kişilerce erişilebilir olması, yetkisiz ifşanın önlenmesi.
    *   **Bütünlük:** Verilerin doğruluğunu, tutarlılığını koruma ve yetkisiz değiştirilmesini önleme.
    *   **Erişilebilirlik:** Yetkili kullanıcıların ihtiyaç duyduklarında bilgiye ve kaynaklara zamanında erişebilmesi.

**2. Soru:** Pasif ve Aktif saldırılar arasındaki temel farkları açıklayınız ve her birine ikişer örnek veriniz.
**Cevap:**
    *   **Pasif Saldırılar:** Sisteme doğrudan müdahale etmeden bilgi toplamaya odaklanır, tespiti zordur. Örnekler: Dinleme (Eavesdropping), Trafik Analizi.
    *   **Aktif Saldırılar:** Veri akışını değiştirerek veya sahte akış oluşturarak sisteme müdahale eder, tespiti (ve önlenmesi) hedeflenir. Örnekler: Taklit (Masquerade), Tekrarlama (Replay), Mesaj Değiştirme, Hizmet Reddi (DoS).

**3. Soru:** Güvenlik hizmeti (Security Service) ve güvenlik mekanizması (Security Mechanism) kavramlarını tanımlayınız ve aralarındaki ilişkiyi açıklayınız. Bir hizmet ve onu sağlayan bir mekanizma örneği veriniz.
**Cevap:**
    *   **Güvenlik Hizmeti:** Bilgi varlıklarının güvenliğini artırmaya yönelik bir işleme veya iletişim hizmetidir (örn: Kimlik Doğrulama).
    *   **Güvenlik Mekanizması:** Bir veya daha fazla güvenlik hizmetini sağlamak için kullanılan teknik veya prosedürdür (örn: Dijital İmza).
    *   **İlişki:** Mekanizmalar, hizmetleri gerçekleştirmek için kullanılır. Örneğin, Dijital İmza mekanizması; Kimlik Doğrulama, Veri Bütünlüğü ve Reddetmeme hizmetlerini sağlayabilir.

**4. Soru:** Tehdit, zafiyet ve risk kavramlarını tanımlayınız ve birbirleriyle nasıl ilişkili olduklarını açıklayınız.
**Cevap:**
    *   **Tehdit:** Güvenliği potansiyel olarak ihlal edebilecek durum/olay/kişi.
    *   **Zafiyet:** Sistemin tasarım, uygulama veya operasyonundaki zayıflık.
    *   **Risk:** Bir tehdidin belirli bir zafiyetten yararlanma olasılığı ile bunun sonucunda ortaya çıkacak etkinin birleşimi (Risk = Olasılık x Etki).
    *   **İlişki:** Tehditler, var olan zafiyetlerden yararlanarak risk oluşturur ve saldırıları gerçekleştirir.

**5. Soru:** OSI Güvenlik Mimarisi (X.800) tarafından tanımlanan beş temel güvenlik hizmetini listeleyiniz.
**Cevap:** Kimlik Doğrulama (Authentication), Erişim Kontrolü (Access Control), Veri Gizliliği (Data Confidentiality), Veri Bütünlüğü (Data Integrity), Reddetmeme (Non-repudiation). (Kullanılabilirlik de sıklıkla eklenir).

**6. Soru:** Trafik analizi saldırısını açıklayınız. Şifrelenmiş iletişimde bile neden bir tehdit oluşturabilir?
**Cevap:** Trafik analizi, iletişimin içeriğini anlamasa bile, iletişim kuran tarafları, iletişimin sıklığını, uzunluğunu ve zamanlamasını analiz ederek bilgi çıkarma saldırısıdır. Şifreli trafikte bile, meta veriler (kimin kiminle, ne zaman, ne kadar süreyle iletişim kurduğu) analiz edilerek hassas bilgiler (örn. organizasyon yapısı, önemli olayların zamanlaması) elde edilebilir.

**7. Soru:** Hizmet Reddi (DoS) ve Dağıtık Hizmet Reddi (DDoS) saldırıları arasındaki temel fark nedir?
**Cevap:** DoS saldırısı tek bir kaynaktan hedef sisteme yönelik yapılırken, DDoS saldırısı çok sayıda (genellikle ele geçirilmiş - botnet) farklı kaynaktan eş zamanlı olarak hedef sisteme yöneltilir. DDoS'un tespiti ve engellenmesi daha zordur.

**8. Soru:** CIA üçgenine ek olarak sıklıkla belirtilen üç ek güvenlik hedefini yazınız ve kısaca tanımlayınız.
**Cevap:**
    *   **Kimlik Doğrulama (Authentication):** Bir varlığın iddia ettiği kimlik olduğunu doğrulama.
    *   **Hesap Verebilirlik (Accountability):** Bir varlığın eylemlerinin benzersiz şekilde o varlığa kadar izlenebilmesi.
    *   **Reddetmeme (Non-repudiation):** Bir eylemin veya olayın gerçekleştiğinin inkar edilememesi.

**9. Soru:** Mahremiyet (Privacy) ve Gizlilik (Confidentiality) arasındaki ilişkiyi açıklayınız.
**Cevap:** Mahremiyet, genellikle kişisel verilerle ilgilidir ve bireylerin kişisel bilgilerinin toplanması, kullanılması ve ifşası üzerinde kontrol sahibi olma hakkıdır. Gizlilik ise daha genel bir kavram olup, bilginin yetkisiz erişime karşı korunmasıdır. Mahremiyet, gizliliğin kişisel verilerle ilgili özel bir durumu veya ilişkili bir kavramı olarak görülebilir.

**10. Soru:** Veri Bütünlüğü (Integrity) hizmetini sağlamak için kullanılan iki temel güvenlik mekanizmasını yazınız.
**Cevap:** Hash Fonksiyonları ve Dijital İmzalar (veya Mesaj Doğrulama Kodları - MAC/HMAC).

**11. Soru:** Kimlik doğrulama yöntemlerinin üç temel kategorisini ("bildiğiniz", "sahip olduğunuz", "olduğunuz") açıklayınız ve her birine bir örnek veriniz.
**Cevap:**
    *   **Bildiğiniz bir şey:** Kullanıcının aklında tuttuğu bilgi (Örn: Parola, PIN).
    *   **Sahip olduğunuz bir şey:** Kullanıcının fiziksel olarak sahip olduğu nesne (Örn: Akıllı kart, Tek kullanımlık şifre üreteci (token), Cep telefonu).
    *   **Olduğunuz bir şey:** Kullanıcının biyolojik veya davranışsal özelliği (Örn: Parmak izi, Yüz tanıma, İris taraması).

**12. Soru:** Çok Faktörlü Kimlik Doğrulama (MFA) nedir ve neden tek faktörlü doğrulamadan daha güvenlidir?
**Cevap:** MFA, kimlik doğrulaması için üç temel kategoriden (bildiğiniz, sahip olduğunuz, olduğunuz) en az ikisini birleştiren bir yöntemdir. Tek faktörlü doğrulamadan daha güvenlidir çünkü bir saldırganın tek bir faktörü (örn. parolayı) ele geçirmesi, hesaba erişim için yeterli olmaz; ek bir veya daha fazla faktörün de aşılması gerekir.

**13. Soru:** İsteğe Bağlı Erişim Kontrolü (DAC) modelini açıklayınız ve en belirgin zayıflığını belirtiniz.
**Cevap:** DAC modelinde, bir nesnenin (örn. dosya) sahibi, o nesneye kimlerin erişebileceğini ve hangi haklarla (okuma, yazma vb.) erişebileceğini belirler. En belirgin zayıflığı, yetki verilen bir kullanıcının bu yetkiyi başkalarına aktarabilmesi ve bilgi akışının kontrolünün zor olmasıdır (örn. Truva atı riski).

**14. Soru:** Zorunlu Erişim Kontrolü (MAC) modelinin temel prensibini açıklayınız. Hangi tür ortamlarda daha yaygın kullanılır?
**Cevap:** MAC modelinde, erişim kararları merkezi bir güvenlik politikasına göre verilir. Özneler (kullanıcılar) ve nesneler (veriler) güvenlik etiketleriyle sınıflandırılır ve erişim, bu etiketler arasındaki kurallara göre (yönetici tarafından belirlenen) zorunlu olarak uygulanır. Yüksek güvenlik gerektiren askeri ve devlet kurumlarında daha yaygın kullanılır.

**15. Soru:** Rol Tabanlı Erişim Kontrolü (RBAC) modelinin DAC ve MAC'e göre temel avantajı nedir?
**Cevap:** RBAC'nin temel avantajı yönetilebilirliğidir. İzinler doğrudan kullanıcılara değil, rollere atanır. Kullanıcılar rollere atanır veya rollerden çıkarılır. Bu, özellikle çok sayıda kullanıcı ve izin içeren sistemlerde kullanıcı ekleme/çıkarma, pozisyon değişikliği gibi durumları büyük ölçüde basitleştirir ve "En Az Yetki Prensibi"ni uygulamayı kolaylaştırır.

**16. Soru:** Öznitelik Tabanlı Erişim Kontrolü (ABAC) modelini diğer modellerden ayıran temel özellik nedir?
**Cevap:** ABAC'yi ayıran temel özellik, erişim kararlarının statik roller veya sahip izinleri yerine; kullanıcı öznitelikleri, nesne öznitelikleri, eylem ve çevresel koşullar gibi çok sayıda özniteliğe dayalı dinamik politikalara göre verilmesidir. Bu, çok daha esnek ve granüler kontrol sağlar.

**17. Soru:** Kriptografide Kerckhoffs Prensibi ne ifade eder?
**Cevap:** Kerckhoffs Prensibi, bir kriptografik sistemin güvenliğinin, algoritmanın gizliliğine değil, yalnızca anahtarın gizliliğine dayanması gerektiğini belirtir. Yani, algoritma bilinse bile, anahtar bilinmeden sistem güvenli kalmalıdır.

**18. Soru:** Hash fonksiyonlarının temel özelliklerinden "Tek Yönlülük" ve "Çakışma Direnci"ni açıklayınız.
**Cevap:**
    *   **Tek Yönlülük (One-way):** Bir verinin hash değerini hesaplamak kolayken, hash değerinden orijinal veriyi elde etmenin hesaplama açısından imkansız (veya çok zor) olmasıdır.
    *   **Çakışma Direnci (Collision Resistance):** Farklı iki girdinin aynı hash değerini üretmesinin hesaplama açısından zor olmasıdır (Güçlü çakışma direnci).

**19. Soru:** HMAC nedir ve basit bir hash fonksiyonundan farkı nedir? Hangi ek güvenlik faydasını sağlar?
**Cevap:** HMAC (Hash-based Message Authentication Code), bir hash fonksiyonunu gizli bir anahtarla birleştiren bir mesaj doğrulama kodudur. Basit hash fonksiyonu sadece veri bütünlüğünü kontrol ederken, HMAC hem veri bütünlüğünü hem de mesajın kaynağının kimliğini (paylaşılan gizli anahtarı bilen taraf olduğunu) doğrular. Yani mesajın sadece değişmediğini değil, aynı zamanda beklenen kaynaktan geldiğini de garanti eder.

**20. Soru:** Simetrik ve Asimetrik Kriptografi arasındaki temel farkları (anahtar kullanımı, hız, temel kullanım alanları) karşılaştırınız.
**Cevap:**
    *   **Anahtar Kullanımı:** Simetrikte şifreleme ve deşifreleme için aynı gizli anahtar kullanılır. Asimetrikte ise birbiriyle ilişkili açık ve özel anahtar çifti kullanılır.
    *   **Hız:** Simetrik algoritmalar asimetrik algoritmalara göre çok daha hızlıdır.
    *   **Kullanım Alanları:** Simetrik, büyük veri hacimlerinin şifrelenmesi için kullanılır. Asimetrik, anahtar değişimi, dijital imza ve küçük verilerin şifrelenmesi için kullanılır.

**21. Soru:** Simetrik kriptografide "anahtar dağıtım problemi" nedir?
**Cevap:** Simetrik kriptografide gönderici ve alıcının aynı gizli anahtarı kullanması gerektiğinden, bu anahtarın taraflar arasında güvenli bir şekilde (yetkisiz kişilerin eline geçmeden) paylaşılması veya dağıtılması zorunluluğudur. Özellikle iletişim kuracak taraf sayısı arttıkça bu problem daha karmaşık hale gelir.

**22. Soru:** Akış şifreleri (Stream Ciphers) ve Blok şifreleri (Block Ciphers) arasındaki temel çalışma prensibi farkı nedir?
**Cevap:** Akış şifreleri, düz metni bit bit veya byte byte, genellikle bir anahtar akışı (keystream) ile XOR'layarak şifreler. Blok şifreleri ise düz metni sabit boyutlu bloklara böler ve her bloğu bir bütün olarak şifreler.

**23. Soru:** AES nedir? Açılımını yazınız ve günümüzde neden önemli bir standart olduğunu belirtiniz.
**Cevap:** AES (Advanced Encryption Standard - Gelişmiş Şifreleme Standardı), Rijndael algoritmasına dayanan bir simetrik blok şifreleme standardıdır. DES'in yerini almıştır ve 128, 192, 256 bit anahtar boyutlarını destekler. Güvenli, hızlı ve yaygın olarak desteklenmesi nedeniyle günümüzdeki en önemli ve yaygın kullanılan şifreleme standartlarından biridir.

**24. Soru:** Asimetrik kriptografinin simetrik kriptografiye göre en büyük avantajı nedir?
**Cevap:** Asimetrik kriptografinin en büyük avantajı, anahtar dağıtım problemini çözmesidir. Gizli anahtarın paylaşılmasına gerek kalmadan, açık anahtar kullanılarak güvenli iletişim (şifreleme veya anahtar değişimi) ve dijital imza işlemleri yapılabilir.

**25. Soru:** Dijital imza nasıl oluşturulur ve nasıl doğrulanır? Hangi güvenlik hizmetlerini sağlar?
**Cevap:**
    *   **Oluşturma:** Gönderici, mesajın özetini (hash) alır ve bu özeti kendi özel anahtarı ile şifreler (imzalar). İmza, mesajla birlikte gönderilir.
    *   **Doğrulama:** Alıcı, gelen mesajın özetini kendisi hesaplar. Ayrıca, göndericinin açık anahtarını kullanarak imzayı deşifreler ve içinden çıkan özeti elde eder. Bu iki özeti karşılaştırır. Eşitse imza geçerlidir.
    *   **Sağladığı Hizmetler:** Kimlik Doğrulama (imzalayanın kimliğini), Veri Bütünlüğü (mesajın değişmediğini) ve Reddetmeme (gönderenin mesajı gönderdiğini inkar edememesini).

**26. Soru:** Hibrit şifreleme nedir ve neden kullanılır?
**Cevap:** Hibrit şifreleme, asimetrik ve simetrik kriptografinin avantajlarını birleştiren bir yaklaşımdır. Genellikle, asimetrik kriptografi kullanılarak güvenli bir şekilde tek kullanımlık bir simetrik anahtar (oturum anahtarı) değiş tokuş edilir. Ardından, asıl veri bu hızlı simetrik anahtar kullanılarak şifrelenir. Bu yöntem, asimetrik kriptografinin anahtar dağıtım kolaylığını ve simetrik kriptografinin hızını bir araya getirir.

**27. Soru:** RSA algoritmasının güvenliği hangi matematiksel probleme dayanır?
**Cevap:** RSA algoritmasının güvenliği, büyük tam sayıları asal çarpanlarına ayırmanın (faktörizasyon) hesaplama açısından zor olduğu varsayımına dayanır.

**28. Soru:** Eliptik Eğri Kriptografisi (ECC), RSA'ya göre hangi temel avantajı sunar?
**Cevap:** ECC, RSA'ya göre daha kısa anahtar boyutları ile benzer veya daha yüksek güvenlik seviyesi sunar. Bu, daha az hesaplama gücü ve bant genişliği gerektirdiği anlamına gelir, bu da onu özellikle mobil cihazlar ve kısıtlı kaynaklara sahip sistemler için avantajlı kılar.

**29. Soru:** Diffie-Hellman (DH) anahtar değişimi protokolünün temel amacı nedir? Şifreleme yapar mı?
**Cevap:** Diffie-Hellman protokolünün temel amacı, güvenli olmayan bir kanal üzerinden iki tarafın ortak bir gizli anahtar üzerinde anlaşmasını sağlamaktır. Bu anahtar daha sonra simetrik şifreleme için kullanılabilir. DH protokolü kendi başına şifreleme veya kimlik doğrulama yapmaz, sadece anahtar anlaşması sağlar.

**30. Soru:** ISO/IEC 27001 standardının temel amacı nedir?
**Cevap:** ISO/IEC 27001, bir kuruluşun Bilgi Güvenliği Yönetim Sistemi (BGYS / ISMS) kurması, uygulaması, sürdürmesi ve sürekli iyileştirmesi için gereksinimleri tanımlayan uluslararası bir standarttır. Kuruluşların bilgi varlıklarını sistematik bir şekilde yönetmelerine ve korumalarına yardımcı olur ve sertifikasyon için temel oluşturur.

**31. Soru:** NIST SP 800-53 dokümanının içeriği nedir?
**Cevap:** NIST SP 800-53, ABD federal bilgi sistemleri ve kuruluşları için kapsamlı bir güvenlik ve gizlilik kontrolleri kataloğu sunar. Risk yönetimi çerçevesi içinde kullanılmak üzere tasarlanmış kontrol seçimi, uygulanması ve değerlendirilmesi için rehberlik sağlar.

**32. Soru:** FIPS 140-2/3 standardı neyi belgeler?
**Cevap:** FIPS 140-2 ve onun yerini alan FIPS 140-3, kriptografik modüllerin (donanım, yazılım veya firmware) karşılaması gereken güvenlik gereksinimlerini belirleyen ABD federal standartlarıdır. Bu standartlara uygunluk, modülün belirli bir güvenlik seviyesinde test edildiğini ve onaylandığını gösterir.

**33. Soru:** IETF tarafından yayınlanan RFC belgelerinin amacı nedir? Güvenlikle ilgili iki önemli RFC örneği veriniz.
**Cevap:** RFC (Request for Comments) belgeleri, İnternet'in protokollerini, prosedürlerini, programlarını ve kavramlarını tanımlayan ve standartlaştıran dokümanlardır. Örnekler: RFC 4949 (İnternet Güvenlik Sözlüğü), RFC 8446 (TLS 1.3), RFC 4301 (IPsec Mimarisi).

**34. Soru:** OWASP Top 10 listesinin amacı nedir?
**Cevap:** OWASP Top 10, web uygulamalarındaki en kritik güvenlik riskleri hakkında farkındalık yaratmayı amaçlayan standart bir listedir. Geliştiricilere ve güvenlik uzmanlarına, en yaygın ve tehlikeli zafiyetleri anlamaları ve önlemeleri için bir başlangıç noktası sunar.

**35. Soru:** CIS Controls (eski SANS Top 20) nedir?
**Cevap:** CIS Controls, kuruluşların siber saldırılara karşı savunmalarını iyileştirmek için uygulayabilecekleri önceliklendirilmiş, eyleme geçirilebilir en iyi siber güvenlik uygulamaları setidir. En yaygın saldırı vektörlerine odaklanır.

**36. Soru:** X.509 standardı neyi tanımlar?
**Cevap:** X.509, açık anahtar altyapılarında (PKI) kullanılan açık anahtar sertifikalarının formatını tanımlayan bir ITU-T standardıdır. Sertifikalar, bir açık anahtarın belirli bir kimliğe (kişi, sunucu vb.) ait olduğunu doğrulamak için kullanılır.

**37. Soru:** TLS/SSL protokolünün temel amacı nedir? Hangi güvenlik hizmetlerini sağlar?
**Cevap:** TLS (Transport Layer Security) ve öncülü SSL (Secure Sockets Layer), İnternet gibi ağlar üzerinden iletişim kuran iki uygulama arasında güvenli bir kanal sağlamayı amaçlayan kriptografik protokollerdir. Başlıca Gizlilik (şifreleme ile) ve Veri Bütünlüğü (MAC ile) hizmetlerini sağlar. Ayrıca, sunucu (ve isteğe bağlı olarak istemci) kimlik doğrulaması da yapabilir.

**38. Soru:** IPsec nedir ve hangi katmanda çalışır? İki temel protokolünü yazınız.
**Cevap:** IPsec (Internet Protocol Security), IP ağları üzerinden güvenli iletişim sağlamak için kullanılan bir protokol paketidir. Ağ katmanında (IP katmanı) çalışır. İki temel protokolü AH (Authentication Header - Kimlik Doğrulama Başlığı) ve ESP (Encapsulating Security Payload - Kapsülleyen Güvenlik Yükü)'dir.

**39. Soru:** Bir güvenlik mekanizması olarak "Trafik Dolgusu" (Traffic Padding) ne işe yarar? Hangi tür saldırıya karşı koruma sağlar?
**Cevap:** Trafik dolgusu, gerçek veri paketleri arasına veya sonuna anlamsız (sahte) veri ekleyerek iletilen trafiğin boyutunu veya desenini gizlemeye yarayan bir mekanizmadır. Özellikle Pasif saldırılardan olan Trafik Analizi saldırılarına karşı koruma sağlamayı amaçlar.

**40. Soru:** Bell-LaPadula ve Biba modelleri hangi güvenlik hedeflerine odaklanır ve temel kuralları nelerdir?
**Cevap:**
    *   **Bell-LaPadula:** Gizlilik (Confidentiality) odaklıdır. Temel kuralları: "Okuma Yok (No Read Up)" - Düşük güvenlik seviyesindeki özne, daha yüksek seviyedeki nesneyi okuyamaz. "Yazma Yok (No Write Down)" - Yüksek güvenlik seviyesindeki özne, daha düşük seviyedeki nesneye yazamaz.
    *   **Biba:** Bütünlük (Integrity) odaklıdır. Temel kuralları: "Okuma Yok (No Read Down)" - Yüksek bütünlük seviyesindeki özne, daha düşük seviyedeki nesneyi okuyamaz (bozuk veri okumasını engelleme). "Yazma Yok (No Write Up)" - Düşük bütünlük seviyesindeki özne, daha yüksek seviyedeki nesneye yazamaz (güvenilir veriyi bozmama).