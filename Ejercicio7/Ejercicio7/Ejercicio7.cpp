// ex04_08.cpp - Ejercicio 4.8
// Producto de los enteros impares del 1 al 15: 1*3*5*7*9*11*13*15
#include <iostream>
using namespace std;

int main() {
    long long producto{ 1 };

    for (int i{ 1 }; i <= 15; i += 2) {   // i va de 2 en 2: 1, 3, 5, ..., 15
        producto *= i;
    }

    cout << "El producto de los impares del 1 al 15 es " << producto << "\n";
}