#include <iostream>
#include <time.h>
#include "conio.h"
using namespace std;

void menu(int *opcion) {
	setlocale(LC_CTYPE, "spanish");
	cout << "\tMENÚ PRINCIPAL" << endl;
	cout << "1) Hallar el n-ésimo término" << endl;
	cout << "2) Graficar" << endl;
	cout << "3) Fin" << endl;
	cin >> *opcion;
}

int fibonacci(int n) {
	int fib = 0;
	if (n == 1 || n == 2) {
		fib = 1;
	}
	else {
		fib = fibonacci(n - 1) + fibonacci(n - 2);
	}
	return fib;
}

void graficar(int filas) {
	for (int j = 0; j < filas; ++j) 
	{
		for (int i = 0; i < filas - j - 1; ++i)
			cout << " ";
		for (int i = 0; i < j + 1; ++i)
			cout << fibonacci(i + 1) << " ";
		cout << endl;
	}
}

int main()
{
	int *opcion = new int;
	int n = 0;
	do
	{
		menu(opcion);
		switch (*opcion)
		{
		case 1:
			cout << "Ingrese n: ";
			cin >> n;
			cout << "El termino es: " << fibonacci(n) << endl;
			break;
		case 2:
			cout << "Ingrese cantidad de fila: ";
			cin >> n;
			graficar(n);
			break;
		case 3:
			exit(0);
			break;
		default:
			break;
		}

	} while (*opcion != 3);

	_getch();

	return 0;
}