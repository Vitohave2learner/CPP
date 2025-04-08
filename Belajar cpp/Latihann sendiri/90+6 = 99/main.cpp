#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

     cout << "Selamat dtang" << endl;

    // kalimat muncul
    cout << "masukan nilai"s;
    cin >> a;
    cout << "pilih +,-,/,*";
    cin >> aritmatika;
    cout << "Pilih angka kedua";
    cin>> b;

    // operasi hitung
    cout << "hasil perhitungan";
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
        cout << "operator anda salah" << endl;
        }
    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}
