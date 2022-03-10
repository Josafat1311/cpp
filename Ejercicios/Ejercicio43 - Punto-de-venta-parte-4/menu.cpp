#include <iostream>
using namespace std;

extern void productos(int opcion);
extern void imprimir_factura();

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