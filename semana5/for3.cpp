//Solicita un numero entero positivo y determina si es un numero pefecto
//Solicita un numero entero positivo y determina si es primo
//Solicita una base "b" y un exponente entero positivo "e". Calcula la potencia b elevado a la e
//Solicita al usuario un numero entero N. Luego ingresa n numero y determina
// el numero mayor
//el numero menor

#include <iostream>
using namespace std;

int main() {

    int numero, suma = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;//6

    for (int i = 1; i < numero; i++) {//1, 2 , 3  , 6 
        if (numero % i == 0) {// 1, 2, 3, 6 
            suma += i;//
        }
    }

    if (suma == numero) {
        cout << "El numero es perfecto" << endl;
    } else {
        cout << "El numero no es perfecto" << endl;
    }

    return 0;
}