// ex05_21.cpp - Ejercicio 5.21 (lanzamiento de una moneda)
// flip() no recibe argumentos y devuelve 0 (cruz / Tails) o 1 (cara / Heads).
#include <iostream>
#include <random>
using namespace std;

int flip() {
    static default_random_engine engine{ random_device{}() };   // static: se crea una sola vez
    static uniform_int_distribution<int> moneda{ 0, 1 };
    return moneda(engine);
}

int main() {
    int heads{ 0 };
    int tails{ 0 };

    for (int i{ 1 }; i <= 100; ++i) {
        if (flip() == 1) {
            cout << "Heads\n";
            ++heads;
        }
        else {
            cout << "Tails\n";
            ++tails;
        }
    }

    cout << "\nHeads: " << heads << "\nTails: " << tails << "\n";
}