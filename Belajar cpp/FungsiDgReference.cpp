#include<iostream>
using namespace std;

void fungsi(int &b){
    b = 10;
    cout << "Address b " << &b << endl;
    cout << "Nilai b " << b << endl;
    }
//nilai ref = Nilai reference
void kuadrat(int &nilairef){
    nilairef = nilairef * nilairef;
}
int main(){
    int a = 5;
    cout << "Address a " << &a << endl;
    cout << "Nilai a " << a << endl;
    int &b = a;
    cout << "Address b " << &b << endl;
    cout << "Nilai b " << b << endl;

    fungsi(a);
    cout << "Nilai a "<< a << endl;

    kuadrat(a);
    cout << "Nilai a "<< a << endl;


    cin.get();
    return 0;
}
