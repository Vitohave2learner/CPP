#include <iostream>
using namespace std;

int main (){
    int a;
    char nilai;

    a=0;
    do{
            cout << ""<<endl;
        do{
            cout << "Masukan nilai 0-100";
            cin >> a;
            if(nilai <=0 || nilai >= 100){
                cout << "Nilai tidak valid, Masukan nilai 0-100";
                    }
        }while(nilai <= 0 || nilai >=100);
        a++;
    }while(a=3);
    return 0;
}
