#include <iostream>
using namespace std;

int main() {
    // Goto Label
    a:
        cout << "Hello World" << endl;
        goto d; // dia akan pergi ke label d
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;//akan pergi ke label b
    d:
        cout << "Ilmu Komputer" << endl;
        goto c; //akan pergi ke label c

    int i = 1; // nilai i menjadi 1
    genap:
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    if (i <= 10) {
        goto genap;
    }
    //jika i mod 2 == 0 maka akan print i nya, dan jika i lebih kecil atau sama dengan 10 maka akan mencari label genap.
    //hasilnya 2 4 6 8 10

    // While
    int i = 1;
    while(i <= 10) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    // program ini akan berjalan hingga i ke 10, program ini untuk menampilkan bil genap


    // Do While
    int i = 1;
    do {
        cout << i << endl;
    } while(i <= 0);
    //do while min dia menjalankan 1 kali dulu sebelum dia melihat whilenya


    //For
    for(int i = 1; i <= 10; i+=2) {
        cout << "Hello World" << endl;
    }
    // program di atas akan menampilkan hello world sebanyak 5 kali
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // program diatas akan menampilkan bintang dalam bentuk persegi 

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // program diatas akan menampilkan segitiga siku siku
}
