#include <iostream>
using namespace std;

//Variables 
double subtotal, impuesto = 0.12, total = 0;
string lista_productos;

//Funciones
void agregar_producto(string descripcion, int cantidad, double precio)
{
    lista_productos = lista_productos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * impuesto;
    total = subtotal + impuesto;
}

void imprimir_factura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << lista_productos;

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto: " << impuesto << endl;
    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;

    system("pause");
}