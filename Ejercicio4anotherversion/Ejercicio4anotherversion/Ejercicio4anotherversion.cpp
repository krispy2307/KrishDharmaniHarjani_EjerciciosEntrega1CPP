// ex03_26_cifrado.cpp - Ejercicio 3.26 (cifrar y descifrar en un solo programa)
// Cifrado:    cada cifra -> (cifra + 7) % 10; despues intercambiar 1a<->3a y 2a<->4a.
// Descifrado: deshacer los intercambios; despues cada cifra -> (cifra + 3) % 10.
#include <iostream>
using namespace std;

// Intercambia 1a<->3a y 2a<->4a (la misma operacion sirve para ir y para volver)
void intercambiar(int& d1, int& d2, int& d3, int& d4) {
    int temp{ d1 }; d1 = d3; d3 = temp;
    temp = d2;    d2 = d4; d4 = temp;
}

int main() {
    int opcion;
    cout << "1) Cifrar\n2) Descifrar\nElige una opcion: ";
    cin >> opcion;

    if (!cin || (opcion != 1 && opcion != 2)) {
        cout << "Opcion no valida.\n";
        return 1;
    }

    int numero;
    cout << "Entero de cuatro cifras (0000-9999): ";
    cin >> numero;

    if (!cin || numero < 0 || numero > 9999) {
        cout << "Debe ser un entero de cuatro cifras.\n";
        return 1;
    }

    // Separar las cifras
    int d1{ numero / 1000 };
    int d2{ numero / 100 % 10 };
    int d3{ numero / 10 % 10 };
    int d4{ numero % 10 };

    if (opcion == 1) {                       // CIFRAR
        d1 = (d1 + 7) % 10;
        d2 = (d2 + 7) % 10;
        d3 = (d3 + 7) % 10;
        d4 = (d4 + 7) % 10;
        intercambiar(d1, d2, d3, d4);
        cout << "Cifrado: ";
    }
    else {                                   // DESCIFRAR (pasos al reves)
        intercambiar(d1, d2, d3, d4);
        d1 = (d1 + 3) % 10;                   // 7 + 3 = 10 -> deshace la suma de 7
        d2 = (d2 + 3) % 10;
        d3 = (d3 + 3) % 10;
        d4 = (d4 + 3) % 10;
        cout << "Original: ";
    }

    cout << d1 << d2 << d3 << d4 << "\n";    // cifra a cifra para conservar ceros iniciales
}