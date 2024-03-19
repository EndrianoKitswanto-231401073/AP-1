#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;
    
    // // if  statement
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus";
    // }
    
    // // if else statement
    // if (nilai <= 65){
    //     cout << "Anda Tidak Lulus";
    // } else {
    //     cout << "Anda Lulus";
    // }

    // // if else if statement
    // if (nilai == 100){
    //     cout << "Anda Hebat";
    // } else if (nilai >= 65){
    //     cout << "Anda Lulus";
    // } else{
    //     cout << "Anda Tidak Lulus";
    // }

    // // Nested if
    // if (nilai <= 65){
    //     cout << "Anda TIDAK Lulus";
    // } else{
    //     if (nilai == 100){
    //         cout << "Anda Lulus dan Anda Hebat";
    //     }else{
    //         cout << "Anda Lulus";
    //     }
    // }

    // // switch case
    // switch (nilai){
    //     case 1 :
    //         cout << "Senin" << endl;
    //         break;
    //     case 2 : 
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3 :
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4 :
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5 :
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6 :
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7 :
    //         cout << "Minggu" << endl;
    //         break;
    //     default :
    //         cout << "Tidak Valid" << endl;
    //         break;    
    // }

    // // Switch case for range
    // switch (nilai){
    //     case 85 ... 100 :
    //         cout << "A" << endl;
    //         break;
    //     case 80 ... 84 :
    //         cout << "B+" << endl;
    //         break;
    //     case 75 ... 79 :
    //         cout << "B" << endl;
    //         break;
    //     case 70 ... 74 :
    //         cout << "C+" << endl;
    //         break;
    //     case 65 ... 69 :
    //         cout << "C" << endl;
    //         break;
    //     case 60 ... 64 :
    //         cout << "D" << endl;
    //         break;
    //     default : 
    //         cout << "E" << endl;
    //         break;
    // }

    // ternary operator (kondisi) ? "if true" : "if false"
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " Adalah Bilangan " << checkNum << endl;
    
    
    
    return 0;
}