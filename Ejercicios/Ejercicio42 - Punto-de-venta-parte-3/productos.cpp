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

            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("Capuccino", 1, 40);
                break;   
            case 2:
                agregar_producto("Expresso", 1, 30);
                break;  
            default:
                cout << "Opcion no valida";
                break;
            }

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