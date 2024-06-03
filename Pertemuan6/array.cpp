#include <iostream>
#include <array> //library untuk array

using namespace std;

int main() {
    system("cls");

    //? Array Declaration and Initialization
    string nama[5] = {"Andi", "Budi", "Santi", "Wanto", "Denis"};
    //menambahkan data array nama[0] menjadi Andi, nama[1] menjadi Budi, nama[2] menjadi Santi, nama[3] menjadi Wanto dan, nama[4] menjadi Denis
    nama[0] = "Andi";
    nama[1] = "Budi";
    nama[2] = "Santi";
    nama[3] = "Wanto";
    nama[4] = "Denis"; 

    //? Accessing Elements in Array
    //mengeluarkan data array dari data yang telah kita inputkan
    cout << nama[0] << endl;
    cout << nama[1] << endl;
    cout << nama[2] << endl;
    cout << nama[3] << endl;
    cout << nama[4] << endl;

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << endl;
    }

    //? Multidimensional Array
    int matrix[2][3] = {{1, 3, 5}, {2, 4, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //matriks[0][0] = 1, matriks[0][1] = 3, matriks [0][2] = 5
    //matriks[1][0] = 2, matriks[1][1] = 4, matriks [1][2] = 6
    //? String (Array of Characters)
    string nama = "zustine";

    cout << nama[0] << endl; //mengeluarkan z
    cout << nama[2] << endl; //mengeluarkan s

    for (int i = 0; i < nama.length(); i++) {
        cout << nama[i] << endl; //mengeluarkan zustine
    }


    //? Contoh 1
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    float nilai[n];//untuk mengetahui ada berapa data kita input, maka kita tanyakan n dulu baru bisa tau panjang arraynya
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : ";
        cin >> nilai[i]; 
        //menginput nilai
    }

    for (int i = 0; i < n; i++) {
        cout << "Nilai mahasiswa ke " << i + 1 << " : " <<  nilai[i] << endl; //mengeluarkan nilai dengan data yang telah kita input
    }

    //? Contoh 2
    string nama_karyawan[] = {"Andi", "Yusuf", "Budi", "Yanto", "Santika", "Dodi"};

    //! sizeof() -> fungsi untuk mengecek ukuran suatu objek
    //! n * sizeof(string) = sizeof(nama_karyawan)
    //! n = sizeof(nama_karyawan) / sizeof(string)

    for (int i = 0; i < sizeof(nama_karyawan) / sizeof(string); i++) {
        cout << nama_karyawan[i] << endl;
    }

    //? Contoh 3
    //untuk menjumlahan matriks
    //deklarasi var matriks1 dalam array, matriks2 dalam array dan hasil dalam array.
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    } //masukkan data matriks1[0][0],matriks1[0][1],matriks1[1][0],matriks1[1][1]

    cout << "Matriks 2" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }//masukkan data matriks2[0][0],matriks2[0][1],matriks2[1][0],matriks2[1][1]

    cout << "Hasil Penjumlahan" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    } //mengeluarkan hasil tambah matriks1 dan matriks2

    //? Array Library
    array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5}; //ketika pake library inputnya bisa langsung

    cout << "Nilai : ";

    for (float n : nilai) {         //* For Each Loop //mengubah nilai menjadi n
        cout << n << " ";
    } //mengeluarkan data n
}