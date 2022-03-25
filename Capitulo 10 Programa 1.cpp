#include <iostream>
#include <stdlib.h>

using namespace std;

/*CAPITULO 10 DIVERSION CON LA COMPUTADORA
EJERCICIO 1

1.- Escribir un programa que simule el lanzamiento de dos dados.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()
{
    //Declaracion de mis variables
    int n1, n2;
    char res;
    //Cilo ejecuta automaticamente el calculo
    do {
        n1 = 1 + (int)((rand() / 32767.1) * 6);
        n2 = 1 + (int)((rand() / 32767.1) * 6);

        cout << "El dado uno cayo en: " << n1 << " y el dado dos en: " << n2 << endl;
        cout << "La suma de los dos dados lanzados es: " << (n1 + n2) << endl << endl;

        cout << "Desea lanzar nuevamente los dados? s/n ";
        cin >> res;

    } while (res == 's');
}