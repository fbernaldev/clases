/*Desarrollar un programa que simule un sistema de calculo de facturacion de clientes:
1. Mostrar un menu
   - 1. Registrar consumo del cliente
   - 2. Calcular total a pagar
   - 3. Contar cuantos consumos fueron mayores a 50
   - 4. Mostrar el consumo mayor
   - 5. Salir
2. El usuario ingresara N consumos (uno por uno)
3. No usar arreglos
4. Se deben usar funciones para:
  - Acumular total
  - Contar consumos altos
  - Encontrar el mayor
*/
#include <iostream>
using namespace std;

// Función para acumular total
float acumular(float total, float consumo) {
    return total + consumo;
}

// Función para contar consumos mayores a 50
int contarAltos(int contador, float consumo) {
    if (consumo > 50) {
        contador++;
    }
    return contador;
}

// Función para encontrar el mayor
float calcularMayor(float mayor, float consumo) {
    if (consumo > mayor) {
        mayor = consumo;
    }
    return mayor;
}

int main() {
    int opcion;
    float consumo, total = 0, mayor = 0;
    int contadorAltos = 0;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Registrar consumo\n";
        cout << "2. Total a pagar\n";
        cout << "3. Consumos mayores a 50\n";
        cout << "4. Consumo mayor\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese consumo: ";
                cin >> consumo;

                total = acumular(total, consumo);
                contadorAltos = contarAltos(contadorAltos, consumo);
                mayor = calcularMayor(mayor, consumo);
                break;

            case 2:
                cout << "Total a pagar: " << total << endl;
                break;

            case 3:
                cout << "Cantidad de consumos > 50: " << contadorAltos << endl;
                break;

            case 4:
                cout << "Consumo mayor: " << mayor << endl;
                break;

            case 5:
                cout << "Saliendo del sistema...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 5);

    return 0;
}