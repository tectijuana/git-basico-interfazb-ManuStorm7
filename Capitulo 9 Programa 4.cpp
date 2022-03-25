#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 4

4.- La poblacion estudiantil en la escuela
    Tecnica de Atlanta se incrementa a razon de 8% anual.
    Si la poblacion estudiantil actual es de 2400 alumnos.
    Cuantos tendra dentro de 10 años?

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()

{
    cout << "La poblacion estudiantil en la escuela Tecnica de Atlanta se incrementa a razon de 8 % anual. " << endl;
    cout << "Si la poblacione studiantil actual es de 2400 alumnos." << endl;
    cout << endl<<"Cuantos tendra dentro de 10 años ?" << endl;

    //Declaracion de mis variables
    int PoblacionEstudiantilActual = 2400;
    int IncrementoDecada = 10;
    //Procedimientos
    int IncrementoPorciento = (PoblacionEstudiantilActual * .08);
    int IncrementoEstudiantes10Decadas = IncrementoPorciento*IncrementoDecada;
    int Resultado = PoblacionEstudiantilActual+IncrementoEstudiantes10Decadas;
    //Resultados en pantalla
    cout << endl << "El 8% de 2400 es de: " << IncrementoPorciento << endl;
    cout << endl << "El incremento de estudiantes por 10 años fue de: " << IncrementoEstudiantes10Decadas << endl;
    cout << endl << "La poblacion estudianttil en 10 años se incremento y el resultado es de:  " << Resultado << endl;

}
