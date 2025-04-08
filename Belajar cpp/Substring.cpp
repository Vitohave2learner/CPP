#include <iostream>
#include <string>
using namespace std;

int main(){

    string kalimat1("Tatang batang main rantang");
    string kalimat2("aku suka sama nanas");

    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    //substring, mengambil string di tengah-tengah
    //substr(index,panjang) index hanya bisa < tidak bisa <=
    cout << kalimat1.substr(7,6) << " ";
    cout << kalimat2.substr(14,5) << endl;

    // Mencari posisi dari substring
    cout << "Posisi Tatang : ";
    cout << kalimat1.find("Tatang") << endl;
    cout << "Posisi sama   : ";
    cout << kalimat2.find("sama") << endl;

    int a = kalimat1.find("ta");
    cout << a << endl;
    cout << kalimat1.find("ta", a + 1) << endl;
    cout << kalimat1.find("ta", a + 10) << endl;

    // mencari posisi dari belakang
    cout << kalimat2.rfind("na") << endl;

    cin.get();
    return 0;
}
