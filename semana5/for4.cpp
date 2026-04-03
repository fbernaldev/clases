//Solicita un numero entero positivo y determina si es primo
#include <iostream>
using namespace std;

int main() {

    int numero, contador = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }


    return 0;
}