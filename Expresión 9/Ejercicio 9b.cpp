/*
Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente
función para unos valores dados de x e y: A revisar en la otra descripción.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y;
	double resultado = 0;

	cout << "Introduzca el valor de x: \n"; cin >> x;
	cout << "Introduzda el valor de y: \n"; cin >> y;

	resultado = sqrt(x) / (pow(y, 2) - 1);

	cout.precision(7);
	cout << "El resultado es: " << resultado;

	return 0;
}

