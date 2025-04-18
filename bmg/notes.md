# Sunum Konuşma Notları (pre-pre.md) - Genişletilmiş

## Slide 1: Giriş

- "Bugün, tıbbın görünmeyen kahramanlarından, endoskopik cihazlardan ve bunların arkasındaki biyomedikal mühendisliğinden bahsedeceğiz."
- "Endoskopi ve kolonoskopi, sadece birer tıbbi prosedür değil; aynı zamanda optik, mekanik, malzeme bilimi ve yazılımın hassas bir uyumla çalıştığı mühendislik harikalarıdır."
- "Bu cihazlar sayesinde, cerrahi kesilere gerek kalmadan vücudun içine bakabiliyor, teşhis koyabiliyor ve hatta tedavi uygulayabiliyoruz. Minimal invaziv yaklaşımın temel taşlarıdır."
- "Biyomedikal mühendisleri olarak bizler, hekimlerin ihtiyaçlarını anlayarak, onlara daha güvenli, daha etkili ve kullanımı daha kolay araçlar sunmak için çalışıyoruz. Sadece bir cihaz değil, hastanın iç dünyasına açılan güvenli bir pencere tasarlıyoruz."

## Slide 2: Tasarım

- "Bir endoskopun kalbi, ucundaki minyatür kamera ve ışık kaynağıdır. Görüntü kalitesi, yani çözünürlük, renk doğruluğu (CRI) ve aydınlatma gücü, doğru teşhis için hayati önem taşır. CMOS ve CCD sensör teknolojilerindeki gelişmeler burada devreye giriyor."
- "Cihazın gövdesi, bir mühendislik dengeleme sanatıdır. Hem vücut kıvrımlarında rahatça ilerleyebilecek kadar esnek olmalı, hem de hekimin itme kuvvetini uca iletebilecek kadar rijit (itilebilir) olmalıdır. Farklı polimerlerin ve katmanlı yapıların kullanılması bu dengeyi sağlar."
- "Aydınlatma çok kritik. Fiber optik yerini giderek daha verimli, daha az ısınan ve daha uzun ömürlü LED'lere bırakıyor. Pamukkale Üniversitesi'ndeki tez çalışması gibi projeler, bu LED'leri süren elektronik devrelerin ne kadar önemli olduğunu gösteriyor; verimlilik ve minyatürleşme anahtar kelimeler."
- "Çalışma kanalları, biyopsi forsepsleri veya polipektomi snare'leri gibi aletlerin geçişini sağlar. Bu kanalların tasarımı, aletlerin rahat hareket etmesini ve aynı zamanda sıvı/hava geçişini engellememesini gerektirir."

## Slide 3: Kolonoskopi

- "Kolonoskop, endoskopların belki de en karmaşık olanıdır. Yaklaşık 1.5 metre uzunluğunda, kıvrımlı bir yapı olan kalın bağırsağın tamamını incelemek zorlu bir görev."
- "Cihazın ucunun dört yöne hassas kontrolü, hekimin bağırsağın her köşesini görebilmesi için şart. Bu, genellikle karmaşık tel mekanizmalarıyla sağlanır."
- "İşlem sırasında bağırsağın hava veya CO2 ile şişirilmesi (insüflasyon) görüş alanını açar. Lensin temizlenmesi için su jeti kullanılır. Tüm bu fonksiyonlar, cihazın içindeki ince kanallar ve kontrol mekanizmalarıyla yönetilir."
- "Mühendislik başarısı burada doğrudan klinik başarıya dönüşür. Cihaz ne kadar kolay yönlendirilebilirse, ne kadar net görüntü sağlarsa, hekimin polipleri veya diğer lezyonları tespit etme oranı o kadar artar."

## Slide 4: Sterilizasyon/Güvenlik

