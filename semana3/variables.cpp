/*
1. Declara una constante int llamada MAX_NOTAS con el valor
100.
2. Declara una constante float llamada PI utilizando const y
asígnale el valor 3.14159.
3. Declara una constante char llamada SEPARADOR y asígnale
el carácter '-’.
4. Declara una constante bool llamada ES_ADMIN y asígnale
true.
5. Usa #define para declarar una constante SALUDO con el
valor "Hola Mundo".
6. Crea un programa que calcule el área de un círculo usando
una constante PI.*/
#include <iostream>
#include <cmath>
using namespace std;
const int MAX_NOTAS = 100;
const float PI = 3.14159;
const char SEPARADOR = '_';
const bool ES_ADMIN  = true;
#define SALUDO "Hola Mundo"
int main() {
   cout<<"El valor de la variable MAX_NOTAS es: "<<MAX_NOTAS<<endl;

   cout<<"El valor de la variable PI es: "<<PI<<endl;
   
   cout<<"El valor de la variable SEPARADOR es: "<<SEPARADOR<<endl;
    
   cout<<"El valor de la variable ES_ADMIN es: "<<ES_ADMIN<<endl;

   cout<<"El valor de la variable SALUDO es: "<<SALUDO<<endl;
   
   double area;
   int radio=5;
   area=PI*pow(radio,2);
   cout<<"el valor del area de circulo es: "<<area<<endl;

    return 0;
}