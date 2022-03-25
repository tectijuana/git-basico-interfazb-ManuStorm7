#include <iostream>

using namespace std;

/*CAPITULO 9 ADMINISTRACION
EJERCICIO 5

5.- Un cliente ordena cuatro libros, que al menudeo
    cuestan $8.95, con un descuento del 20%;
    tres discos en $3.50 con un descuento del 15%
    y un tocadiscos de $59.95, que no tiene descuento.
    Hay ademas un descuento del 2% sobre el pedido total si se paga pronto.
    Calcular el importe de la orden.

POR MANUEL APARICIO ERNESTO GERARDO*/


int main()

{
    cout << "Un cliente ordena cuatro libros, que al menudeo cuestan $8.95, con un descuento del 20 %; " << endl;
    cout << "tres discos en $3.50 con un descuento del 15% y un tocadiscos de $59.95, que no tiene descuento." << endl;
    cout << "Hay ademas un descuento del 2% sobre el pedido total si se paga pronto. Calcular el importe de la orden." << endl;

    //Declaracion de mis variables
    float libro = 8.95;
    float disco = 3.50;
    float tocadiscos = 59.95;
    float VeintePoricentoDesc = .20;
    float QuincePoricentoDesc = .15;
    float DosPoricentoDescPagoPronto = .02;
    //Procedimientos
    float DescLibros = ((4*libro)*(VeintePoricentoDesc));
    float CostoLibros = (4 * libro) - DescLibros;
    float DescDiscos = ((3 * disco) * (QuincePoricentoDesc));
    float CostoDiscos = (3 * disco) - DescDiscos;
    float CostoTotalNeto = CostoLibros+CostoDiscos+tocadiscos;
    float DescuentoDosPorcientoDelTotal = CostoTotalNeto*DosPoricentoDescPagoPronto;
    float CostoTotalConDescuento = CostoTotalNeto-DescuentoDosPorcientoDelTotal;
    //Resultados en pantalla
    cout << endl << "El costo total de todos los articulos es de: " << CostoTotalNeto << endl;
    cout << endl << "Si paga pronto se ahorra el 2% que es de: " << DescuentoDosPorcientoDelTotal << endl;
    cout << endl << "El costo total con el descuento del 2% si paga pronto es de:  " << CostoTotalConDescuento << endl;

}
