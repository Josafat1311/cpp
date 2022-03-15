#include <iostream>
#include "menu.h"
#include "productos.h"
#include "factura.h"
using namespace std;

void menu()
{
    //Variables
    int opcion = 0;

    //Procesos
    while (true)
    {
        //Informacion en pantalla
        system("cls");

        cout << "****";
        cout << "Menu";
        cout << "****";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1 - Bebidas Calientes" << endl;
        cout << "2 - Bebidas Frias" << endl;
        cout << "3 - Reposteria" << endl;
        cout << "4 - Imprimir Factura" << endl;
        cout << "0 - Salir" << endl;

        //Recopilacion de datos
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        //Proceso de seleccion de opcion
        if (opcion == 0)
        {
            break;
        }
        if (opcion == 4)
        {
            imprimir_factura();
        }
        else 
        {
            productos(opcion);
        }
        
        
    }
}