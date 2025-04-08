#include <iostream>
using namespace std;
void fungsi(int *);
void kuadrat(int *a){
    *a = (*a) * (*a);
}
int main (){
    int a = 5;
    kuadrat(&a);
    cout << "Nilai dari a " << a << endl;

    return 0;
}
