#include <iostream>

using namespace std;

//reporter
int kuadrat (int x) {
    int y;
    y = x * x;
    return y;
}
//worker, tidak ada input data
void tampilkan (int input) {

    cout << "Menampilkan dengan void\n";
    cout << input << endl;
}


int main () {
    int input,hasil,a,b,hasil2;
    cout << "Masukan nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat (input);

    tampilkan(hasil);

    cin.get();
    return 0;
}
