#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	//Variables 
    double subtotal = 0, total = 0, impuesto = 0.15, calculo_descuento = 0, calculo_impuesto = 0;
    int descuento = 0;

    //Datos de entrada

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;

    //Procesos

	calculo_descuento = (subtotal * descuento) / 100; //sacandole descuento al subtotal
	calculo_impuesto = (subtotal - calculo_descuento) * 0.15; //calculandole el impuesto al valor con descuento
    total = subtotal - calculo_descuento + calculo_impuesto; 

    //Salida

    cout << endl;
    cout << "total a pagar es: " << total;

    return 0;
}
