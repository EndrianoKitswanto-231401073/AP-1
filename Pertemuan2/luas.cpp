#include <iostream> 

using namespace std;

int main() {
    //deklarasi var
    float luas, p, l;

    //? const float PHI = 3.14;

    //menginput panjang dan lebar
    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    //menghitung luas
    luas = p * l;
    //mengeluarkan nilai luas
    cout << "Luas = " << luas << endl;

    return 0; // menutup main() dan mengakhiri program yang sudah ditulis.
}