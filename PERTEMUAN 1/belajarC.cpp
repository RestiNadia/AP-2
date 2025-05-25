#include <stdio.h>   // header untuk C
#include <conio.h>   // header untuk getch(), digunakan untuk input karakter tanpa menunggu enter

int main() {
    char nama[50];   // variabel array untuk menyimpan nama (maksimal 50)
    int nim;         // variabel untuk menyimpan nim
    char kom[2];     // variabel array untuk menyimpan kom (maksimal 2)
    float ip;        // variabel untuk menyimpan ip

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // Membaca input string dan menyimpannya di variabel nama

    printf("Masukkan nim : ");
    scanf("%d", &nim); // Membaca input integer dan menyimpannya ke variabel nim

    getchar(); // Membersihkan karakter newline (\n) dari input sebelumnya agar tidak mengganggu gets selanjutnya

    printf("Masukkan kom : ");
    gets(kom); // Membaca input string untuk KOM

    printf("Masukkan ip : ");
    scanf("%f", &ip); // Membaca input float dan menyimpannya ke variabel ip

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); // put string, digunakan untuk string dalam bentuk array char

    printf("IP : %f\n", ip); // Menampilkan isi dari variabel ip dalam float

    printf("\npress any button to continue..."); // Menampilkan pesan ke pengguna
    getch(); // Menunggu input satu karakter sebelum menutup program, tanpa perlu tekan Enter

    return 0;
}
