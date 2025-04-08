#include <iostream>
using namespace std;
int main(){
    char pilih;
    int a,b;
    a=1;
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
    return 0;
}
