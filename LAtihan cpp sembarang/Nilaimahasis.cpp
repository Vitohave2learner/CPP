#include <iostream>
using namespace std;

int main() {
    int i = 1;
    string nama;
    int nilai;

    do {
        cout << "Masukkan data untuk mahasiswa ke-" << i << ":\n";
        cout << "==================================" << endl;
        do {
            cout << "Nilai (0-100): ";
            cin >> nilai;
            if (nilai <= 0 || nilai >= 100) {
                cout << "Nilai tidak valid. Masukkan nilai antara 0-100.\n";
            }
        } while (nilai <= 0 || nilai >= 100);

        i++;
    } while (i <= 3);

    return 0;
}
