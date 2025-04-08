#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 5> nilai;
    for(int i = 0; i <= 5; i++){
        nilai[i] = i;
        cout << "Nilai [" << i << "] " << nilai[i];
        cout << " address : " << &nilai[i] << endl;
    }
    //Ukuran array
    cout <<"Ukuran " << nilai.size() << endl;
    //address awal array
    cout << "Address awal " << nilai.begin() << endl;
    //address akhir array
    cout << "Address akhir " << nilai.end() << endl;
    // Nilai dengan index
    cout << "Nilai ke 2 " << nilai.at(2) << endl;
    cin.get();
    return 0;
}
