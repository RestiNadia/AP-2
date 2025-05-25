#include <iostream> // Library standar untuk input-output
using namespace std; // Supaya tidak perlu menulis std:: di setiap cout, cin, dll

int main() {
    system("CLS"); // Membersihkan layar console (khusus Windows)

    // penjumlahan matrix 2*2

    int matriks1[2][2]; // Deklarasi array 2x2 untuk matriks pertama
    int matriks2[2][2]; // Deklarasi array 2x2 untuk matriks kedua
    int hasil[2][2];    // Deklarasi array 2x2 untuk menyimpan hasil penjumlahan

    cout << "matriks 1" << endl; // Tampilkan judul input matriks 1
    for (int i = 0; i < 2; i++) {            // Loop baris
        for (int j = 0; j < 2; j++){         // Loop kolom
            cout << "masukan elemen baris " << i + 1 << " kolom " << j + 1 << ": "; // Tampilkan prompt input
            cin >> matriks1[i][j];           // Input nilai ke matriks1
        }
    }

    cout << "matriks 2" << endl; // Tampilkan judul input matriks 2
    for (int i = 0; i < 2; i++) {            // Loop baris
        for (int j = 0; j < 2; j++){         // Loop kolom
            cout << "masukan elemen baris " << i + 1 << " kolom " << j + 1 << ": "; // Tampilkan prompt input
            cin >> matriks2[i][j];           // Input nilai ke matriks2
        }
    }

    cout << "hasil penjumlahan" << endl;     // Tampilkan hasil penjumlahan
    for (int i = 0; i < 2; i++) {             // Loop baris
        for (int j = 0; j < 2; j++){          // Loop kolom
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // Penjumlahan elemen per posisi
            cout << hasil[i][j] << " ";       // Tampilkan hasil penjumlahan
        }
        cout << endl;                         // Pindah baris setelah 2 kolom
    }
}