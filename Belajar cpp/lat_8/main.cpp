#include <iostream>

using namespace std;

int main ()
{

    cout << "Loop 1 \n";
    for (int i = 1; i <= 10; i++ ){
            cout << i << endl;
    }
    cout << "akhir program\n";

     cout << "loop 2 \n";
    for (int i = 1; i <= 10; i+=2 ){
            cout << i << endl;
    }

     cout << "loop 3 \n";
    for (int i = 1; i >= -10; i-- ){
            cout << i << endl;
    }

     cout << "loop 4 \n";
    int total = 0;
    for (int i = 1; i <= 10; i++ ){
            total +=i;
            cout << i<< " Total " << total << endl;
    }
    cout << "akhir program\n";


    cin.get();
    return 0;
}
