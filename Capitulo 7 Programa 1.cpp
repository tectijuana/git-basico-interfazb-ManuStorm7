#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

/*CAPITULO 7 TEORIA DE LOS NUMEROS
EJERCICIO 1

1.- Un numero primo es cualquier nmumero
    que no puede dividirse exactamente entre
    otro, excepto entre si mismo y la unidad.
    Por ejemplo 1,2,3,4,5,7,11,13,17 son
    numeros primos.
    Encontrar todos los numeros primos entre 2 y 400

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()
{
    //Declaracion de mis variables a utilizar
    int contador, n, primo;
    cout <<"Encontrar todos los numeros primos entre 2 y 400 "<<endl << endl;
    //Ciclo for empleado como metodo para calcular numeros primos entre 2 y 400
    for (n = 2; n <= 400; n++)
    {
        primo = 1;
        contador = 2;

        while (contador <= n / 2 && primo)
        {
            if (n % contador == 0)
                primo = 0;

            contador++;
        }

        if (primo)
            printf("%d ", n);
    }

    return 0;
}