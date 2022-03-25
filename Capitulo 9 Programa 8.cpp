#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 8

8.- Juanita Lopez trabaja en 4 ocupaciones que le pagan un sueldo diferente por hora.
    Determinar las horas siguientes, con las razones indicadas:
    trabajo A, 12h, con $3.20 por h;
    trabajo B, 10h, con $4.10 por h;
    trabajo C, 8h, con $3.80 por h;
    trabajo D, 13h, con $2.95 por h;

POR MANUEL APARICIO ERNESTO GERARDO*/

int main() {
    //Declaracion de mis variables a utilizar
    float SueldotrabajoA = 3.20;
    float SueldotrabajoB = 4.10;
    float SueldotrabajoC = 3.90;
    float SueldotrabajoD = 2.95;
    int HorastrabajoA = 12;
    int HorastrabajoB = 10;
    int HorastrabajoC = 8;
    int HorastrabajoD = 13;

    cout << "Juanita Lopez trabaja en 4 ocupaciones que le pagan un sueldo diferente por hora." << endl;
    cout <<"Determinar las horas siguientes, con las razones indicadas: " <<endl;
    cout << endl << "trabajo A, 12h, con $3.20 por h;" <<endl;
    cout << "trabajo B, 10h, con $4.10 por h;" << endl;
    cout << "trabajo C, 8h, con $3.80 por h;" << endl;
    cout << "trabajo D, 13h, con $2.95 por h;"<< endl;

    //Operaciones para calcular las horas
    float SueldoA = SueldotrabajoA * HorastrabajoA;
    float SueldoB = SueldotrabajoB * HorastrabajoB;
    float SueldoC = SueldotrabajoC * HorastrabajoC;
    float SueldoD = SueldotrabajoD * HorastrabajoD;
    float SueldoTotalTrabajos = SueldoA + SueldoB + SueldoC + SueldoD;
    //Imrpresiones de resultados en pantalla
    cout << endl << "El sueldo del trabajo A es de: $" << SueldoA << endl;
    cout << "El sueldo del trabajo B es de: $" << SueldoB << endl;
    cout << "El sueldo del trabajo C es de: $" << SueldoC << endl;
    cout << "El sueldo del trabajo D es de: $" << SueldoD << endl;
    cout << endl << "El sueldo total de los 4 trabajos es de: $ " << SueldoTotalTrabajos << endl;
}