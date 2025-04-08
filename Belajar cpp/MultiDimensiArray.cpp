#include <iostream>
using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        for ( int j = 0; j < kolom; j++){
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << endl;
    }
}

int main(){
    //array[baris][kolom]

    // int arrayDD[2][2]= {1,2,3,4};
// #JIka munggunakan ini, tidak menggunakan void
    /*cout << arrayDD [0][0]<< " " << arrayDD [0][1] << endl;
    cout << arrayDD [1][0]<< " " << arrayDD [1][1] << endl; */
    const int baris = 2;
    const int kolom = 2;
    int arrayDD[baris][kolom] = {1,2,3,4};
    printArray(*arrayDD, baris, kolom );
    cin.get();
    return 0;
}
