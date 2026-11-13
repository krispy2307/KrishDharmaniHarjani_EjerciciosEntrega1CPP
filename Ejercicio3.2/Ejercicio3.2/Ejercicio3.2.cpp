// ex03_25b_e.cpp - Ejercicio 3.25 b)
// Estima e = 1 + 1/1! + 1/2! + 1/3! + ... con while.
// El usuario indica cuantos terminos tiene la suma (el "1" inicial cuenta como el primero).
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int terminos;
    cout << "Numero de terminos de la suma: ";
    cin >> terminos;

    long double e{ 0.0L };
    long double termino{ 1.0L };   // 1/0! = 1
    int k{ 0 };                    // indice del termino actual: 1/k!

    while (k < terminos) {
        e += termino;
        ++k;
        termino /= k;             // 1/k! = (1/(k-1)!) / k  -> evita calcular factoriales enormes
    }

    cout << setprecision(15) << fixed;
    cout << "e estimado = " << e << "\n";
    cout << "e real      = " << exp(1.0L) << "\n";
}