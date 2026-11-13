// ex03_12.cpp - Ejercicio 3.12 (copia del programa del enunciado)
// Salida esperada: 10 lineas de 10 simbolos; filas con row impar -> "<", row par -> ">"
#include <iostream>
using namespace std;

int main() {
    int row{ 10 };

    while (row >= 1) {
        int column{ 1 };

        while (column <= 10) {
            cout << (row % 2 == 1 ? "<" : ">");
            ++column;
        }

        --row;
        cout << "\n";
    }
}
