#include<iostream>
using namespace std;

// === Deklarasi class utama ===
class contohakses {
private:
    int privatevar;      // private: hanya bisa diakses di dalam class ini

protected:
    int protectedvar;    // protected: bisa diakses dalam class ini dan class turunan

public:
    int publicvar;       // public: bisa diakses dari mana saja (termasuk luar class)

    // === Constructor ===
    // Fungsi khusus yang otomatis dijalankan saat objek dibuat
    // Mengisi nilai awal untuk ketiga variabel
    contohakses() {
        privatevar = 1;
        protectedvar = 2;
        publicvar = 3;
    }

    // === Method (fungsi anggota class) ===
    // Menampilkan semua variabel (bisa diakses karena masih dalam class)
    void tampilkansemua() {
        cout << " akses dari dalam class : " << endl;
        cout << privatevar << endl;       // bisa akses private
        cout << protectedvar << endl;     // bisa akses protected
        cout << publicvar << endl;        // bisa akses public
    }
};

// === Class turunan ===
// Menggunakan pewarisan (inheritance) dari class contohakses
class turunan : public contohakses { // public inheritance: semua tetap sesuai akses aslinya
public:
    // Fungsi dalam class turunan
    void aksesprotected() {
        cout << " akses publicvar " << publicvar << endl;     // bisa akses public (dari induk)
        cout << " akses protectedvar " << protectedvar << endl; // bisa akses protected (dari induk)
        // cout << privatevar; // tidak bisa, karena private
    }
};

int main() {
    contohakses obj;          // Membuat objek dari class contohakses
    obj.tampilkansemua();     // Memanggil fungsi yang bisa akses semua variabel dari dalam class

    cout << " akses dari luar class : " << endl;
    cout << obj.publicvar << endl;     // OK: public bisa diakses dari luar
    // cout << obj.privatevar << endl; // ERROR: private tidak bisa diakses dari luar class
    // cout << obj.protectedvar << endl; // ERROR: protected tidak bisa diakses dari luar class

    turunan tur;              // Membuat objek dari class turunan
    tur.aksesprotected();     // Memanggil fungsi yang bisa akses protected dari class turunan

    return 0;
}