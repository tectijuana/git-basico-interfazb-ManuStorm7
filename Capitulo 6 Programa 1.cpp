#include <iostream>

using namespace std;
//Metodo creado para conversion a base 8
void octal(int x)
{
    if (x > 7)
    {
        octal(x / 8);
    }
    {
        cout << x % 8;
    }
}

/*CAPITULO 6 MATEMATICAS INTERMEDIAS
EJERCICIO 1

1.- Hacer que la computadora convierta numeros
    en base 10 a base 8.

POR MANUEL APARICIO ERNESTO GERARDO*/

//Metdo de conversion de valores

int main()
{
    //Declaracion de mis variables a utilizar
    int numero;
    cout <<"Conversion de base 10 a base 8: ";
    cout << endl << "Ingresa un numero: ";
    cin >> (numero);
    cout << endl << "El resultado es: ";
    octal(numero);
    return 0;
}