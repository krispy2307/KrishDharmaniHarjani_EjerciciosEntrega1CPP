// ex05_01.cpp - Ejercicio 5.1
// Valor de x tras cada instruccion. Se calculan y se muestran para comprobar el razonamiento a mano.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x;

	x = fabs(7.5);                    
	cout << "a) " << x << "\n";   //  7.5

	x = floor(7.5);                  
	cout << "b) " << x << "\n";   //  7

	x = fabs(0.0);                   
	cout << "c) " << x << "\n";   //  0

	x = ceil(0.0);                   
	cout << "d) " << x << "\n";   //  0

	x = fabs(-6.4);                  
	cout << "e) " << x << "\n";   //  6.4

	x = ceil(-6.4);                  
	cout << "f) " << x << "\n";   // -6

	x = ceil(-fabs(-8 + floor(-5.5)));
	cout << "g) " << x << "\n";  // -14

}