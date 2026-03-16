/*
Calcular el área de un círculo
∗ Suma de dos números
∗ Determinar si un número es par o impar
∗ Encontrar el mayor de dos números
∗ Verificar si una persona es mayor de edad
*/ 
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    cout<<"..::ESTE PROGRAMA RESUELVE EL AREA DE UN CIRCULO::.."<<endl;
    double radio, pi=3.1415, area;
    cout<<"Ingrese el radio: ";
    cin>>radio;

    area = pi * pow(radio,2);
    cout<<"EL area del circulo es: "<<area<<endl;
    
    return 0;
}