//Solicita al usuario un numero entero N. Luego ingresa n numero y determina
// el numero mayor
//el numero menor

#include <iostream>
using namespace std;

int main() {
int N, num;
    
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    if (N <= 0) {
        cout << "Cantidad invalida" << endl;
        return 0;
    }

    cout << "Ingrese el numero 1: ";
    cin >> num;

    int mayor = num;
    int menor = num;

    for (int i = 2; i <= N; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num > mayor) {
            mayor = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;

    

    return 0;
}