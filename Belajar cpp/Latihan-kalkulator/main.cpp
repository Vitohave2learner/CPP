#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator \n \n" ;

    //Masukan input dari user
    cout << "Masukan nilai: ";
    cin >> a;
    cout << "Pilih operator +,-,/,*:";
    cin >> aritmatika;
    cout << "Masukan nilai kedua:";
    cin >> b;

    cout << "\n Hasil Perhitungan";
    cout << a << aritmatika << b << endl;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    } else {
        cout << "Hasil Tidak Ditemukan" << endl;
    }

        cout << " = " << hasil << endl;


    cin.get();
    return 0;
}
