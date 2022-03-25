#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 3

3.- Una cierta compañia de fleres tiene las siguientes
    tarifas entre Boston y los Angeles:
    $75 por ton para las primeras 10 tons,
    $35 por ton arriba de 10,
    Cuanto costara el envio de los siguientes cargamentos
    de 12,36,8,100 y 1260 tons?

POR MANUEL APARICIO ERNESTO GERARDO*/

int main()

{
    cout << "Una cierta compania de fleres tiene las siguientes tarifas entre Boston y los Angeles: " << endl;
    cout << "$75 por ton para las primeras 10 tons, $35 por ton arriba de 10, " << endl;
    cout << endl<<"Cuanto costara el envio de los siguientes cargamentos de 12, 36, 8, 100 y 1260 tons ? " << endl;

    //Declaracion de mis variables
    int tonsprimeros10 = 75;
    int tonsmasde10 = 35;
    
    int cargamento1 = 12;
    int cargamento2 = 36;
    int cargamento3 = 8;
    int cargamento4 = 100;
    int cargamento5 = 1260;
    
    //Calculador de costos por flete
    int Costo1 = (cargamento1*tonsmasde10);
    cout << endl << "El costo de envio (flete) por 12 tons fue de: " << Costo1 << endl;
    int Costo2 = (cargamento2 * tonsmasde10);    
    cout << endl << "El costo de envio (flete) por 36 tons fue de: " << Costo2 << endl;
    int Costo3 = (cargamento3 * tonsprimeros10);
    cout << endl << "El costo de envio (flete) por 8 tons fue de: " << Costo3 << endl;
    int Costo4 = (cargamento4 * tonsmasde10);
    cout << endl << "El costo de envio (flete) por 100 tons fue de: " << Costo4 << endl;
    int Costo5 = (cargamento5 * tonsmasde10);
    cout << endl << "El costo de envio (flete) por 1260 tons fue de: " << Costo5 << endl;

}
