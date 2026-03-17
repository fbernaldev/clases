/*Declara una variable x con un valor ingresado por teclado. Luego, aumenta su
valor en 5 usando el operador de asignación y muéstralo.*/
#include <iostream>
using namespace std;

int main() {

    int x;
    cout<<"Ingrese el valor de X: ";
    cin>>x;
    x+=5;
    cout<<"Nuevo valor de la Variable:"<<x<<endl;

    return 0;
}