#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 9

9.- Calcular el ingreso global por semana de una persona, dados su tasa por h,
    sueldo por hora de tiempo extraordinario, numero de horas trabajadas normales y extraordinarias.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()
{
    //Declaracion de mis variables a utilizar
    float SueldoHoraNormal;
    float SueldoHoraExtraordinario;
    float HoraNormalTrabajada;
    float HoraExtraordinarioTrabajadas;
    int SemanaTrabajadaEnDias = 6;
    //Indicaciones para el usuario
    cout << "Calcular el ingreso global por semana de una persona, dados su tasa por h," << endl;
    cout << "sueldo por hora de tiempo extraordinario, numero de horas trabajadas normales y extraordinarias." << endl;
    cout << "Tomando en cuenta que la semana laboral es de 6 dias" << endl;
    //Ingresamiento de datos
    cout << endl << "Introduce tu sueldo por hora normal: " << endl;
    cin >> SueldoHoraNormal;
    cout << "Introduce tu sueldo por hora normal extraordinario:" << endl;
    cin >> SueldoHoraExtraordinario;
    cout << endl << "Introduce tus horas normales trabajadas al dia: " << endl;
    cin >> HoraNormalTrabajada;
    cout << "Introduce tus horas extraordinarias trabajadas al dia: " << endl;
    cin >> HoraExtraordinarioTrabajadas;
    //Metodo para calcular horas
    float SueldoSemanalNormal = (SueldoHoraNormal*HoraNormalTrabajada)*SemanaTrabajadaEnDias;
    float SueldoSemanalExtraordinarias = (SueldoHoraExtraordinario * HoraExtraordinarioTrabajadas) * SemanaTrabajadaEnDias;
    float SueldoTotalMixto = SueldoSemanalNormal + SueldoSemanalExtraordinarias;
    //Imrpresiones de resultados en pantalla
    cout << "Tu sueldo por horas normales a la semana es de: $" << SueldoSemanalNormal<< endl;
    cout << "Tu sueldo por horas extraordinarias a la semana es de: $" << SueldoSemanalExtraordinarias << endl;
    cout << "Tu sueldo de ambos horarios laborales a la semana es de: $" << SueldoTotalMixto << endl;
}