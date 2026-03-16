/*2.Convertir grados Celsius a Fahrenheit
Pseudocodigo
   1. definir las variables
   2. Asignar valor a las variables 
   3. Solicitar el Grado Celsius
   4. Aplicar formula (celsius*1.8)+32
   5. Mostrar el resultado obtenido
*/ 
#include <iostream>
using namespace std;

int main() {
 
    float var1, var2, celsius, resultado;
    var1=1.8;
    var2=32;
    cout<<"Ingrese los grados Celsius: ";
    cin>>celsius;
    
    resultado= (celsius*var1)+var2;
    cout<<"El resultado es: " << resultado<<endl;
    return 0;
}