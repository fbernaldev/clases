#include <iostream>
using namespace std;
void imprimir(int numero){

    cout<<"Numero entero: "<<numero<<endl;
}
void imprimir (double numero){
    cout<<"Numero Decimal: "<<numero<<endl;

}
void imprimir (string texto){
    cout<<"String: "<<texto<<endl;

}

int main() {
   imprimir (5);
   imprimir(3.14);
   imprimir ("Hola");    

    return 0;
}