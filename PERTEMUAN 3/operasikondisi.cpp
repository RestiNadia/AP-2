#include <iostream> // header untuk cout/cin
using namespace std; // agar tidak perlu menggunakan std:: sebelum cout/cin

int main () {
    int nilai; // variabel nilai bertipe integer

    system("CLS");
    system("CLS"); // membersihkan layar

    cout << "Masukkan nilai : ";
    cin >> nilai;

    // if statement
    // if statement, mengecek kondisi tertentu
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // }

    // if - else statement
    // if - else statement, dua kemungkinan
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // } else {
    //     cout << "Anda lulus !" << endl;
    // }

    // if - else - if statement
    // if - else - if statement, beberapa kondisi
    // if (nilai == 100) {
    //     cout << "Anda Keceh" << endl;
    // } else if (nilai <= 65) {
    //     cout << "Anda lulus" << endl;
    // }

    // nested if
    // nested if, mengecek kondisi di dalam kondisi lainnya
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     if (nilai >= 90) {
    //         cout << "Nilai sangat bagus!" << endl;
    //     }
    // }

    // switch case
    // switch case, untuk mengevaluasi satu variabel terhadap banyak nilai
    // switch (nilai) {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break; // menghentikan eksekusi setelah satu case diproses
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;
    // }

    // switch range
    // switch range, untuk menangani rentang nilai dalam pernyataan
    // switch (nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break;
    //     case 80 ... 84 : cout << "B+" << endl; break;
    //     default: cout << "E" << endl;
    // }

    // Ternary Operator
    // Ternary Operator, penulisan percabangan yang lebih ringkas
    // if (nilai % 2 == 0) {
    //     cout << "Genap sih" << endl;
    // } else {
    //     cout << "Ganjil sih" << endl;
    // }
    // string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout << nilai << " tuh Bilangan " << checkNum << " sih " << endl;

    return 0;
}
