#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

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

void fungsi(int *b){
    cout << "Adress b " << b << endl;
    cout << "Nilai b " << *b << endl;
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}


