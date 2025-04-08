#include <iostream>

using namespace std;

int main()
{
    // kesimpulan, jika ingin membagi pembagian hasil koma, maka salah satunya adalah float, dan modulus tidak bisa int dan float//

    float a = 6;
    int b = 4;
    float hasil;
    // operatornya +,-,*,/,%

    //penjumlahan
    hasil = a + b;
    cout << a << " + "<< b << " = "<< hasil << endl;

    //pengurangan
    hasil = a - b;
    cout << a << " - "<< b << " = "<< hasil << endl;

    //perkalian
    hasil = a * b;
    cout << a << " x "<< b << " = "<< hasil << endl;

    //pengurangan
    hasil = a / b;
    cout << a << " : "<< b << " = "<< hasil << endl;

    //modulus
    //hasil = a % b;
    //cout << a << " % "<< b << " = "<< hasil << endl;

    hasil = (a + b) * a;
    cout << hasil << endl;




    cin.get();
    return 0;
}
