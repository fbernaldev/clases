//Determinar si un número es par o impar
//pensamiento
//declarar numero
//leer numero
//si numero / 2 == 0
//mostrar par
//sino mostrar impar
//pseudocodigo
/*
Algoritmo parimpar
	Definir numero Como Entero
	Escribir "ingrese un numero"
	Leer numero
	si numero%2=0
		Escribir "El numero es par"
	SiNo
		Escribir "el numero es impar"
	FinSi  
FinAlgoritmo
 */
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    
    if (numero % 2 == 0)
    {
       cout<<"El numero es PAR";
    
    }else
        cout<<"EL numero es IMPAR";

    return 0;
}