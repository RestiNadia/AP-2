#include <iostream>
#include <vector> // Library untuk menggunakan vector (array dinamis)
using namespace std;

// Struct alamat digunakan untuk menyimpan data alamat lengkap
struct alamat {
    string jalan;
    string kota;
    int kodepos;
};

// Struct Mahasiswa digunakan untuk menyimpan data mahasiswa,
// dan memiliki satu anggota bertipe struct alamat
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    alamat alamat_mahasiswa; // Nested struct (struct di dalam struct)
};

int main() {
    Mahasiswa mhs1; // Membuat objek mhs1 dari struct Mahasiswa

    // Contoh pemberian nilai manual ke anggota struct
    mhs1.nama = "resti";
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    // Contoh mengisi data alamat 
    // mhs1.alamat_mahasiswa.jalan = "jl. marendal";
    // mhs1.alamat_mahasiswa.kota = "Medan";
    // mhs1.alamat_mahasiswa.kodepos = 200505;

    // Menampilkan alamat (jika bagian alamat diisi)
    // cout << "Alamat : " << mhs1.alamat_mahasiswa.jalan 
    //      << " Kota " << mhs1.alamat_mahasiswa.kota 
    //      << " Kodepos " << mhs1.alamat_mahasiswa.kodepos << endl;

    vector<Mahasiswa> mahasiswa; // Vector untuk menyimpan banyak data mahasiswa

    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    // Loop untuk input data sebanyak n mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.get(); // membersihkan newline
        cout << "Masukkan Nama : "; getline(cin, mhs1.nama); // gunakan getline agar bisa input nama lengkap
        cout << "Masukkan Umur : "; cin >> mhs1.umur;
        cout << "Masukkan IPK : "; cin >> mhs1.ipk;

        // Data dimasukkan ke vector
        mahasiswa.push_back(mhs1);
    }

    // Menampilkan data semua mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}