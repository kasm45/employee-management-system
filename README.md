# Çalışan Personel Programı

Bu proje, C++ dilinde yazılmış basit bir **çalışan yönetim sistemi**dir.  
Farklı çalışan türleri için maaş zammı işlemleri gerçekleştirilir.

## 📌 Amaç

Sanal sınıflar, kalıtım (inheritance) ve çok biçimlilik (polymorphism) gibi nesne yönelimli programlama (OOP) kavramlarını öğrenmek ve pekiştirmek.

## 🧩 Kullanılan Sınıflar

- `Calisan` (Soyut sınıf - Base class)
- `Muhendis` (Türeyen sınıf)
- `Muhasebe` (Türeyen sınıf)
- `Hizmetli` (Türeyen sınıf)

Her çalışan sınıfının kendine özel **zam hesaplama** mantığı vardır.

## 🛠️ Özellikler

- Kullanıcıdan çalışan ismi ve maaş bilgileri alınır.
- Her çalışana özel `zamYap()` fonksiyonu çalıştırılır.
- Son maaşlar ekrana yazdırılır.

## 🚀 Çalıştırmak İçin

Projeyi bir C++ derleyicisi ile derleyip çalıştırabilirsiniz.  
Örneğin:

```bash
g++ CalisanProgram.cpp -o program
./program
