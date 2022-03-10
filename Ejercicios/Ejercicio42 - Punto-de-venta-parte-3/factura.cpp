#include <iostream>
using namespace std;

//Variables 
double subtotal;
string lista_productos;

//Funciones
void agregar_producto(string descripcion, int cantidad, double precio)
{
    lista_productos = lista_productos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}