#include <iostream>

using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b) {
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int* a) {
    *a *= 2; //*a adalah pointer dimana akan sama dengan n 
}

int main() {
    system("cls");

    //? Pointer Declaration
    //* Normal Variable --> variable(data), &variable(alamat memori)
    int number = 35;
    //* Pointer Variable --> variable(alamat memori variabel yang ditunjuk), &variable(alamat memori), *variable(data variabel yang ditunjuk)
    int* pointer_number = &number;

    cout << "Isi variabel number = " << number << endl; //35
    cout << "Alamat memori variabel number = " << &number << endl; //alamat sama dengan pointer
    cout << "Isi variabel pointer_number = " << pointer_number << endl;//alamat sama dengan normal
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;//35
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;//alamat beda dengan normal

    //? Pointer Operation
    *pointer_number = 25;
    cout << "Isi variabel number = " << number << endl; //25
    cout << "Alamat memori variabel number = " << &number << endl;//alamat sama dengan pointer
    cout << "Isi variabel pointer_number = " << pointer_number << endl; //alamat sama dengan normal
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; //25
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;//alamat beda dengan normal

    //? Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int* pointer_num = num;

    cout << "Isi variabel num = " << num[0] << endl; //1
    cout << "Alamat memori variabel num = " << &num[0] << endl; //alamat sama dengan pointer
    // cout << "Alamat memori variabel num = " << num << endl;      //* Same with above
    cout << "Isi variabel pointer_num = " << pointer_num << endl; // alamat sama dengan normal
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; //1
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl; //alamat beda dengan normal

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl; //6
    cout << "Alamat memori variabel num = " << &num[0] << endl; //alamat sama dengan pointer
    cout << "Isi variabel pointer_num = " << pointer_num << endl; //alamat sama dengan normal
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; //6
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl; //alamat beda dengan normal 

    //? Pointer in Parameter
    int num1 = 5;
    int num2 = 7;

    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;
    //program diatas num 1 dan num 2 akan menghasilkan nilai yang sama seperti sebelumnya
    penjumlahanPointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;
    //program diatas num 1 akan menjadi 12 sedangkan num 2 cuma menghasilkan nilai yang sama sebab *num1 += *num2

    //? Pointer in Pointer
    int score = 4;
    int* pointer_score = &score;
    int** ptr_pointer_score = &pointer_score;
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl; //menghasilkan 4 dan alamat akan sama dengan pointer 
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl; //alamat akan sama dengan normal, 4, alamat akan beda
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl; //alamat akan sama dengan normal, 4, alamat akan beda

    //? Dynamic Pointer
    int* ptr = new int;     //* Memory allocation
    *ptr = 30; 
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl; //20, alamat pointer sendiri
    delete ptr;     //* Memory deallocation
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl; //angka random karna tidak ada nilai lagi, alamat pointer sendiri

    //* Example Code
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);
    cout << "Nilai angka setelah dikali 2 = " << n << endl; 

    return 0;
}
