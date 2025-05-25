#include <iostream>
using namespace std;

int main(){
    string kalimat; // variabel untuk menyimpan kaliamat
    int i; // variabel untuk iterasi dalam perulangan

    system("CLS"); // membersihkan layar

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat); // mengambil semua input termasuk spasi

    for(i = 0; i < kalimat.length(); i++) { // perulangan untuk mengubah setiap karakter dalam string menjadi huruf kapital
        kalimat[i] = toupper(kalimat[i]); // Fungsi toupper mengubah huruf menjadi huruf besar
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0; // mengakhiri program
}