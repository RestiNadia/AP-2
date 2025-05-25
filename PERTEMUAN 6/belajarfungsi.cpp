#include <iostream>            // Digunakan untuk perintah input dan output seperti cout
using namespace std;           // Supaya tidak perlu menulis std:: di setiap cout atau cin

void sapa(string nama) {       // Membuat fungsi bernama 'sapa' dengan parameter bertipe string
    cout << "Halo " << nama << " ! Selamat Datang di AP 2 !" << endl;
    // Menampilkan pesan sapaan dengan nama yang diberikan
    // Fungsi ini bisa digunakan berulang kali untuk menyapa nama yang berbeda
}

int main () {                  // Fungsi utama, program dimulai dari sini
    string namaPengguna = "Alya";  
    // Menyimpan nama pengguna di dalam variabel bertipe string

    sapa(namaPengguna);        // Memanggil fungsi sapa dan mengirimkan nama pengguna sebagai input
    // Menampilkan: "Halo Alya ! Selamat Datang di AP 2 !"

    return 0;                  // Menandakan program selesai dengan sukses
}