#include <iostream>
using namespace std;

int main (){
    int n;

    cout << "Masukan angka ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << "^";
        }
        for(int k = i; k <= (2*n-3); k++){
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}
