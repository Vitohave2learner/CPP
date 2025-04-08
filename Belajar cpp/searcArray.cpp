#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
const size_t arraySize = 10;

void printArray(array <int, arraySize>&angka){
    cout << "Array: ";
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
}
/*void printArray(array <char, arraySize>&angka){
    cout << "Array: ";
    for(char &a : angka){
        cout << a << " ";
    }
    cout << endl;
}*/
int main (){
    array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};\
    printArray(angka);

    int angkaCari = 5;
    bool ketemu;
    //sort dulu baru search -> binary_search

    cout << "Mencari angka array di atas\n";
    cin >> angkaCari;
    sort(angka.begin(), angka.end());

    ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

    if (ketemu){
        cout << "ketemu" << endl;
    } else {
        cout << "Tidak ketemu" << endl;
    }

    cin.get();
    return 0;
}
