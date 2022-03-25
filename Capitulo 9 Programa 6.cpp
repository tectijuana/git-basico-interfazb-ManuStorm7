#include <iostream>
#include <cstring>
using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 6

6.- De cuantas se pueden combinar cuatros/quintos
	y centavos para dar 50cts?

POR MANUEL APARICIO ERNESTO GERARDO*/

static void Permutaciones(char* cad, int l = 0);
static void Permutaciones(char* cad, int l)
{
	char c; /* variable auxiliar para intercambio */
	int i, j; /* variables para bucles */
	int n = strlen(cad); //total de caracteres

	for (i = 0; i < n - l; i++) {
		if (n - l > 2) Permutaciones(cad, l + 1);
		else cout << cad << endl;
		/* Intercambio de posiciones */
		c = cad[l];
		cad[l] = cad[l + i + 1];
		cad[l + i + 1] = c;
		if (l + i == n - 1) {
			for (j = l; j < n; j++) cad[j] = cad[j + 1];
			cad[n] = 0;
		}
	}
}
int main(int argc, char** argv)
{
	cout << "De cuantas se pueden combinar cuatros/quintos ";

	int n = 0;
	cout << "Introduce un numero a permutar: ";
	cin >> n;
	char array[8];
	int c = 0;
	for (; n > 0; --n)
	{
		array[c++] = n + 48;
	}
	array[c] = 0;
	cout << array << endl;
	cout << "Permutaciones posibles" << endl;
	Permutaciones(array);
	return 0;
}