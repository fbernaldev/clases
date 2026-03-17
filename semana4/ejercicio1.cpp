/*
1. Escribe un programa que solicite dos edades y muestre si tienen la misma edad o cuál es mayor.
∗ Solicita un valor booleano y muestra el valor contrario.
∗ Solicita dos números enteros, si ambos números son positivos muestra: “Ambos son
positivos”. Si al menos uno es negativo muestra: “Al menos uno es negativo”.
∗ Declara una variable x con un valor ingresado por teclado. Luego, aumenta su
valor en 5 usando el operador de asignación y muéstralo.
*/

/*
pensamiento
leer edades
comparar si son iguales
cual es mayor
mostar resultado

pseudocodigo
Algoritmo edades
	definir edad1, edad2 Como Entero
	Escribir 'Ingrese edad 1: '
	Leer edad1
	Escribir 'ingrese edad2: '
	Leer edad2
	Escribir 'la edad1  es igual a edad: 2' edad1=edad2
	escribir 'la edad mayor es' edad1>edad2
	
FinAlgoritmo
*/
#include <iostream>
using namespace std;

int main() {

    int edad1, edad2;
    cout<<"Ingrese la Primera edad: ";
    cin>>edad1;
    
    cout<<"ingrese la segunda edad: ";
    cin>>edad2;

    (edad1 == edad2 && cout<<"Tienen la misma edad\n")||
    (edad1 > edad2 && cout<<"La primera edad es Mayor\n")||
    (edad2 > edad1 && cout<<"La segunda edad es mayor\n");

    return 0;
}
