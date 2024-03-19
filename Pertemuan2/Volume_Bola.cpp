#include <iostream>
using namespace std;

main(){
    const float phi = 3.14;
    float r,v,lp;
    cout << "Masukkan Jari-Jari Bola : ";
    cin >> r;

    v = (4 / 3) * r * r * r * phi;
    lp = 4 * phi * r * r;

    cout << "volume : " << v << endl;
    cout << "luas Permukaan : " << lp << endl;

    return 0;
}