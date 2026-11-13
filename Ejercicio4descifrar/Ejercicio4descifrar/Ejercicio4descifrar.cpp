// ex03_26_descifrar.cpp - Ejercicio 3.26 (descifrado)
// Invierte el cifrado en orden contrario:
//   1) deshacer los intercambios (1a<->3a, 2a<->4a)
//   2) deshacer "+7 mod 10" -> sumar 3 mod 10   (porque 7 + 3 = 10 = 0 mod 10)
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Entero cifrado de cuatro cifras (0000-9999): ";
    cin >> numero;

    if (numero < 0 || numero > 9999) {
        cout << "Debe tener cuatro cifras.\n";
        return 1;
    }

    int d1{ numero / 1000 };
    int d2{ numero / 100 % 10 };
    int d3{ numero / 10 % 10 };
    int d4{ numero % 10 };

    // Deshacer los intercambios
    int temp{ d1 }; d1 = d3; d3 = temp;
    temp = d2;    d2 = d4; d4 = temp;

    // Deshacer la suma de 7: (c + 7) % 10 = x  =>  c = (x + 3) % 10
    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "Original: " << d1 << d2 << d3 << d4 << "\n";
}