#include <iostream>
#include <cstdlib>

using namespace std;

int main (){

    /*for (int i = 0; i < 10; i++){
        cout << 1 + rand() % 6 << endl;
    }*/

    char lanjut;
    while (true){
        cout << "lempar dadu? (y/n)";
        cin >> lanjut;

        if (lanjut == 'y'){
            cout << 1 +(rand() % 6) << endl;
        }else if (lanjut == 'n') {
            break;
        }else {
            cout << "Harus pilih y or n\n";
        }
    }

    cin.get();
    return 0;
}
