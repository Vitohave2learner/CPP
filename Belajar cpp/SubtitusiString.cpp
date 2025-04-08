#include <iostream>
#include <string>
using namespace std;

int main(){

    string kalimat1("Hai aku anak sehat dari barat");
    string kalimat2("Indonesia bakal gelap");

    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    cout << endl;

    // Swap string
    cout << "Ini swap string" << endl;
    cout << endl;
    kalimat1.swap(kalimat2);
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    cout << endl;
    // replace
    cout << "Ini replace string" << endl;
    cout << endl;
    kalimat1.replace(16,5,"TERANGGGG");
    kalimat2.replace(8,4,"bapak"); // kalimat 2 ini sebenarnya di kalimat1 karena diswap.

    kalimat1.replace(kalimat1.find("bakal"),5,"pasti");
    cout << endl;


    // Insert
    cout << "Ini insert" << endl;
    kalimat1.insert(10,"amat ");

    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;


    cin.get();
    return 0;
}
