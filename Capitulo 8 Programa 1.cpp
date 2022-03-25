#include <cstdlib>
#include <iostream>

using namespace std;

/*CAPITULO 8 CIENCIAS, QUIMICA, FIDICA Y BOILOGIA
EJERCICIO 1

1.- Convertir un angulo en grados, minutos y
    segundos a grados en fraccion decimal.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()

{
    cout << "Conversion de angulo a grados/minutos y segundos" << endl;
    //Declaracion de mi variable angulo
    float angulo;
    cout << "Introduce el angulo: ";
    cin >> angulo;
    int entero = (int)angulo;
    float decimal = angulo - entero;
    int minutos = angulo * 60;
    int segundos = (int)((minutos) * 60);
    float fracciondecimal = (entero) / 1;

    cout << endl << "Los resultados son: ";

    printf("\nGrados  :%d", entero);
    printf("\nMinutos :%i", minutos);
    printf("\nSegundos :%i", segundos);
    printf("\nFraccion decimal :%i", fracciondecimal);


    printf("\n");
    system("PAUSE");
    return 0;
}