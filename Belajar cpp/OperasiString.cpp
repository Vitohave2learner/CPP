#include <iostream>
#include <string>
using namespace std;
int main (){

    string kata("Kucing");
    // menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasarkan index
    cout << "Index ke 0 : " << kata[0] << endl;
    cout << "Index ke 1 : " << kata[1] << endl;
    cout << "Index ke 2 : " << kata[2] << endl;
    cout << "Index ke 3 : " << kata[3] << endl;
    cout << "Index ke 4 : " << kata[4] << endl;
    cout << "Index ke 5 : " << kata[5] << endl;

    // merubah karakter pada index tertentu
    kata[1] = 'e';
    cout << kata << endl;

    // menyambung concatenation
    string kata2(kata + " bang");
    cout << kata2 << endl;

    string kata3(" Uhuy");
    kata2.append(kata3);
    cout << kata2 << endl;

    string kata4(" Ahay");
    kata2 +=" " + kata4;
    cout << kata2 << endl;

    cin.get();
    return 0;
}
