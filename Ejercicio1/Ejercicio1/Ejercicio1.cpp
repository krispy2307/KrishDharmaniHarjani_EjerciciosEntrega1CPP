// ex03_11.cpp - Ejercicio 3.11 (copia del programa del enunciado)
// Salida esperada: 10 lineas que alternan "****" (count impar) y "+++++++++" (count par)
#include <iostream>
using namespace std;

int main() {
    int count{ 1 };

    while (count <= 10) {
        cout << (count % 2 == 1 ? "****" : "+++++++++") << "\n";
        ++count;
    }
}
