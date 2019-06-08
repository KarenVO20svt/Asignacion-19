#include <iostream>
#include<conio.h>
using namespace std;

void ImprimirArreglo(int* vec, int nele) {
	for (int i = 0;i < nele;i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

int main()
{
	int nele;
	int *vec = new int[nele];

	do {
		cout << "Ingrese la cantidad de elementos : ";
		cin >> nele;
	} while (nele <= 0);

	for (int i = 0;i < nele;i++)
	{
		vec[i] = i + 2;
	}
	cout << endl;
	cout << "Arreglo: ";
	ImprimirArreglo(vec, nele);

	for (int i = 0;i < nele;i++) {
		if (vec[i] != -1) {
			for (int j = i + 1; j < nele; j++) {
				if (vec[j] % vec[i] == 0) {
					vec[j] = -1;
				}
			}
		}
	}

	cout << endl;
	cout << "Arreglo de numeros primos: ";
	ImprimirArreglo(vec, nele);
	cout << endl;

	_getch();
	return 0;
}