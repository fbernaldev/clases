//Solicita una base "b" y un exponente entero positivo "e". Calcula la potencia b elevado a la e
#include <iostream>
using namespace std;

int main() {

    int b, e;
    long long resultado = 1;

    cout << "Ingrese la base: ";
    cin >> b;

    cout << "Ingrese el exponente (positivo): ";
    cin >> e;

    for (int i = 1; i <= e; i++) {
        resultado *= b;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}