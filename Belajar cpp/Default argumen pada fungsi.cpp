#include <iostream>
using namespace std;
//fungsi prototipe
double volume_kubus(double p=10, double l=3, double t=2);


int main () {

    cout << " Volume kubus: " << volume_kubus(3,4,5) << endl;
    cout << " Volume kubus: " << volume_kubus(3,4) << endl;
    cout << " Volume kubus: " << volume_kubus(3) << endl;
    cout << " Volume kubus: " << volume_kubus() << endl;
    cin.get();
    return 0;
}
//defaul argumen atau nilai standar
double volume_kubus(double p, double l, double t) {
    return p*l*t;
}
