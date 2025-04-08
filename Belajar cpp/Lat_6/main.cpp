#include <iostream>

using namespace std;

int main()
{
    //increment dan decremement
    //preincrement (blkg) dan postincrement (dpn)

    int a = 5;
    int b = 5;

    //postincrement
    //a++ sama dengan a = a + 1
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    //preincrement
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    cin.get();
    return 0;
}
