# include <iostream>
using namespace std;

int main(){
    string kalimat; // variabel untuk menyimpan kalimat
    int i; // variabel untuk iterasi dalam perulangan

    system("CLS"); // membersihkan layar

    cout << "Masukkan kalimat : "; getline(cin, kalimat); // mengambil satu baris termasuk spasi

    for (i = 0; i < kalimat.length(); i++) { // perulangan untuk memeriksa setiap karakter dalam string
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') // jika karakter adalah huruf vokal kecil (a, e, i, o, u)
        {
            kalimat[i] = toupper(kalimat[i]); // mengubah huruf menjadi huruf besar
        }
    }

    cout << "Kalimat dalam huruf kapital : "  << kalimat << endl;
    return 0; // mengakhiri program
}