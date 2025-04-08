#include <iostream>
using namespace std;

void fungsi(int *b){
    cout << "Adress b " << b << endl;
    cout << "Nilai b " << *b << endl;
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}

int main (){
    int a = 5;
    cout << "Adress a " << &a << endl;
    cout << "Nilai a " << a << endl;
    //fungsi(&a); // fungsi dengan input

    kuadrat(&a);

    cout << "Nilai a " << a << endl;

cin.get();
return 0;
}


/* Jika menggunakan ini, maka akan berbeda alamat

void fungsi(int b){
    cout << "Adress b " << &b << endl;
    cout << "Nilai b " << b << endl;
}

int main (){
    int a = 5;
    cout << "Adress a " << &a << endl;
    cout << "Nilai a " << a << endl;
    fungsi(a); */

