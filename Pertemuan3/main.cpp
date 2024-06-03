#include <iostream>
using namespace std;

int main() {
    // deklarasi var
    int nilai;
    // menginput nilai
    cout << "Masukkan Nilai: ";
    cin >> nilai;

    // If Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    }
    // jika nilai lebih kecil atau sama dengan 65, maka akan keluar anda Tidak Lulus 


    // If-Else Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }
    // jika nilai lebih kecil atau sama dengan 65, maka akan keluar anda Tidak Lulus, jika nilai lebih besar dari 65, maka akan keluar anda Lulus 


    // If-Else-If Statement
    if (nilai == 100) {
        cout << "Anda Hebat" << endl;
    } else if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        cout << "Anda Lulus" << endl;
    }
    // jika nilai sama dengan 100, maka akan keluar anda hebat, // jika nilai lebih kecil atau sama dengan 65, maka akan keluar anda Tidak Lulus, jika nilai lebih besar dari 65 tapi tidak 100, maka akan keluar anda Lulus 


    // Nested If Statement
    if (nilai <= 65) {
        cout << "Anda TIDAK Lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda Lulus dan Anda Hebat" << endl;
        } else {
            cout << "Anda Lulus" << endl;
        }
    }
    // jika nilai sama dengan 100, maka akan keluar anda hebat, // jika nilai lebih kecil atau sama dengan 65, maka akan keluar anda Tidak Lulus, jika nilai lebih besar dari 65 tapi tidak 100, maka akan keluar anda Lulus 


    
    // Switch Case
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Inputan TIDAK VALID" << endl;
            break;      // Opsional
    }
    //jika nilai sama dengan 1 maka akan muncul senin tugas break sini adalah agar tidak lanjut ke bawah
    //jika nilai sama dengan 2 maka akan muncul selasa
    //jika nilai sama dengan 3 maka akan muncul rabu
    //jika nilai sama dengan 4 maka akan muncul kamis
    //jika nilai sama dengan 5 maka akan muncul jumat
    //jika nilai sama dengan 6 maka akan muncul sabtu
    //jika nilai sama dengan 7 maka akan muncul minggu
    //jika nilai buka angka 1 sampe 7, maka akan muncul inputan Tidak Valid


    // Switch Case For Range
    switch (nilai) {
        case 85 ... 100:
            cout << "A" << endl;
            break;
        case 80 ... 84:
            cout << "B+" << endl;
            break;
        case 75 ... 79:
            cout << "B" << endl;
            break;
        case 70 ... 74:
            cout << "C+" << endl;
            break;
        case  65 ... 69:
            cout << "C" << endl;
            break;
        case 60 ... 64:
            cout << "D" << endl;
            break;
        default:
            cout << "E" << endl;
            break;
    }
    // jika nilai berada di interval 85-100 maka akan muncul A
    // jika nilai berada di interval 80-84 maka akan muncul B+
    // jika nilai berada di interval 75-79 maka akan muncul B
    // jika nilai berada di interval 70-74 maka akan muncul C+
    // jika nilai berada di interval 65-69 maka akan muncul C
    // jika nilai berada di interval 60-64 maka akan muncul D
    // jika nilai bukan berada di interval 64-100 maka akan muncul E

    // Ternary Operator
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; //jika nilai mod 2 sama dengan 0, maka akan muncul Genap, jika tidak maka akan muncul ganjil
    cout << nilai << " adalah bilangan " << checkNum << endl;
}