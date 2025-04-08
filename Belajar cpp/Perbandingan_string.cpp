#include <iostream>
#include <string>

using namespace std;

int main (){
    //Perbandingan
    string input;
    string kata_misteri("suka");

   while(true){
    cout << "Tebak kata sini!! ";
    cin >> input;
    cout << "Kata yang dimasukan adalah  : " << input << endl;

    if(input == kata_misteri){
        cout << "Kata anda benar" << endl;
        break;
    }
    cout << "Tebakan anda salah " << endl;
   }
   cout << "Program end" << endl;

    cin.get();
    return 0;
}
