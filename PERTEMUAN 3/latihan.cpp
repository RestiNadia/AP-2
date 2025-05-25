#include <iostream> //header untuk cout / cin
using namespace std; // agar tidak perlu membuat sstd :: sebelum cout /cin

int main() {
    int angka; 
    // variabel angka untuk menyimpan input dari pengguna

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka; // membaca input dari pengguna

    if (angka % 10 == 0) { 
        // Pemeriksaan apakah angka habis dibagi 10 (kelipatan 10)
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) { 
        // Jika bukan kelipatan 10, periksa apakah kelipatan 5
        cout << angka << " adalah kelipatan dari 5." << endl;
    } else { 
        // Jika bukan kelipatan 5 maupun 10
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl;
    }

    return 0; 
    // mengembalikan nilai 0 sebagai tanda program selesai
}