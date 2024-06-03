#include <stdio.h> // untuk library c
#include <conio.h> // untuk library puts dan gets

int main() {
    // deklarasi var
    char nama[50]; // [50] = panjang karakter yang dapat ditampung
    int nim;
    char kom;
    float ip;

    printf("Hello World\n"); // \n = enter

    printf("Masukkan nama : "); // untuk output 
    // scanf("%s", &nama);  untuk menginput var nama, %s = string
    gets(nama);     //*  gets = get string, untuk menginput var nama dengan tipe string

    printf("Masukkan NIM : "); // untuk output
    scanf("%d", &nim); // untuk menginput var nim, %d = integer

    printf("Masukkan KOM : ");
    scanf(" %c", &kom); // untuk menginput var kom, %c = char

    printf("Masukkan IP : ");
    scanf("%f", &ip);// untuk menginput var ip, %f = floar

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama);     //* puts = put string, untuk mengeluarkan dengan tipe string

    // mengeluarkan nilai dari var nim, var kom, var ip, %.3f = 3 diangka belakang coma
    printf("NIM : %d\n", nim); 
    printf("KOM : %c\n", kom);
    printf("IP : %.3f\n", ip);

    printf("Press any button to continue...");
    getch(); //menginput var bertipe char
}