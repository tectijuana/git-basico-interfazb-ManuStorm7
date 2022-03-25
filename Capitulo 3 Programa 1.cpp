#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.1416
#endif
using namespace std;

/*CAPITULO 3 GEOMETRIA
EJERCICIO 1

1.- Dados los tres lados A,B,C< de un triangulo,
    encontrar los tre angulos a,b y c. Suponer
    que todos los angulos son agudos.

POR MANUEL APARICIO ERNESTO GERARDO*/

//Metdo de conversion de valores
double conversion(double rad)
{
    return rad * 180 / MPI;
}

int main()
{
    //Declaracion de mis variables a utilizar
    double A, B, C;
    double a, b, c;
    //Impresiones en pantalla
    cout << "Ingrese los lados del triangulo agudo" << endl;

    cout << "Lado A = ";
    cin >> A;

    cout << "Lado B = ";
    cin >> B;

    cout << "Lado C = ";
    cin >> C;

    //Operacion para calcular angulo de los lados ingresados
    a = conversion(1 / (cos((B * (B)+C * (C)-A * (A)) / (2 * B * C))));
    b = conversion(1 / (cos((A * (A)+C * (C)-B * (B)) / (2 * A * C))));
    c = conversion(1 / (cos((A * (A)+B * (B)-C * (C)) / (2 * A * C))));
    //Impresion de resultados
    cout << "Resultados \n" << "Angulo a = " << a << " - Angulo b = " << b << " - Angulo C = " << c << endl;
}