//Ingresar numeros hasta que el usuario ingrese 0.
//Determinar cuantos numero pares fueron ingresados

#include <iostream>
using namespace std;

int main() {
#include <iostream>
using namespace std;


    int numero;
    int contadorPares = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        
        if (numero % 2 == 0) {
            contadorPares++;
        }

        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "Cantidad de numeros pares: " << contadorPares << endl;


    
    return 0;
}