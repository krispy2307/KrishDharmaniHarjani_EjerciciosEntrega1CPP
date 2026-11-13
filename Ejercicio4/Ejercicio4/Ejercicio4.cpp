// ex03_26_cifrar.cpp - Ejercicio 3.26 (cifrado)
// Entero de 4 cifras d1 d2 d3 d4:
//   1) a cada cifra: (cifra + 7) % 10
//   2) intercambiar 1a con 3a, y 2a con 4a
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Entero de cuatro cifras a cifrar (0000-9999): ";
    cin >> numero;

    if (numero < 0 || numero > 9999) {
        cout << "Debe tener cuatro cifras.\n";
        return 1;
    }

    // Separar las cifras con / y %
    int d1{ numero / 1000 };
    int d2{ numero / 100 % 10 };
    int d3{ numero / 10 % 10 };
    int d4{ numero % 10 };

    // Paso 1: sumar 7 y quedarse con el resto de dividir entre 10
    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    // Paso 2: intercambiar 1a<->3a y 2a<->4a
    int temp{ d1 }; d1 = d3; d3 = temp;
    temp = d2;    d2 = d4; d4 = temp;

    cout << "Cifrado: " << d1 << d2 << d3 << d4 << "\n";   // se imprime cifra a cifra para conservar ceros iniciales
}
