#include <iostream>
using namespace std;

int operasi(int n);

int main (){
    int bilangan,nilai;

    cout << "Masukan angka anda : ";
    cin >> nilai;

    bilangan = operasi(nilai);
    cout << "Hasilnya adalah : " << bilangan << endl;

    return 0;
}

int operasi(int n) {
    if ( n <= 1 ) {
        cout << n;
        return n;
    } else {
        return n * operasi (n-2);
    }

}
