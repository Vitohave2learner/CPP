#include <iostream>
using namespace std;

//global scope
int x = 10;

int ambil_global(){
    return x;
}

int x_local(){
    int x = 5;
    return x;
}
int main () {

    cout << "1. Variabel Global " << x << endl;
    int x= 8;
    cout << "2. Variabel Lokal " << x << endl;

    cout << "3. Variabel Ambil_Global " << ambil_global() << endl;
    cout << "4. variable lokal " << x << endl;
    cout << "5. variabel x_local " << x_local() << endl;
    cout << "6. variable lokal " << x << endl;

    cout << "7. variable lokal " << x << endl;
    {
        cout << "8. variable lokal " << x << endl;
        //block scope
        int x =1;
        cout << "9. variable lokal " << x << endl;
        cout << "10. Variabel Global " << ambil_global() << endl;
    }
     cout << "11. variable lokal " << x << endl;
    cin.get();
    return 0;
}
