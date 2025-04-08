#include <iostream>
using namespace std;



double hitung_luas (double p, double l) {
    return p * l;
}

int main () {
    int panjang,lebar;
    cout << "Panjang ";
    cin >> panjang;
    cout << "Lebar ";
    cin >> lebar;
    cout << hitung_luas (panjang,lebar) << endl;

    cin.get();
    return 0;
}
