#include <iostream>
using namespace std;

int main() {
    int n = 5; // Jumlah baris

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 5; j++) {
            if (i== 1 || i == 3 || i == 5){
                cout << "*";
            } else if (j == 1){
                cout << "**";
            }else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
