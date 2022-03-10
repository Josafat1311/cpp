#include <iostream>
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
        cout << "3 - Bebidas Calientes" << endl;
        cout << "4 - Salir" << endl;

        //Recopilacion de datos
        cin >> opcion;

        //Proceso de seleccion de opcion
        if (opcion == 0)
        {
            break;
        }
        
    }
}