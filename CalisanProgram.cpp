
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<string>
#include<iomanip>
#include<list>
// #include"okul_.cpp"
using namespace std;

class Calisan {
public:
    Calisan(string ad, string soyad, double TC, double maas) {
        this->ad = ad;
        this->soyad = soyad;
        this->TC = TC;
        this->maas = maas;
    }
    Calisan(string ad, double maas) {
        this->ad = ad;
        this->maas = maas;
    }
    Calisan() {}
    void setMaas(double maas) {
        this->maas = maas;
    }
    double getMaas() {
        return this->maas;
    }
    virtual void zamYap() = 0; // Saf sanal fonksiyon
    virtual void print() = 0;  // Saf sanal fonksiyon
protected:
    string ad;
    string soyad;
    double TC;
    double maas;
};

class Muhendis : public Calisan {
public:
    Muhendis(string ad, string soyad, string alan) {
        this->ad = ad;
        this->soyad = soyad;
    }
    Muhendis(string ad, double maas) : Calisan(ad, maas) {}
    void zamYap() {
        this->maas = this->maas * 1.5 + 300;
    }
    void print() {
        cout << "Muhendisin Maasi: " << this->maas << endl;
    }
private:
    string alan;
    string birim;
};

class Muhasebe : public Calisan {
public:
    Muhasebe(string ad, double maas) : Calisan(ad, maas) {}
    void zamYap() {
        this->maas = this->maas * 1.1 + 250;
    }
    void print() {
        cout << "Muhasebecinin Maasi: " << this->maas << endl;
    }
private:
    string bagliOlduguBirim;
};

class Hizmetli : public Calisan {
public:
    Hizmetli(string ad, double maas) : Calisan(ad, maas) {}
    void zamYap() {
        this->maas = this->maas * 1.2 + 50;
    }
    void print() {
        cout << "Hizmetlinin Maasi: " << this->maas << endl;
    }
private:
    string calistigiBirim;
};

int main() {
    Calisan *ptr[3];

    string muhendisIsim, muhasebeIsim, hizmetliIsim;
    double muhendisMaas, muhasebeMaas, hizmetliMaas;

    cout << "Muhendisin Ismini Giriniz: ";
    cin.ignore();
    getline(cin, muhendisIsim);

    cout << "Muhendisin Maasini Giriniz: ";
    cin >> muhendisMaas;

    cout << "Muhasebecinin Ismini Giriniz: ";
    cin.ignore();
    getline(cin, muhasebeIsim);

    cout << "Muhasebecinin Maasini Giriniz: ";
    cin >> muhasebeMaas;

    cout << "Hizmetlinin Ismini Giriniz: ";
    cin.ignore();
    getline(cin, hizmetliIsim);

    cout << "Hizmetlinin Maasini Giriniz: ";
    cin >> hizmetliMaas;

    ptr[0] = new Muhendis( muhendisIsim, muhendisMaas );
    ptr[1] = new Muhasebe( muhasebeIsim , muhasebeMaas );
    ptr[2] = new Hizmetli( hizmetliIsim , hizmetliMaas );

    for (int i = 0; i < 3; i++) {
        ptr[i]->zamYap();
        ptr[i]->print();
    }

    getch();
    return 0;
}
