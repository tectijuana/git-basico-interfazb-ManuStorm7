#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip(void);


/*CAPITULO 5 PROBABILIDAD Y ESTADISTICA
EJERCICIO 1

1.- Simular la caida de una moneda

POR MANUEL APARICIO ERNESTO GERARDO*/

//Metdo de conversion de valores

int main()
{
    //Declaracion de mis variables a utilizar
    int value, cruz = 0, cara = 0;

    srand(time(NULL));
    cout << endl << endl << "Simulacion del lanzamiento de una moneda." << endl;
    for (int n = 1; n <= 1; ++n)
    {
        value = flip();
        if (0 == value)
        {
            cout << "Cruz\n";
            ++cruz;
        }

        else
        {
            cout << "Cara" << endl;
            cara++;
        }
    }

    cout << endl << "Numero de caras: " << cara << endl;
    cout << "Numero de cruces: " << cruz << endl;

    return 0;
}
int flip(void)

{
    return rand() % 2;
}

