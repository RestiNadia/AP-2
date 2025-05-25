#include <iostream>         // Digunakan untuk input (cin) dan output (cout)
#include <string>           // Digunakan untuk tipe data string dan fungsi getline
#include <cctype>           // Digunakan untuk fungsi toupper (mengubah huruf ke kapital)
using namespace std;        // Agar tidak perlu menulis std:: sebelum cin, cout, dll.

int main() {
    string kalimat;         // Variabel untuk menyimpan kalimat dari user
    int i;                  // Variabel untuk perulangan (index karakter)

    system("CLS");          // Membersihkan layar (hanya berfungsi di Windows)
    // Jika menggunakan sistem selain Windows, baris ini bisa dihapus karena tidak akan berpengaruh
    // Jika baris ini tidak digunakan, maka input/output sebelumnya tetap muncul di layar

    cout << "Masukkan kalimat : ";       // Menampilkan pesan untuk meminta input
    getline(cin, kalimat);               // Mengambil satu baris input dari user termasuk spasi
    // Jika menggunakan cin saja, maka hanya akan membaca sampai spasi pertama
    // Maka dipilih getline() agar seluruh kalimat yang mengandung spasi terbaca

    // Perulangan untuk memeriksa setiap karakter dalam string
    for (i = 0; i < kalimat.length(); i++) {
        // Mengecek apakah karakter adalah huruf vokal kecil
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || 
            kalimat[i] == 'i' || kalimat[i] == 'o' || 
            kalimat[i] == 'u') {

            kalimat[i] = toupper(kalimat[i]); // Mengubah huruf vokal kecil menjadi kapital
            // Jika toupper tidak digunakan, maka huruf tetap huruf kecil
            // Jika ingin mengubah semua huruf menjadi kapital, bukan hanya vokal, maka bisa pakai:
            // kalimat[i] = toupper(kalimat[i]); tanpa if (artinya semua karakter diubah)
        }
    }

    // Menampilkan hasil akhir setelah perubahan
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0; // Mengakhiri program 
}
