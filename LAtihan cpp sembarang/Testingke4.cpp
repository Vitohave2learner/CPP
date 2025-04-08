#include <iostream>
using namespace std;

int main (){
        int b;
        int n = 5;
        cout << "Masukan berapa banyak barisnya ";
        cin >> b;

        for(int i = 1; i<= n; i++){
            for(int j = n; j >= i; j--){
            cout << " ";
            }
                for( int k = 1; k <= b ; k++){
                cout << "#";
                    }
                    cout << endl;
                        }

        cout << "Banyaknya # adalah "<< b*5 << endl;

    return 0;
}
