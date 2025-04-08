#include <iostream>
using namespace std;

int luas_kotak (int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}
//overloading
int luas_kotak (int sisi){
    int luas = sisi * sisi;
    return luas;
}
double luas_kotak(double sisi){
    return sisi*sisi;
}

int main (){

    cout << "Luas kotak 2 x 3 : " << luas_kotak(2,3) << endl;
    cout << "Luas kotak 2 x 2 : " << luas_kotak(2) << endl;
    cout << "Luas kotak 2.5 x 2.5 : " << luas_kotak(2.5) << endl;
    cin.get();
    return 0;
}
