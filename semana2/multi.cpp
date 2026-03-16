//crea un programa que multiplique una variable float por una double y muestre el resultado
//1. declaro una variable float
//2. declarar una variable double
//3. multiplicar ambas
//4. mostrar el resultado
//pseudocodigo
/*
Algoritmo multi
	Definir factor1 Como Real
	definir factor2 como real
	definir producto Como Real
	Escribir "ingrese el fa4ctor1"
	Leer factor1
	Escribir "factor2"
	Leer factor2
	producto= factor1*factor2
	Escribir "el resultado del producto es"," ", producto
FinAlgoritmo*/
#include <iostream>
using namespace std;


   
int main() {    

    
    /*float numerofloat = 5.5f;
    double numerodouble = 2.345;
    double resultado = numerofloat * numerodouble;
    cout<<"el resultado de la multiplicacion es: "<<resultado<<endl;*/

    float numerofloat;
    double numerodouble;
    double resultado;

    cout<<"Ingrese el numero float:";
    cin>>numerofloat;

    cout<<"ingrese el numero double";
    cin>>numerodouble;

    resultado= numerofloat * numerodouble;
    cout<<"el resultado es: "<<resultado<<endl;

    return 0;
}