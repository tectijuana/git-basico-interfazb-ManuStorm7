#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 7

7.- Escribir un programa que contabilice su cuenta de cheques (o la de su papa).
	Debe sumar depositos, restar cheques gurados,
	sustraer los cargos bancarios e imprimir balances mensuales.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main() {
    //Declaracion de mis variables a utilizar
    int saldoinicial = 0;
    int saldo,retirar,opcion,agregar;
    cout << "Programa contable basico" << endl;
    cout <<"1)Depositar cheques" <<endl;
    cout << "2)Restar cheques" <<endl;
    cout << "3)consultar saldo" << endl;
    cout << "4)salir" << endl;
    cout <<"opcion->" << endl;
    cin >> opcion;
    //Menu de opciones
    if (opcion == 1)
    {
        cout << "Ingrese la cantidad a depositar: "<<endl;
        cin >> agregar;
        saldo = saldoinicial + agregar;
        cout << "Cantidad disponible en cuenta es de: " << saldo << endl;
    }
    else if (opcion == 2)
    {
        cout << "Ingrese la cantidad a retirar: " << endl;
        cin >> retirar;
        if (retirar > 10000)
        {
            cout << "La cantidad digitada es mayor a mil, digite de nuevo la cantidad a retirar: " << endl;
            cin >> retirar;
        }
        saldo = saldoinicial - retirar;
        cout << "Cantidad disponible en cuenta es de: " << saldo << endl;
    }
    else if (opcion == 3)
    {
        cout << "La cantidad disponible en cuenta es de: " << saldoinicial << endl;
    }
    else
    {
        cout << "No existe esa opcion: " << endl;
    }
    cin.get();
    return 0;
}