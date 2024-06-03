#include <iostream>
#include <vector> //library untuk vector

using namespace std;

int main() {
    system("cls");

    //? Vector Declaration and Initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"}; //menambahkan serta mengdeklarasikan nama_karyawan

    //? Accessing Elements of Vector
    for (int i = 0; i < nama_karyawan.size(); i++) { //size() = panjang vector
        cout << nama_karyawan[i] << endl; //menampilkan Andi, Budi, Santi, Doni, Yanto
    }

    for (string karyawan : nama_karyawan) {     //* For Each Loop //mengubah nama_karyawan menjadi karyawan
        cout << karyawan << endl;
    } 

    //? Add Data to Vector
    nama_karyawan.push_back("Wawan"); // data menjadi Andi, Budi, Santi, Doni, Yanto dan Wawan

    //? Delete Data from Vector
    nama_karyawan.pop_back();       //* Menghapus data vector paling akhir //menghapus Wawan
    nama_karyawan.erase(nama_karyawan.begin() + 3);     //* begin() untuk mendapatkan data paling awal, erase() untuk menghapus data
    // menghapus Doni
}