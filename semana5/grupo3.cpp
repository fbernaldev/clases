/*Crear un programa en C++ que pida al usuario un número entero y
muestre su tabla de multiplicar del 1 al 10, usando el bucle while.

ANALISIS
1. Declarar variables
2. solicitar ingresar el numero
3. Estructura de control Mientras, incluir condicion 
4. FIn del proceso

PSEUDOCODIGO
Algoritmo tabla_multiplicar
	definir numero, contador Como Entero
	contador = 1
	escribir 'Ingrese el numero'
	leer numero
	Mientras contador <=10
		escribir numero 'x' contador '=' numero * contador
		contador=contador +1
	FinMientras
FinAlgoritmo
 */

#include <iostream>
using namespace std;

int main() {

    int n, contador = 1;
    cout << "Ingresa un nmero: ";
    cin >> n;
  
    while (contador <= 10) {
        cout << n << " x " << contador << " = " << n*contador << endl;
        contador++;}
 
    
    return 0;
}