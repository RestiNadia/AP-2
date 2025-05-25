#include <iostream>  // untuk input/output standar seperti cout dan cin
#include <string>    // untuk menggunakan tipe data string
#include <array>     // untuk menggunakan array modern dari STL
using namespace std; // agar tidak perlu menulis std:: setiap kali

int main () {
    // ================================
    // Array Declaration & Initialization
    // ================================

    /* Dua cara membuat array */

    // Cara 1: Array kosong (diisi manual satu per satu)
    // string nama[5]; // digunakan jika nilai akan ditentukan nanti atau dari input pengguna

    // nama[0]="jefri";
    // nama[1]="aida";
    // nama[2]="kiki";
    // nama[3]="jasmin";
    // nama[4]="dita"; // setiap elemen diisi satu per satu sesuai indeks

    // Cara 2: Langsung isi saat deklarasi (lebih efisien jika sudah tahu nilainya)
    // string nama[5] = {"jefri", "aida", "kiki", "jasmin", "dita"};
    // string nama[] = {"jefri", "aida", "kiki", "jasmin", "dita"}; // ukuran otomatis menyesuaikan isi

    // ================================
    // Menampilkan isi array (secara manual)
    // ================================
    // cout << nama[0] << endl; // menampilkan elemen pertama
    // dst... // hanya cocok untuk jumlah elemen yang sedikit

    // ================================
    // Menampilkan array dengan loop (naik)
    // ================================
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl; // digunakan untuk menampilkan semua elemen array
    // }

    // ================================
    // Menampilkan array secara terbalik (loop turun)
    // ================================
    // for (int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl; // digunakan saat ingin menampilkan data dari belakang
    // }

    // ================================
    // Array 2 Dimensi (Matrix)
    // ================================
    // int matrix[2][3] = {{1, 3, 5},{2, 4, 6}}; // array 2D berisi 2 baris dan 3 kolom

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << matrix[i][j] << " "; // menampilkan isi matrix baris per baris
    //     }
    //     cout << endl;
    // }

    // Matrix yang lebih besar: 4x6
    // int matrix[4][6] = {
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24}
    // };

    // for (int i = 0; i < 4; i++) { // looping baris
    //     for (int j = 0; j < 6; j++) { // looping kolom
    //         cout << matrix[i][j] << "\t"; // menampilkan tabel dengan rapi
    //     }
    //     cout << endl;
    // }

    // ================================
    // String = array karakter
    // ================================
    // string nama = "Kiel"; // string bisa dianggap sebagai array karakter
    // cout << nama[0] << endl; // menampilkan karakter ke-1 (K)
    // cout << nama[2] << endl; // menampilkan karakter ke-3 (e)

    // for (int i = 0; i < nama.length(); i++) {
    //     cout << nama[i] << endl; // mencetak tiap karakter satu per satu
    // }

    // ================================
    // Operasi pada String
    // ================================
    // string s1 = "Hello"; 
    // string s2 = "World"; 

    // 1. Menyalin string
    // s1 = s2; // s1 sekarang jadi "World"

    // 2. Menggabungkan string
    // s1 = "Hello";
    // cout << s1 + s2 << endl; // hasilnya "HelloWorld"

    // 3. Menghitung panjang string
    // cout << s1.length() << endl; // menghitung jumlah karakter di s1
    // cout << (s1 + s2).length() << endl; // menghitung jumlah karakter setelah digabung

    // 4. Mengambil sebagian karakter dari string
    // cout << s1.substr(2, 3) << endl; // ambil 3 karakter dari indeks ke-2 (llo)
    // cout << (s1 + s2).substr(5, 3) << endl; // ambil 3 karakter dari gabungan string dimulai dari indeks ke-5 (Wor)

    // ================================
    // Operator sizeof (menghitung ukuran dalam byte)
    // ================================
    // int angka = 10; 
    // cout << sizeof(angka); // biasanya 4 byte

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai); // total ukuran seluruh array

    // string s = "jefri";
    // cout << sizeof(s); // ukuran objek string, bukan jumlah karakter

    // ================================
    // Menggunakan Library array (C++ STL)
    // ================================
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // array versi modern, lebih aman dan fleksibel
    // cout << "Nilai : ";

    // for(int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " "; // menampilkan isi array menggunakan indeks
    // }

    // for (float n : nilai) {
    //     cout << n << " "; // versi for-each, lebih sederhana untuk hanya menampilkan semua elemen
    // }
}