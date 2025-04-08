#include <iostream>
using namespace std;

int main (){

    int a = 5;

    //pointer
    int *aPtr = nullptr;
    aPtr = &a;

    //Int a mempunyai nilai dan address (alamat)
    cout << "Ini adalh nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr<< endl;
    // & merupakan address dari a

    //dereferencin, mengambil data dari pointer.
    a = 10;
    cout << "Akan mengambil data dari ptr : " << *aPtr << endl;

    return 0;
}
