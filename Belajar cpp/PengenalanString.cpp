#include <iostream>
using namespace std;
#include <string>
int main(){

    //char kata[6] = {'k','a','n','j','u','t'};
    // *array fix, tidak bisa ditambah
    string kata("mobil");
    cout << kata << endl;

    string data;
    cout << "Masukan kata atau kalimat" << endl;
    cin >> data;
    cout << "Data yang dimasukan adalah : " << endl;
    cout << data << endl;


    cin.get();
    return 0;
}
