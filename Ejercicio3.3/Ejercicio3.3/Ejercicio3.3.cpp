// ex03_25c_exp.cpp - Ejercicio 3.25 c)
// Calcula e^x = 1 + x/1! + x^2/2! + x^3/3! + ... con while.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x;
    int terminos;
    cout << "Valor de x: ";
    cin >> x;
    cout << "Numero de terminos de la suma: ";
    cin >> terminos;

    long double resultado{ 0.0L };
    long double termino{ 1.0L };   // x^0/0! = 1
    int k{ 0 };

    while (k < terminos) {
        resultado += termino;
        ++k;
        termino *= x / k;         // x^k/k! = (x^(k-1)/(k-1)!) * x / k
    }

    cout << setprecision(12) << fixed;
    cout << "e^" << x << " estimado = " << resultado << "\n";
    cout << "e^" << x << " real     = " << exp((long double)x) << "\n";
}