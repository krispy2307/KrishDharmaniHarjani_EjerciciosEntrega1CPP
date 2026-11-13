// ex03_25a_factorial.cpp - Ejercicio 3.25 a)
// Lee un entero no negativo y calcula y muestra su factorial con una instruccion while.
// Se usa cpp_int de Boost Multiprecision porque n! supera pronto lo que cabe en
// los tipos enteros fundamentales (long long ya desborda con 21!).
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
    int n;
    cout << "Introduce un entero no negativo: ";
    cin >> n;

    if (!cin || n < 0) {   // entrada no numerica o negativa
        cout << "Error: se necesita un entero no negativo.\n";
        return 1;
    }

    // n! = n * (n-1) * (n-2) * ... * 1   y   0! = 1! = 1
    cpp_int factorial{ 1 };  // valor inicial: cubre los casos n = 0 y n = 1
    int contador{ n };

    while (contador > 1) { // multiplicamos n, n-1, ..., 2 (multiplicar por 1 no cambia nada)
        factorial *= contador;
        --contador;
    }

    cout << n << "! = " << factorial << "\n";
}