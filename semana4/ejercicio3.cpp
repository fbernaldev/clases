/*∗ Solicita dos números enteros, si ambos números son positivos muestra: “Ambos son positivos”. 
Si al menos uno es negativo muestra: “Al menos uno es negativo”.
*/

//
#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cout<<"Ingrese ambos numeros: "; 
    cin>>num1>>num2;
    (num1>0 && num2>0 && cout<<"AMbos son positivos.\n")||
    ((num1<0 || num2<0) && cout<<"Al menos uno es negativo.\n");

    return 0;
}