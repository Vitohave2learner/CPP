#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= i; j++){
            cout << "m";
        }
        for(int k = n; k >=(2*i-n) ; k--){
            cout << "x";
        }
        cout << endl;
    }
    return 0;
}
