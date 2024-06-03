#include <iostream>

using namespace std;

int main() {
    //deklarasi var
    int a, b;

    system("CLS");// menghapus layar

    // Assignment Operator (=)
    a = 3; // membuat nilai var a menjadi 3
    b = 5; // membuat nilai var b menjadi 5



    // Arithmetical Operator (+, -, *, /, %)
    // int tambah = a + b; 7 (3+5)
    // int kurang = a - b; -2 (3-5)
    // int kali = a * b; 15 (3*5)
    // float bagi = (float) a / (float) b; 0.6  (3.0 / 5.0)    // Type casting = mengubah tipe data dari sebuah variabel
    // int modulo = a % b; 3 (3 mod 5)

    // mengeluarkan nilai tambah, kurang, kali, bagi, modulo
    // cout << "Hasil penjumlahan = " << tambah << endl;
    // cout << "Hasil pengurangan = " << kurang << endl;
    // cout << "Hasil perkalian = " << kali << endl;
    // cout << "Hasil pembagian = " << bagi << endl;
    // cout << "Hasil sisa bagi = " << modulo << endl;



    // Relational Operator
    // cout << (a == b) << endl; false
    // cout << (a > b) << endl; false
    // cout << (a >= b) << endl; false
    // cout << (a < b) << endl; true
    // cout << (a <= b) << endl; true
    // cout << (a != b) << endl; true (!= tidak sama dengan)



    // Logical Operator (&&, ||, !)
    // && = dan
    // cout << (true && true) << endl; true
    // cout << (true && false) << endl; false
    // cout << (false && true) << endl; false
    // cout << (false && false) << endl; false
    // || = or
    // cout << (true || true) << endl; true
    // cout << (true || false) << endl; true
    // cout << (false || true) << endl; true
    // cout << (false || false) << endl; false
    // ! = negasi
    // cout << !true << endl; false
    // cout << !false << endl; true



    // Bitwise Operator (& = dan, | = or, ^ = xor, ~ = negasi, << = shift left, >> == shifr right) --> Biner
    // cout << (5 & 7) << endl; 0101 & 0111 = 0101 = 5
    // cout << (5 | 7) << endl; 0101 | 0111 = 0111 = 7
    // cout << (5 ^ 7) << endl; 0101 ^ 0111 = 0010 = 2
    // cout << (~7) << endl; 0111 = 1110 + 1 = 1111 = -8
    // cout << (7 << 2) << endl; 0111 + 2 nol di kiri = 11100 = 28
    // cout << (7 >> 2) << endl; 0111 + 2 nol di kanan = 0001 = 1



    // Shorthand
    // a += 7;     // a = a + 7;
    // cout << a << endl;

    // a -= 7;     // a = a - 7;
    // cout << a << endl;

    // a *= 7;     // a = a * 7;
    // cout << a << endl;

    // a /= 7;     // a = a / 7;
    // cout << a << endl;



    // Increment & Decrement
    // // Pre Increment (tambah dulu baru keluar nilai)
    // cout << a << endl; a = 3
    // cout << ++a << endl; a = 4

    // cout << b << endl; b = 7
    // cout << ++b << endl; b = 8


    // // Post Increment (tampilkan nilai baru tambah)
    // cout << a++ << endl; a = 3
    // cout << a << endl; a = 4

    // cout << b++ << endl; b = 7
    // cout << b << endl; b = 8


    // // Pre Decrement(kurang baru tampilkan nilai)
    // cout << a << endl; a = 3
    // cout << --a << endl; a = 2

    // cout << b << endl; b = 7
    // cout << -b << endl; b = 6

    
    // // Post Decrement(tampilkan nilai baru kurang)
    // cout << a-- << endl; a = 3
    // cout << a << endl; a = 2

    // cout << b-- << endl; b = 7
    // cout << b << endl; b = 6

}  
