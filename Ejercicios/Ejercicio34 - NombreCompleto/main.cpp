#include <iostream>
using namespace std;

//Funciones
string nombre_completo(string nombre, string apellido)
{
    return nombre + " " + apellido;
}

//Nucleo
int main(int argc, char const *argv[])
{
    //Variables
    string primer_nombre = "";
    string primer_apellido = "";

    //Redcopilacion de datos
    cout << "Ingrese su primer nombre: ";
    cin >> primer_nombre;
    cout << "Ingrese su prier apellido: ";
    cin >> primer_apellido;

    //Salidas
    cout << "Nombre completo: " << nombre_completo(primer_nombre, primer_apellido);
    return 0;
}
