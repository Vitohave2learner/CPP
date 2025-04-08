                        #snclude <iostream>

using namespace std;

int main () {

    float hasil,a,b;
    char aritmatika;

    cout << "MASUKAN NILAI: ";
    cin >> a;
    cout << "pilih +,-,/,* ";
    cin >> aritmatika;
    cout << "MASUKAN NILAI: ";
    cin >> b;

    cout << a << aritmatika << b << endl;

    if (aritmatika == '+') {
            hasil = a + b;
    } else if (aritmatika == '-') {
            hasil = a-b;
    } else if (aritmatika == '/') {
            hasil = a/b;
    } else if (aritmatika == '*') {
            hasil = a*b;
    }

    cout << hasil << endl;


    cin.get();
    return 0;
}
