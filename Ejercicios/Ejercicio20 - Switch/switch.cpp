#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int opcion = 0;

    //Recopilacion de datos
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    //Proceso
    switch (opcion)
    {
    case 1:
    {
        cout << "Escogiste la opcion 1" << endl;
        cout << "Segunda linea opcion 1" << endl;
        break;
    }
    case 2:
        cout << "Escogiste la opcion 2" << endl;
        break;
    case 3:
        cout << "Escogiste la opcion 3" << endl;
        break;
    default: 
        cout << "Ingrese una opcion entre 1 y 3" << endl;
        break;
    }
    return 0;
}
