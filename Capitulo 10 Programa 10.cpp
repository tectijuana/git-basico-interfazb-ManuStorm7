#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 10

10.- Suponer que la retencion de impuestos de un salario
     semanal se calcula de la manera siguiente: 15% de la
     diferiencia entre el salario total de un empleado y
     $10 multiplicado por el numero de personas que el sostiene.

     Introducir los valores del sueldo total de un empleado
     y el numero de personas que de el dependen: imprimir
     el impuesto que se retiene por empleado.

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()
{
    //Declaracion de mis variables a utilizar
    float NoEmpleados;
    float SueldoSemanalEmpleado;
    float SegundoImpuesto = 10;
    float ImpuestoRetenido = 0.15;
    
    //Indicaciones para el usuario
    cout << "Suponer que la retencion de impuestos de un salario semanal se calcula de la manera siguiente: " << endl;
    cout << "15 % de la diferiencia entre el salario total de un empleado " << endl;
    cout << "y $10 multiplicado por el numero de personas que el sostiene." << endl;
    cout << endl << "Introducir los valores del sueldo total de un empleado y el numero de personas que de el dependen. " << endl;
    cout << "Imprimir el impuesto que se retiene por empleado: " << endl;
    //Introducion de datos para el usuario
    cout << "Introduce cuantos empleados tienes: ";
    cin >> NoEmpleados;
    cout << "Introduce cual es el sueldo semanal de tus empleados: ";
    cin >> SueldoSemanalEmpleado;

    //Metodo para calcular horas y impresion de resultados en pantalla
    float SalarioSemanalRetenido = SueldoSemanalEmpleado * ImpuestoRetenido;
    cout << endl <<"La retencion de impuestos de un salario semanal (15%) es de: $" << SalarioSemanalRetenido << endl;
    float MultiplicadoPersonasSostiene = NoEmpleados * SegundoImpuesto;
    cout << "La multiplicacion por el numero de personas que el sostienes es de: $" << MultiplicadoPersonasSostiene << endl;
    float ImpuestoRetenidoPorEmpleado = SalarioSemanalRetenido + MultiplicadoPersonasSostiene;
    cout << "El impuesto que se retiene por empleado es de: $" << ImpuestoRetenidoPorEmpleado << endl;
}