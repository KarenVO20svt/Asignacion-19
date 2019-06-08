#include <iostream>
#include "conio.h"
using namespace std;

int* Determinar_area_perimetro(int lado) {
	int *r = new int[1];
	r[0] = lado + lado + lado + lado;
	r[1] = lado * lado;
	return r;
}

void main()
{
	setlocale(LC_CTYPE, "spanish");
	int lado = 0;
	do
	{
		cout << "Ingresar el lado: ";
		cin >> lado;
	} while (lado < 0);

	Determinar_area_perimetro(lado);
	cout << "El perímetro es: " << Determinar_area_perimetro(lado)[0] << endl;
	cout << "El área es: " << Determinar_area_perimetro(lado)[1] << endl;

	_getch();
}
