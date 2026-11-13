// ex05_18.cpp - Ejercicio 5.18 (inversion de cifras)
// reverseDigits(7631) devuelve 1367.
#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int invertido{ 0 };

    while (n > 0) {
        invertido = invertido * 10 + n % 10;   // movemos lo acumulado una posicion y anadimos la ultima cifra
        n /= 10;                               // quitamos la ultima cifra
    }

    return invertido;
}

int main() {
    int n;
    cout << "Introduce un entero positivo: ";
    cin >> n;
    cout << reverseDigits(n) << "\n";
}