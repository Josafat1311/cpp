#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables 
    double subtotal = 0, total = 0, impuesto = 0.15;

    //Datos de entrada

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    //Proceso

    total = subtotal + (subtotal * 0.15); //al subtotal le multiplica el 0.15 y ese resultado es sumado al subtotal base, cuyo dato es guardado en el total

    //Salida

    cout << endl;
    cout << "total a pagar es: " << total;

    return 0;
}
