#include<iostream>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

void Generar(int *arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % (101 - 1);
		cout << "El numero " << i + 1 << " es: " << arr[i] << endl;
	}
}
void Graficar(int *arr, int *n) {
	for (int i = 0; i < *n; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << arr[i] << endl;
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
}
void Ordenar(int*arr, int n) {
	int aux;
	int *arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	for (int c = 0; c < n; c++)
	{
		for (int d = 0; d < n - 1; d++)
		{

			if (arr2[d] > arr2[d + 1])
			{
				aux = arr2[d + 1];
				arr2[d + 1] = arr2[d];
				arr2[d] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{

		cout << "El numero " << i + 1 << " es: " << arr2[i] << endl;
	}
}
int main() {
	int n;
	int *arr = new int[n];

	do
	{
		cout << "Numero de elementos: ";		
		cin >> n;
	} while (n < 0);

	Generar(arr, n);
	cout << endl << "Ordenado Ascendente: " << endl << endl;
	Ordenar(arr, n);
	cout << endl << "Grafico: " << endl << endl;
	Graficar(arr, &n);
	cout << endl;
	
	_getch();
}