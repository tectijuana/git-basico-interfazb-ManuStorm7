#include <iostream>
#ifndef MPI
#define MPI 3.1416
#endif

using namespace std;

/*CAPITULO 4 TRIGONOMETRIA 
EJERCICIO 1

1.- Pasar de grados a radianes, usando
    multiplos de 10 grados, desde 0 grados
    hasta 360 grados.

POR MANUEL APARICIO ERNESTO GERARDO*/

//Metdo de conversion de valores

int main()
{
    //Declaracion de mis variables a utilizar
    int grados = 0;

    //Ciclo for
    for (grados; grados <= 360; grados++) {

        //Condicion If
        if (grados % 10 == 0) {

            //Formula convertir grados a decimales
            cout << "Grados: " << grados << " a decimales " << (grados * MPI) / 180 << endl;
        }

    }
}