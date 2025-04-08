#include <iostream>

using namespace std;

int main()
{
   int a = 2;
   int b = 3;

    //0 is true, 1 is false

   bool hasil1, hasil2;

   //comparasi, relation expression
    //sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;

    //tidak sebanding
    hasil2 = (a != b);
    cout <<hasil2  << endl;

    //lebih dari
    hasil1 = (a < b);
    //kurang dari
    hasil2 = (a > b);

    cin.get();
    return 0;
}
