#include <iostream>
using namespace std;

extern void agregar_producto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system ("cls");

    int opcion_producto = 0;

    switch (opcion)
    {
    case 1:
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
    
    case 2:
        {
            cout << "Bebidas frias" << endl;
            cout << "*****************" << endl;
            system("pause");
            break;
        }
    
    case 3:
        {
            cout << "Reposteria" << endl;
            cout << "*****************" << endl;
            system("pause");
            break;
        }
    
    default:
        break;
    }
}