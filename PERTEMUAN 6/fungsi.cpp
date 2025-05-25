#include <iostream>            // Digunakan untuk menampilkan dan menerima data dari layar/keyboard
using namespace std;           // Supaya tidak perlu menulis std:: setiap pakai cout, cin, dll

// fungsi tanpa nilai balikan
void tampilkanPesan() {       // Fungsi yang hanya menampilkan pesan, tidak mengembalikan nilai
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
    // Cocok digunakan untuk ucapan pembuka atau informasi
}

// fungsi dengan nilai balikan
int tambah(int a, int b) {     // Fungsi yang mengembalikan hasil penjumlahan 2 bilangan bulat
    return a + b;
    // Digunakan saat ingin melakukan operasi dan memakai hasilnya kembali
}

// fungsi overload
int kali(int a, int b) {       // Versi pertama dari fungsi 'kali' untuk bilangan bulat
    return a * b;
}

double kali(double a, double b) { // Versi kedua dari fungsi 'kali' untuk bilangan desimal
    return a * b;
    // Overload berguna saat fungsi yang sama ingin digunakan untuk tipe data berbeda
}

// fungsi rekursif
int faktorial(int n) {         // Fungsi memanggil dirinya sendiri untuk menghitung faktorial
    if (n == 0 || n == 1) {
        return 1;              // Basis: faktorial 0 dan 1 = 1
    }else {
        return n * faktorial(n-1);  // Memanggil ulang fungsi dengan nilai lebih kecil
    }
    // Cocok digunakan saat masalah bisa diselesaikan dengan pendekatan berulang seperti faktorial
}

int main() {
    system("CLS");             // Membersihkan layar (khusus Windows), tidak wajib tapi buat tampilan rapi

    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();          // Memanggil fungsi untuk menampilkan pesan sambutan

    int x = 5, y = 3;          // Mendefinisikan dua angka untuk operasi berikutnya

    // menggunakan fungsi dgn nilai balikan
    int hasilTambah = tambah(x, y);   // Menyimpan hasil penjumlahan ke variabel
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);            // Memanggil versi int dari fungsi kali
    double hasilKaliDouble = kali(5.5, 2.0);   // Memanggil versi double dari fungsi kali

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;
}