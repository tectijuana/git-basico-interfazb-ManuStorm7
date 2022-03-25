#include <cstdlib>
#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 2

2.- Una casa editora suministra textos escolares.
    Ofrece descuentos en ordenes de 30 o mas
    volumenes del mismo titulo. Un cierto texto
    tiene los siguientes precios:

    abajo de 30 copias: $6.95 por libro
    treinta o mas copias: $6.00 por copia

    Calcular el costo por escuela que haya ordenado
    los siguientes pedidos

    Escuela A:35 copias     Escuela C:70 copias
    Escuela B:12 copias     Escuela D:20 copias

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()

{
    cout << "Una casa editora suministra textos escolares. Ofrece descuentos en ordenes de 30 o mas volumenes del mismo titulo.Un cierto texto tiene los siguientes precios : " << endl;
    cout << "abajo de 30 copias: $6.95 por libro, treinta o mas copias : $6.00 por copia" << endl;
    cout << endl<<"Calcular el costo por escuela que haya ordenado los siguientes pedidos " << endl;
    

    cout <<endl << "Escuela A : 35 copias" << endl;
    cout << "Escuela B : 12 copias" << endl;
    cout << "Escuela C : 70 copias" << endl;
    cout << "Escuela D : 20 copias" << endl;

        //Declaracion de mis variables
    double menoscopias = 6.95;
    double mascopias = 6.00;
    int EscuelaA = 35;
    int EscuelaB = 12;
    int EscuelaC = 70;
    int EscuelaD = 20;
    //Calculador de costos por copias
    double CostoEscA =  mascopias * EscuelaA;
    double CostoEscB = menoscopias * EscuelaB;
    double CostoEscC = mascopias * EscuelaC;
    double CostoEscD = menoscopias * EscuelaD;
    //Resultados en pantalla, llamando al metodo calculado anteriormente
    cout << endl << "El costo de la escuela A por copias fue de: " <<CostoEscA<<endl;
    cout << endl << "El costo de la escuela B por copias fue de: " << CostoEscB << endl;
    cout << endl << "El costo de la escuela C por copias fue de: " << CostoEscC << endl;
    cout << endl << "El costo de la escuela D por copias fue de: " << CostoEscD << endl;
}