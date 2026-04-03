#include <iostream>
using namespace std;


bool esMayor(int a, int b) {
    return a > b;
}


bool esMayor(double a, double b) {
    return a > b;
}

int main() {
    int x = 10, y = 5;
    double a = 3.5, b = 7.2;

    // Uso con enteros
    if (esMayor(x, y)) {
        cout << "El primer entero es mayor" << endl;
    } else {
        cout << "El primer entero NO es mayor" << endl;
    }

    // Uso con decimales
    if (esMayor(a, b)) {
        cout << "El primer double es mayor" << endl;
    } else {
        cout << "El primer double NO es mayor" << endl;
    }

    return 0;
}