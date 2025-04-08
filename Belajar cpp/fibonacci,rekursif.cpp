#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int a,h;
    cout << "Menghitung fibonacci ke-n" << endl;
    cin >> a;
    h = fibonacci(a);

    cout << "Nilainya adalah: ";
    cout << h;
    cin.get();
    return 0;
}
int fibonacci(int n){
    cout << "Ini fungsi fibonacci " << n << endl;
    if((n == 0)||(n == 1)){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);

    }
}
