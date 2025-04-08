#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukan nilai" << endl;
    cin >> a;

    switch (a) {
    case 5 :
        cout << "a = 5" << endl;
    case 4 :
        cout << "a = 4" << endl;
    case 3 :
        cout << "a = 3" << endl;
    case 2 :
        cout << "a = 2" << endl;
    case 1 :
        cout << "a =  1" << endl;
    default
        cout << "default" << endl;

    }
    cout << "Selesai" << endl;
    cin.get();
    return 0;
}
