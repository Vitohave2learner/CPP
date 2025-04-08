#include <iostream>
using namespace std;
int main(){
    char pilih;
    int a,b;
    a=1;
    do{
        do{
        a++;
        b=1;
        do{
            cout <<"A=" << a << " B =" << b << endl;
            b++;
        }
        while (b <= 3);
    }
    while (a <= 2);

    cout << "Apakah anda ingin mengulangi program  ini?(Y/N)";
    cin >> pilih;
    cout << "Program telah selesai" << endl;
    }while (pilih == 'Y'|| pilih == 'y');
    return 0;
}
