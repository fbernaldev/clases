//∗ Encontrar el mayor de dos números
//I---PENSAMIENTO
//1. leer numero A
//2. leer numero B
//3. comparar numeros
//4. mostrar mayor
//II.Pseudocodigo
/*
Algoritmo mayor
	definir numero1, numero2 Como Entero
	Escribir "ingrese 1er numero"
	Leer numero1
	Escribir "ingrese 2do numero"
	Leer numero2
	si numero1>numero2
		Mostrar numero1
	SiNo
		Mostrar numero2
	FinSi
FinAlgoritmo
*/
 
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout<<"ingrese ambos numeros: ";
    cin>>num1>>num2;
    if (num1>num2)
    {
        cout<<"El numero mayor es: "<<num1<<endl;
    }else
       cout<<"El numero mayor es: "<<num2<<endl;

    return 0;
}