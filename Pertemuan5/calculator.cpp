#include <iostream>
#include <math.h> //library untuk pow
#include <cctype> //library untuk toupper

using namespace std;


// deklarasi function
void garis();
void bintang();
void menu();
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);
int pangkat(int a, int b);

int main() {
    char cont;

    do {
        system("cls"); // clear screen

        menu();// mencari function menu

        int operation, a, b, hasil; // deklarasi var
        cout << "Masukkan operasi : ";
        cin >> operation;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        switch(operation) {
            case 1:
                hasil = tambah(a, b); //mencari function tambah
                break;
            case 2:
                hasil = kurang(a, b); //mencari function kurang
                break;
            case 3:
                hasil = kali(a, b); //mencari function kali
                break;
            case 4:
                hasil = bagi(a, b); //mencari function bagi
                break;
            case 5:
                hasil = modulo(a, b); //mencari function modulo
                break;
            case 6:
                hasil = pangkat(a, b); //mencari function pangkat
                break;
        }

        cout << "Hasil = " << hasil << endl;

        bintang();//mencari function bintang

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y');
    //toupper = mengupcase tulisan
    cout << "Terima kasih telah menggunakan program kalkulator" << endl;
    return 0;
}

void garis() {
    cout << "====================================" << endl;
}

void bintang() {
    cout << "************************************" << endl;
}

void menu() {
    garis(); //mencari function garis
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis(); //mencari function garis
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;
    garis(); //mencari function garis
}

int tambah(int a, int b) {
    return a + b; //mengembalikan nilai a + b
}

int kurang(int a, int b) {
    return a - b; //mengembalikan nilai a - b
}

int kali(int a, int b) {
    return a * b; // mengembalikan nilai a * b
}

float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b); // mengembalikan nilai a/b
}

int modulo(int a, int b) {
    return a % b; // mengembalikan nilai a mod b
}

int pangkat(int a, int b) {
    return pow(a, b); // mengembalikan a pangkat b
}
