// ex04_06.cpp - Ejercicio 4.6 (copia del programa del enunciado)
// El bucle externo repite 10 veces; el interno imprime 5 '@' seguidos y luego un salto de linea.
// Resultado: un rectangulo de 10 filas x 5 columnas de '@'.
#include <iostream>
using namespace std;

int main() {
    for (int i{ 1 }; i <= 10; i++) {
        for (int j{ 1 }; j <= 5; j++) {
            cout << '@';
        }

        cout << '\n';
    }
}