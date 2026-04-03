//Escribe una función que reciba una temperatura en grados Celsius y la
//convierta a Fahrenheit.
/*
1. recibir una temperatura en grados celsius
2. convertir a fahrenheit
3. mostrar temperatura
F = 9/5 C + 32
*/
#include <iostream>
using namespace std;

float convertirFahrenheit (float celsius){
    float fahrenheit;
    fahrenheit = (9.0/5.0)*celsius + 32;
    return fahrenheit;
}

int main() {
    float celsius, fahrenheit; 
    cout<<"Ingrese la temperatura rn Celsius: ";
    cin>>celsius

    

    return 0;
}