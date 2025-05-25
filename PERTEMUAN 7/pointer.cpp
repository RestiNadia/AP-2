#include <iostream>
using namespace std;

// Fungsi penjumlahan biasa (tanpa pointer), hanya menjumlahkan nilai dan mencetak hasilnya
// Tidak mengubah nilai asli dari parameter
void penjumlahan(int a, int b){
    cout << a + b << endl;
}

// Fungsi penjumlahan menggunakan pointer
// Menerima alamat dari dua variabel, dan menjumlahkan nilainya langsung ke variabel pertama
// Mengubah nilai asli dari variabel 'a'
void penjumlahanpointer(int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

int main() {
    system("CLS");

    // === POINTER DECLARATION ===
    // Pointer adalah variabel yang menyimpan alamat memori dari variabel lain
    int number = 35;
    int *pointer_number = &number;  // pointer_number menyimpan alamat dari variabel number

    // === POINTER OPERATION ===
    // *pointer_number = 25;
    // Mengubah nilai number menjadi 25 melalui pointer (dereference)
    // Biasanya digunakan saat ingin mengubah nilai suatu variabel melalui alamatnya

    // === POINTER IN ARRAY ===
    // Array adalah bentuk pointer yang menunjuk ke elemen pertama
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;  // pointer_num menunjuk ke elemen pertama array num

    // *pointer_num += 5;
    // Akan menambahkan 5 ke elemen pertama array num (num[0] = 6)

    // === POINTER IN PARAMETER ===
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2); // hanya menampilkan hasil, tidak mengubah nilai asli
    // penjumlahanpointer(&num1, &num2); // menjumlahkan num1 + num2 dan menyimpan ke num1

    // === POINTER IN POINTER ===
    // Pointer yang menunjuk ke pointer lain disebut pointer to pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;
    // cout << **ptr_pointer_score; // Mengakses nilai score lewat dua tingkat pointer

    // === DYNAMIC POINTER ===
    // Alokasi memori secara dinamis di heap menggunakan 'new'
    int *ptr = new int;
    *ptr = 30;
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    // Menghapus memori yang dialokasikan secara dinamis
    delete ptr;

    // Setelah delete, pointer masih menunjuk ke alamat yang sama, tapi datanya sudah dihapus
    // Ini disebut dangling pointer (berbahaya jika digunakan)
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    return 0;
}