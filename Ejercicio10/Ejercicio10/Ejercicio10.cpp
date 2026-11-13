// ex05_06.cpp - Ejercicio 5.6 (numeros aleatorios)
// Se usa <random>: uniform_int_distribution{min, max} da enteros con AMBOS extremos incluidos.
// Equivalente clasico con rand():  n = min + rand() % (max - min + 1);
#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;
	default_random_engine engine{ rd() };

	int n;

	n = uniform_int_distribution<int>{ 1, 2 }(engine);        // a) 1 <= n <= 2     (1 + rand() % 2)
	cout << "a) " << n << "\n";

	n = uniform_int_distribution<int>{ 1, 100 }(engine);      // b) 1 <= n <= 100   (1 + rand() % 100)
	cout << "b) " << n << "\n";

	n = uniform_int_distribution<int>{ 0, 9 }(engine);        // c) 0 <= n <= 9     (rand() % 10)
	cout << "c) " << n << "\n";

	n = uniform_int_distribution<int>{ 1000, 1112 }(engine);  // d) 1000..1112      (1000 + rand() % 113)
	cout << "d) " << n << "\n";

	n = uniform_int_distribution<int>{ -1, 1 }(engine);       // e) -1 <= n <= 1    (-1 + rand() % 3)
	cout << "e) " << n << "\n";

	n = uniform_int_distribution<int>{ -3, 11 }(engine);      // f) -3 <= n <= 11   (-3 + rand() % 15)
	cout << "f) " << n << "\n";
}

/*random_device da una semilla distinta en cada ejecución, y default_random_engine es el generador.
uniform_int_distribution<int>{min, max}(engine) devuelve un entero entre min y max, ambos incluidos.*/