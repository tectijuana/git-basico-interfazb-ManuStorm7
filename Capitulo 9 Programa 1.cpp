#include <cstdlib>
#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 1

1.- Sara Mendez vende biblias a razon de
    $3.00 cada una, mas $0.65 por estampillas
    postales y manejo. Calcular sus ingresos
    de dos semanas en las que vendio 16 biblias.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()

{
    cout << "Sara Mendez vende biblias a razon de $3.00 cada una, mas $0.65 \n por estampillas postales y manejo. \nCalcular sus ingresos de dos semanas en las que vendio 16 biblias." << endl;
    //Declaracion de mi variables
    double biblia = 3.00;
    double estampilla = 0.65;

    double CalIngresos = (biblia + estampilla) * 16;

    cout <<endl<< "El resultado de vender 16 biblias en dos semanas fue de: " <<CalIngresos;
}