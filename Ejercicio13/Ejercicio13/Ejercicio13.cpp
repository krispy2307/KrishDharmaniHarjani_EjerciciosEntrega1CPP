// ex05_26_hanoi.cpp - Ejercicio 5.26 (Torres de Hanoi, recursivo)
#include <iostream>
using namespace std;

long long movimientos{ 0 };

// Mueve 'discos' discos desde la varilla 'origen' a la varilla 'destino' usando 'auxiliar'.
void hanoi(int discos, int origen, int destino, int auxiliar) {
    if (discos == 1) {                       // caso base: un solo disco, se mueve directo
        cout << origen << " -> " << destino << "\n";
        ++movimientos;
        return;
    }

    hanoi(discos - 1, origen, auxiliar, destino);   // a) n-1 discos de origen a auxiliar
    cout << origen << " -> " << destino << "\n";    // b) el disco mayor, de origen a destino
    ++movimientos;
    hanoi(discos - 1, auxiliar, destino, origen);   // c) n-1 discos de auxiliar a destino
}

int main() {
    int n;
    cout << "Numero de discos: ";
    cin >> n;

    hanoi(n, 1, 3, 2);   // de la varilla 1 a la 3, usando la 2 como apoyo
    cout << "Total de movimientos: " << movimientos << "\n";
}