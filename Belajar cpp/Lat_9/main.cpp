#include <iostream>

using namespace std;

int main()
{
   int i= 0;
    while (i <= 10){
    i++;
   //for (int i=0; i <= 10; i++)
    if ( i == 5) {

        continue;
       // break;
    }

    //i++ dipakai kalau pakai while
    cout << i << endl;
    //i++ di gunakan break
   }
   cout << "Akhir " << endl;

    cin.get();
    return 0;
}
