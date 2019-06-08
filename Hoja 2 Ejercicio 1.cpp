#include<iostream>
#include<conio.h>
#include<time.h>
#include<cstdlib>
using namespace std;

void Generar(int *arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 5 + rand() % (31 - 5);
		cout << "El perno " << i + 1 << " tiene " << arr[i] << " de diametro" << endl;
	}
}
void Ordenar_Descendiente(int *arr, int n) {
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "El perno " << i + 1 << " tiene: " << arr[i] << " de diametro" << endl;
	}
}
void Promedio(int *arr, int n) {
	double suma = 0;
	double prom;
	for (int i = 0; i < n; i++)
	{
		suma += arr[i];
	}
	prom = suma / n;
	cout << "El diametro promedio es: " << prom << endl;
}
void DE1(int *arr, int n, int DE) {
	int cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (DE > arr[i])
		{
			cont++;
		}
	}
	if (cont > (n / 2))
	{
		cout << "Lote defectuoso" << endl;
	}
	else
	{
		cout << cont << " pernos tienen un diametro inferior a " << DE << endl;
	}
}
int main() {
	int n;
	int *arr = new int[n];
	int DE;
	do
	{
		cout << "Ingrese N: ";
		cin >> n;
	} while (n <= 0);
	cout << endl;
	cout << "Arreglo original: " << endl << endl;
	Generar(arr, n);
	cout << endl;
	cout << "Arreglo ordenado: " << endl;
	Ordenar_Descendiente(arr, n);
	cout << endl;
	Promedio(arr, n);
	cout << endl;
	do
	{
		cout << "Ingrese el diametro DE: ";
		cin >> DE;
	} while (DE <= 0);

	cout << endl;
	DE1(arr, n, DE);
	cout << endl;
	
	_getch();
}