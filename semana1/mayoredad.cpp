//Verificar si una persona es mayor de edad
//pensamiento
//1. leer edad
//2. verificar si es mayot
//3. mostar mensaje
/*Algoritmo mayordeedad
	Definir edad Como Entero
	Escribir "ingrese su edad"
	leer edad
	si edad >=18
		Escribir "Mayor de edad"
	SiNo
		Escribir "menor de edad"
	FinSi
FinAlgoritmo
 */
#include <iostream>
using namespace std;
 
int main() {
    int edad;
    cout<<"Ingrese su edad: ";
    cin>>edad;
    if (edad >=18)
    {
        cout<<"Es mayor de edad";
    }else   
        cout<<"Es menor de edad";
    
    return 0;
}