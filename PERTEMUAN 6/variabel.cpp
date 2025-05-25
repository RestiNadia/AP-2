#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel() { // variabel yang dideklarasikan di dalam sebuah fungsi atau blok kode.
// Variabel ini hanya bisa dipakai di dalam fungsi atau blok itu saja dan akan hilang setelah fungsi selesai dijalankan.

    string namaLokal = "Komputer";

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel();

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; // ga iso

}
