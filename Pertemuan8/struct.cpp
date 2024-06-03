#include <iostream>
#include <vector>

using namespace std;

//? Struct Declaration
struct Mahasiswa {
    string nama, nim;
    float nilai;
}; //deklarasi nama, nim, nilai ke Mahasiswa

typedef struct {
    string nama, nim;
    float nilai;
} mhs;


int main() {
    system("cls");

    //? Struct Initialization
    Mahasiswa mhs; //deklarasi Mahasiswa sebagai mhs
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        
        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs.nama); //mhs.nama berarti kita menginput nama dari mahasiswa

        cout << "Masukkan NIM : ";
        cin >> mhs.nim; //mhs.nim berarti kita menginput nim dari mahasiswa

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai; //mhs.nilai berarti kita menginput nilai dari mahasiswa

        mahasiswa.push_back(mhs); //mendorong elemen ke vector
    }

    //menampilkan
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai : " << mahasiswa[i].nilai << endl;
    }

    return 0;
}
