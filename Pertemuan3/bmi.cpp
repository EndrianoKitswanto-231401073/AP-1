#include <iostream>
#include <string.h>
using namespace std;

int main(){
    float bb, tb, bmi;
    string kategori;
    cout << "Masukkan berat bedan anda (kg) : " ;
    cin >> bb;
    cout << "Masukkan tinggi anda (m) : ";
    cin >> tb;
    bmi = bb/(tb*tb);
    if (bmi < 18.5){
        kategori = "Berat Badan Kurang";
    } else if (( bmi >= 18.5) && (bmi < 25)){
        kategori = "Berat Badan normal";
    } else if ((bmi >= 25) && (bmi < 30)){
        kategori = "Berat Badan Berlebih";
    } else{
        kategori = "Obesitas";
    }
    cout << "Bmi Anda : " << bmi << endl;
    cout << "Kategori berat badan : " << kategori << endl;
    return 0;
}