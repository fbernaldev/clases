//Crea una funcion que cuente cuantos numeros pares hay en un arreglo de enteros
#include <iostream>
using namespace std;

int contarPares(int arr[], int tamaño) {
    int contador = 0;

    for (int i = 0; i < tamaño; i++) {
        if (arr[i] % 2 == 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int tamaño = 6;

    int resultado = contarPares(numeros, tamaño);

    cout << "Cantidad de numeros pares: " << resultado << endl;

    return 0;
}