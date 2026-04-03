//Ingrese un numero entero positivo y calcular la suma de sus digitos
//1234---10
//1234 % 10= 4
//
#include <iostream>
using namespace std;

int main() {

    int numero, digito, suma = 0;
    cout<<"Ingresa un numero: ";
    cin>>numero;

    while (numero > 0)
    {
        digito = numero % 10;
        suma = suma + digito;
        

    }
    


    return 0;
}