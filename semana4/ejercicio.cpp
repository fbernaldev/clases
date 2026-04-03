/*Declara una variable x con un valor ingresado por teclado. Luego, aumenta su
valor en 5 usando el operador de asignación y muéstralo.*/
#include <iostream>
using namespace std;

int main() {

 int x;
 cout<<"Ingrese el valor de la Variable: ";
 cin>>x;

 x+=5;

 cout<<"EL nuevo valor de la variable es: "<<x<<endl;

    return 0;
}