#include <iostream>          //  untuk input/output seperti cout, cin
#include <vector>           //  untuk menggunakan struktur data vector
using namespace std;        // Agar tidak perlu menulis std:: di setiap perintah

int main () {
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"nolan", "julian", "lukas", "lancelot"}; 
    // Membuat vector string berisi nama-nama. 
    // Gunanya untuk menyimpan data yang jumlahnya bisa bertambah/berkurang (dinamis).
    // Cocok digunakan jika data tidak tetap ukurannya.

    // Ascending Element of Vector
    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }
    // Loop untuk menampilkan isi vector dari index 0 ke akhir.
    // Digunakan ketika ingin menampilkan semua data dengan akses berdasarkan index.

    // for (string karyawan : nama_karyawan){
    //     cout << karyawan << endl;
    // }
    // Versi singkat dari for loop untuk menampilkan semua data (range-based for loop).
    // Cocok digunakan ketika tidak butuh index, hanya ingin membaca isi vector.

    // Add data to vector
    // nama_karyawan.push_back("imam");
    // Menambahkan elemen baru ke akhir vector.
    // Digunakan saat ingin menambahkan data tanpa batasan jumlah.

    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }
    // Menampilkan seluruh isi vector setelah penambahan data.

    // Delete data from vector
    // nama_karyawan.pop_back(); 
    // Menghapus elemen terakhir dari vector.
    // Cocok digunakan jika ingin menghapus input terakhir (LIFO - Last In First Out).

    // nama_karyawan.erase(nama_karyawan.begin() + 3);
    // Menghapus elemen pada posisi ke-4 (index ke-3).
    // Cocok digunakan untuk menghapus data tertentu berdasarkan posisi.

    // for (int i=0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }
    // Menampilkan vector setelah data dihapus.
}