- "Endoskoplar tekrar tekrar kullanılan cihazlar olduğu için, hastadan hastaya enfeksiyon bulaşma riskini ortadan kaldırmak mutlak bir önceliktir. Bu, biyouyumluluk ve sterilizasyon/dezenfeksiyon süreçlerine dayanıklılık gerektirir."
- "Biyouyumluluk, cihazın vücut dokularıyla temas ettiğinde herhangi bir zararlı reaksiyona (toksisite, alerji) yol açmaması demektir. ISO 10993 gibi uluslararası standartlar bu konuda rehberlik eder."
- "Daha büyük zorluk, sterilizasyon/dezenfeksiyon süreçleridir. Cihazlar, karmaşık yapıları ve hassas bileşenleri nedeniyle temizlenmesi ve mikroplardan arındırılması zor cihazlardır. Özellikle iç kanallarda biyofilm oluşumu ciddi bir risktir."
- "Kullanılan malzemeler, otoklavın yüksek ısısına veya kimyasal dezenfektanların (örn. Glutaraldehit) agresif etkilerine defalarca dayanabilmelidir. Mühendisler, bu dayanıklılığı sağlarken cihazın fonksiyonelliğini korumak zorundadır."
- "Elektriksel güvenlik de unutulmamalıdır (IEC 60601). Cihaz içindeki tüm elektronik aksam, hasta ve kullanıcı için risk oluşturmayacak şekilde mükemmel bir şekilde yalıtılmalıdır."

## Slide 5: Yapay Zeka

- "Yapay zeka, endoskopiyi bir görüntüleme aracından akıllı bir tanı yardımcısına dönüştürüyor."
- "CADe (Bilgisayar Destekli Tespit) sistemleri, özellikle kolonoskopide polip gibi gözden kaçabilecek küçük lezyonları gerçek zamanlı olarak tespit edip hekimi uyararak 'ikinci bir göz' görevi görüyor. Bu, polip atlama oranlarını düşürmede önemli bir potansiyele sahip."
- "CADx (Bilgisayar Destekli Tanı) ise bir adım daha ileri giderek, tespit edilen lezyonun türü (örn. hiperplastik mi, adenomatöz mü) hakkında tahmin yürüterek gereksiz biyopsileri azaltmaya yardımcı olabilir."
- "Bu sistemler, binlerce endoskopi görüntüsüyle eğitilmiş derin öğrenme modelleri (CNN'ler) kullanır. Mühendislik zorluğu, bu algoritmaları mevcut endoskopi sistemlerine entegre etmek ve klinik iş akışını aksatmadan gerçek zamanlı performans sağlamaktır."
- "Yapay zeka ayrıca prosedür kalitesini de artırabilir; örneğin, bağırsağın ne kadarının incelendiğini takip ederek veya çekilme hızını kontrol ederek."

## Slide 6: Test/Kalite

- "Bir endoskopun hastada kullanılmadan önce geçtiği test süreci son derece kapsamlıdır. Bu sadece 'çalışıyor mu?' kontrolü değil, 'güvenli ve etkili mi?' sorusunun cevabıdır."
- "Mekanik testler, cihazın bükülme yarıçapını, itme kuvvetine dayanımını, tekrarlanan kullanımlara karşı yorgunluğunu ölçer. Fonksiyonel testler, görüntü sensörünün çözünürlüğünü, renk doğruluğunu, ışık kaynağının parlaklığını, kanalların tıkanıklık durumunu kontrol eder."
- "Sterilizasyon validasyonu, seçilen temizlik ve dezenfeksiyon/sterilizasyon yönteminin cihaz üzerindeki mikroorganizmaları ne kadar etkili bir şekilde yok ettiğini ve bu işlemin cihaza zarar verip vermediğini doğrular."
- "Tüm bu testler, ISO 13485 (Kalite Yönetim Sistemi), IEC 60601 (Elektriksel Güvenlik), ISO 10993 (Biyouyumluluk) gibi uluslararası standartlara ve FDA, MDR gibi bölgesel düzenlemelere uygun olarak yapılır. Biyomedikal mühendisleri bu süreçlerin merkezindedir."

## Slide 7: Geri Bildirim

- "En iyi tasarım laboratuvarda değil, klinikte şekillenir. Hekimlerin, hemşirelerin ve teknisyenlerin cihazı kullanırken yaşadıkları deneyimler paha biçilmezdir."
- "Mühendisler, bu geri bildirimleri toplamak için düzenli olarak klinik ortamları ziyaret eder, kullanıcılarla görüşür. 'Kontrol düğmeleri daha ergonomik olabilir mi?', 'Görüntüdeki parlama nasıl azaltılır?', 'Biyopsi forsepsi kanaldan daha rahat geçebilir mi?' gibi soruların cevapları yeni tasarımlara yön verir."
- "Bu sadece sorunları çözmek değil, aynı zamanda gizli ihtiyaçları ortaya çıkarmaktır. Kullanıcıların farkında bile olmadığı iyileştirme potansiyellerini mühendislik bakış açısıyla tespit edebiliriz."
- "Bu sürekli geri bildirim ve iyileştirme döngüsü (iteratif tasarım), endoskopik cihazların evriminin temelini oluşturur."

