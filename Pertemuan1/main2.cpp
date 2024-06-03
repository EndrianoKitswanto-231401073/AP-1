#include <iostream> // library untuk c++

using namespace std; // agar di bawah tidak menginput std::

int main() {
    // deklarasi var
    string nama; //pada c++ ada string langsung
    int nim;
    char kom;
    float ip;

    cout << "Hello World" << endl; // mengeluarkan Hello World, endl = \n

    // menginput nama,nim,kom,ip
    cout << "Masukkan Nama : "; 
    // cin >> nama;
    getline(cin, nama); //agar nama bisa di spasi ketika menginputkannya

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    //mengeluarkan nilai nama,nim,kom,ip
    cout << "NAMA : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP : " << ip << endl;


}