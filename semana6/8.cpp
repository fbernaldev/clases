/* Escribe una función que reciba dos números enteros por referencia y los
intercambie. Muestra los valores antes y después de llamar a la función.
a = 5
b = 10;

a = 10;
b = 5;

*/

#include <iostream>
using namespace std;

void intercambiarValores(int &a, int &b){
    int temp;
    temp = a;
    a = b; 
    b = temp;
}

int main() {

    int numero1, numero2;

    cout<<"Ingresa el primer numero: ";
    cin>>numero1;
    
    cout<<"Ingresa el segundo numero: ";
    cin>>numero2;

    cout<<"Valores antes del intercambio: "<<endl;
    cout<<"Numero 1: "<<numero1<<", Nummero 2: "<<numero2<<endl;

    cout<<"Valores despues del intercambio: "<<endl;
    cout<<"Numero 1: "<<numero1<<", Nummero 2: "<<numero2<<endl;

    

    return 0;
}