## Slide 8: Taşınabilir ve Kablosuz Sistemler: Kapsül Endoskopi

- "Endoskopinin geleceği sadece daha yetenekli değil, aynı zamanda daha erişilebilir ve hasta dostu olmaya doğru gidiyor. Kapsül endoskopi bunun en güzel örneği."
- "Vitamin hapı boyutundaki bu küçük cihaz, özellikle geleneksel endoskopların ulaşmakta zorlandığı ince bağırsağı görüntülemek için devrim yarattı. İçindeki minyatür kamera, LED'ler, pil ve verici sayesinde tüm sindirim sistemini baştan sona fotoğraflayabiliyor."
- "Buradaki mühendislik zorlukları muazzam: Her şeyi bu kadar küçük bir hacme sığdırmak, pil ömrünü tüm yolculuk boyunca yetecek kadar uzatmak, vücut içinden güvenilir kablosuz veri aktarımı sağlamak ve tabii ki biyouyumluluk."
- "Kapsül endoskopinin sınırlamaları da var; şu an için biyopsi alamıyor veya tedavi yapamıyor. Ancak manyetik yönlendirme gibi yeni teknolojilerle bu durum değişebilir."
- "Ayrıca, belirli uygulamalar için akıllı telefonlara bağlanabilen daha basit, taşınabilir endoskopik sistemler de geliştiriliyor."

## Slide 9: Gelecek

- "Endoskopinin geleceği, daha akıllı, daha yetenekli ve daha az invaziv olmaya odaklanıyor."
- "Robotik sistemler, hekimlere daha hassas kontrol ve stabilite sunacak. Boğaziçi Üniversitesi'ndeki proje gibi esnek robotik platformlar veya manyetik olarak dışarıdan yönlendirilebilen kapsüller, prosedürleri kolaylaştırabilir ve hasta konforunu artırabilir."
- "Görüntüleme teknolojileri de gelişiyor. OCT (Optik Koherens Tomografi) ile dokunun mikroskobik katmanlarını, hiperspektral görüntüleme ile dokunun moleküler yapısını analiz etmek mümkün olabilir. Bu, 'optik biyopsi' dediğimiz, fiziksel örnek almadan tanı koyma potansiyeli taşıyor."
- "Yapay zeka, sadece tanıya yardımcı olmakla kalmayıp, risk analizi yapma, tedavi planlama ve hatta prosedür sırasında hekimi yönlendirme gibi daha karmaşık görevler üstlenebilir."
- "Teranostik (Theranostics = Therapy + Diagnostics) konsepti, yani görüntüleme ile tedaviyi birleştiren yaklaşımlar (örn. hedefe yönelik ilaç salınımı) da önemli bir araştırma alanı."
- "Son olarak, enfeksiyon kontrolü endişeleri nedeniyle tek kullanımlık endoskopların kullanımı artabilir. Buradaki zorluk, maliyeti düşürürken performansı korumaktır."

## Slide 10: Kapanış

- "Gördüğümüz gibi, basit bir görüntüleme aracı gibi görünen endoskoplar, aslında biyomedikal mühendisliğinin birçok alanını (malzeme, mekanik, optik, elektronik, yazılım, AI) bir araya getiren karmaşık sistemlerdir."
- "Bu mühendislik çabaları sayesinde, hastalıkları daha erken teşhis edebiliyor, daha az ağrılı ve daha etkili tedaviler uygulayabiliyor, sonuçta milyonlarca insanın yaşam kalitesini artırıyoruz."
- "Biyomedikal mühendisliği, tıbbın sınırlarını zorlayan ve sağlığa değer katan yeniliklerin arkasındaki itici güçtür. Endoskopi de bu gücün en parlak örneklerinden biridir."
- "Dinlediğiniz için teşekkür ederim."
