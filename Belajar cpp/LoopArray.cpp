#include <iostream>
using namespace std;

int main(){
    int arrayNilai[10]= {1,2,3,4,5,6,7,8,9,10};

    for(int nilai : arrayNilai){
        cout <<"address : " << &nilai <<  nilai << endl;
    }

    cout << endl;

    for(int &nilaiRef : arrayNilai){
        nilaiRef *= 2;
        cout <<"address : " << &nilaiRef <<  nilaiRef << endl;
    }

cout << endl;

     for(int &nilaiRef : arrayNilai){
        cout <<"address : " << &nilaiRef <<  nilaiRef << endl;
    }

    return 0;
}
