//1. solicitar un numero entero positivo,
//luego, pedirle al usuario que ingrese N nuemros
//y calcular la suma total
#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, contador = 1, numero;
    cout<<"Ingresa la cantidad de numeros: ";
    cin>>n;
    while (contador <= 0)
    {
        cout<<"Ingresa el numero: "<<contador<<": ";
        cin>>numero;
        suma =suma + numero;
        contador++;
    
    }
    cout<<"la suma total es:"<<suma<<endl;

    return 0;
}