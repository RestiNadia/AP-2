#include <iostream> // haeader untuk cout/cin
#include <cmath> // header untuk fungsi matematika
#include <iostream> 
using namespace std; // agar tidak perlu membuat std:: sebelum cout/cin

int main() {
    const double PI = 3.14; // konstanta PI, digunakan dalam perhitungan bola
    double radius, volume, permukaan; 
    // variabel bertipe double untuk jari-jari, volume, dan luas permukaan

    cout << "Masukkan jari-jari bola: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3); // Menghitung volume bola
    permukaan = 4 * PI * pow(radius, 2); // Menghitung luas permukaan bola

    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << permukaan << endl;

    return 0; // mengembalikan nilai 0 sebagai tanda program selesai
}