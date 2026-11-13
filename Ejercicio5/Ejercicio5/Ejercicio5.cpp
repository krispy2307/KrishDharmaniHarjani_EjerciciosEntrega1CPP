// ex04_15_pi.cpp - Ejercicio 4.15
// pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - ...
// Muestra una tabla de aproximaciones (200 000 terminos) y avisa la primera vez
// que el valor empieza por 3.14159.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int PRECISION{ 200000 };
    cout << "Accuracy set at: " << PRECISION << "\n\n";
    cout << "term" << setw(14) << "pi" << "\n";
    cout << fixed << setprecision(8);

    double pi{ 0.0 };
    int signo{ 1 };
    int primerTermino{ 0 };   // 0 = todavia no encontrado

    for (int term{ 1 }; term <= PRECISION; ++term) {
        pi += signo * 4.0 / (2 * term - 1);   // denominadores 1, 3, 5, 7, ...
        signo = -signo;                       // alterna +, -, +, -, ...

        // Empieza por 3.14159 si 3.14159 <= pi < 3.14160
        if (primerTermino == 0 && pi >= 3.14159 && pi < 3.14160) {
            primerTermino = term;
        }

        // Imprimir los 5 primeros y despues uno de cada 10 000 (si no seria una tabla de 200 000 filas)
        if (term <= 5 || term % 10000 == 0) {
            cout << setw(6) << left << term << right << setw(12) << pi << "\n";
        }
    }

    cout << "\nPrimer valor que empieza por 3.14159: con " << primerTermino << " terminos.\n";
}