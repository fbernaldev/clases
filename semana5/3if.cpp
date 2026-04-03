// Si dos números son positivos, calcula su producto; 
//si no lo son calcula la suma.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Ingrese los 2 numeros: ";
    cin>>a>>b;
    if (a>=0 && b>0){
        cout<<"El producto es:"<<a*b;
    }else{
        cout<<"La suma es: "<<a+b;
    }
    

    return 0;
}