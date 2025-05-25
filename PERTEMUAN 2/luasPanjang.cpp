#include <iostream> // header untuk cout/cin (input/output standar)
using namespace std; // agar tidak perlu menulis std:: sebelum cout dan cin

int main() {
    float luas, p, l; 
    // variabel float untuk menyimpan nilai panjang (p), lebar (l), dan luas

    cout << "Masukkan panjang : ";
    cin >> p; // input panjang

    cout << "Masukkan lebar : ";
    cin >> l; // input lebar

    luas = p * l; // menghitung luas persegi panjang dengan rumus panjang × lebar
    cout << "Luas = " << luas << endl; // menampilkan hasil perhitungan luas

    return 0; // mengembalikan nilai 0 sebagai tanda program selesai
}