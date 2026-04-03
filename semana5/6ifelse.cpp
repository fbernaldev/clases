//dada 3 longitudes, comprueba si pueden formar un triangulo, luego clasifica el tipo triangulo
// segun sus lados

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Ingrese los 3 lados: ";
    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a){

      if(a==b && a==c){
        cout<<"EL triangulo es Equilatero";

    }else if (a==b && a!=c){
    cout<<"EL triangulo es Isosceles";

    }else
    cout<<"EL triangulo es Escaleno";
    }else {
        cout<<"No puedes formar un triangulo "<<endl;
    }
    
    
    return 0;
}