// ex05_02.cpp - Ejercicio 5.2 (tarifas de aparcamiento)
// Tarifa: 20,00 hasta 3 horas; despues +5,00 por hora o fraccion; maximo 50,00 por 24 h.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    double charge{ 20.0 };            // tarifa minima (incluye las 3 primeras horas)

    if (hours > 3.0) {
        // ceil redondea hacia arriba: 3.1 h -> 1 hora extra, 4.0 h -> 1, 4.5 h -> 2
        charge += 5.0 * ceil(hours - 3.0);
    }

    if (charge > 50.0) {            // tope diario
        charge = 50.0;
    }

    return charge;
}

int main() {
    double hours[3];
    double charges[3];
    double totalHours{ 0.0 };
    double totalCharges{ 0.0 };

    for (int i{ 0 }; i < 3; ++i) {
        cout << "Horas del cliente " << i + 1 << ": ";
        cin >> hours[i];
        charges[i] = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nCar" << setw(10) << "Hours" << setw(10) << "Charge" << "\n";

    for (int i{ 0 }; i < 3; ++i) {
        cout << left << setw(3) << i + 1 << right
            << setw(10) << setprecision(1) << hours[i]
            << setw(10) << setprecision(2) << charges[i] << "\n";
    }

    cout << left << setw(5) << "TOTAL" << right
        << setw(8) << setprecision(1) << totalHours
        << setw(10) << setprecision(2) << totalCharges << "\n";
}