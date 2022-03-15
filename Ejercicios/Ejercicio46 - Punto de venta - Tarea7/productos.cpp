#include <iostream>
#include "productos.h"
#include "factura.h"
using namespace std;


void productos(int opcion)
{
    system ("cls");

    int opcion_producto = 0;

    switch (opcion)
    {
    case 1: //Case de bebidas calientes
        {
            cout << "Bebidas calientes" << endl;
            cout << "*****************" << endl;
            cout << "1 -> Capuccino" << endl;
            cout << "2 -> Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Capuccino - L 40.00", 1, 40);
                break;   
            case 2:
                agregar_producto("1 Expresso - L. 30.00", 1, 30);
                break;  
            default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }
    
    case 2: //Case de bebidas frias
        {
            cout << "Bebidas frias" << endl;
            cout << "*****************" << endl;
            cout << "1 -> Granita de cafe" << endl;
            cout << "2 -> smoothie de fresa" << endl;
            cout << "3 -> Limonada rosa" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Granita de cafe - L 85.00", 1, 85);
                break;   
            case 2:
                agregar_producto("1 Smoothie de fresa - L. 80.00", 1, 80);
                break; 
            case 3:
                agregar_producto("1 Limonada rosa - L. 70.00", 1, 70);
                break;
            default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }
    
    case 3: //Case de reposteria
        {
            cout << "Reposteria" << endl;
            cout << "*****************" << endl;
            cout << "1 -> Brownies" << endl;
            cout << "2 -> Cupcake" << endl;
            cout << "3 -> Pastel de vainilla" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Brownies - L 25.00", 1, 25);
                break;   
            case 2:
                agregar_producto("1 Cupcake - L. 25.00", 1, 25);
                break; 
            case 3:
                agregar_producto("1 Pastel de vainilla - L. 25.00", 1, 25);
                break;
            default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }
    
    default:
        break;
    }
}