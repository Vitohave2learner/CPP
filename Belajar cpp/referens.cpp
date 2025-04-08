#include <iostream>
using namespace std;

int main (){

    //variabel
    int a = 5;

    cout << "Adress dari a " << &a << endl;
    cout << "Nilai dari a " << a << endl << endl;

    // cara agar alamatnya tidak sama dengan a dengan menambahkan &
    //reference
    int &b = a;

    cout << "Nilai dari b " << b << endl;
    cout << "Adress dari b " << &b << endl << endl;

    b = 10;
    cout << " Nilai dari a " << a << endl;
    cout << " Nilai dari b " << b << endl << endl;

    a = 100;
    cout << " Nilai dari a " << a << endl;
    cout << " Nilai dari b " << b << endl << endl;

    cin.get();
    return 0;
}
