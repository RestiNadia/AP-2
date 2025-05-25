#include <iostream>     // header untuk C++
#include <conio.h>      // header untuk fungsi getch() dan getche()
using namespace std;    // biar nggak perlu lagi buat std:: sebelum cout/cin

int main() {
    string nama;                        // variabel untuk menyimpan nama
    char kom, jenisKelamin;            // variabel untuk menyimpan kom dan jenis kelamin
    int nim;                            // variabel untuk menyimpan nim
    float ip;                           // variabel untuk menyimpan ip

    /*ini untuk komen
    beberapa baris*/

    cout << "Hello World" << " Hello World" << endl;

    cout << "Masukkan nama Anda : ";
    // cin >> nama;
    getline(cin, nama); // agar membaca inputan nama lengkap termasuk spasi

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "\nMasukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche(); // agar karakter langsung tampil, tanpa tekan enter

    /*Untuk Output*/
    cout << "\n" << nama << endl;
    cout << nim << endl;
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter

    getch(); // karakter yang diketik tidak ditampilkan di layar
}