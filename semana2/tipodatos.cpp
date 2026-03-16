/*1. Declara una variable de tipo int llamada edad y asígnale
tu edad.
2. Declara una variable de tipo float llamada precio y
asígnale el valor 17.99.
3. Declara una variable de tipo char llamada genero y
asígnale la letra ‘F’.
4. Declara una variable de tipo double llamada distancia y
asígnale el valor 12345.6789
5. Declara una variable de tipo bool llamada esGraduado y
asígnale false.*/
#include <iostream>
using namespace std;


int main() {
    int edad = 35;
    cout<<"La edad es: "<<edad<<endl;
 

    

    float precio = 17.99;
    cout<<"El precio es: "<<precio<<endl;
    
    char genero = 'F';
    cout<<"EL genero es: "<<genero<<endl;

    double distancia = 12345.6789;
    cout<<"La distancia es: "<<distancia<<endl;

    bool esGraduado = false;
    cout<<"Boleano: "<<esGraduado<<endl;

    int num;
    cout<<"ingrese un numero entero ";
    cin>> num;
    cout<< "el numero es " << num <<endl;

    float num2=1.23;
    cout<< "Float: " <<num2<<endl;
    
    double num3=1.2024458745;
    cout<< "el double: " <<num3<<endl;

    char letra='F';
    cout<< "caracter: " <<letra<<endl;

    bool boleano='1';
    cout<< "boleano: " <<boleano<<endl;

    return 0;
}