#include <iostream>

using namespace std;

//fungsi menghitung luas persegi panjang
double hitung_luas (double p, double l) {
    double luas = p * l;
    return luas;
}
// hitug keliling persegi panjang
double hitung_keliling(double p, double l) {
    double keliling = 2 * ( p + l);
    return keliling;
}

void tampilkan_luas (double p, double l) {
    cout << "tampilkan void\n";
    cout << "luasnya adalah ";
    cout << hitung_luas (p,l) << endl;
}

int main () {

    double panjang,lebar;
    cout << "panjang ";
    cin >> panjang;
    cout << "lebar ";
    cin >> lebar;

    tampilkan_luas(panjang,lebar);
    cout << "Luasnya adalah: ";
    cout << hitung_luas(panjang,lebar) << endl;
    cout << "Kelilingnya adalah: ";
    cout << hitung_keliling(panjang,lebar) << endl;

    cin.get();
    return 0;
}
