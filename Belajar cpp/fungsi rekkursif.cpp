#include <iostream>
using namespace std;

//fungsi rekursif terbatas
int pangkat(int a, int b) {
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}


int pangkat_rekursif(int a, int b) {

    if (b <= 1){
        cout << "Ini akhir rekursif" << endl;
        return a;
    }else{
        cout << "rekursif\n";
        return a*pangkat_rekursif(a,(b-1));
}
    }

int main(){

    int a;
    int b;
    cout << "Angka : ";
    cin >> a;
    cout << "Pangkat: ";
    cin >> b;
    cout << "Hasil dari iterasi = " << pangkat(a,b) << endl;
    cout << "Hasil rekursif = " << pangkat_rekursif(a,b) << endl;
    cin.get();
    return 0;
}
