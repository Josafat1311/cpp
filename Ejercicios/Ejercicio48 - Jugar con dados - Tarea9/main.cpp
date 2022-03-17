#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Nucleo
int main(int argc, char const *argv[])
{
    //Variables
    int dado1, dado2;
    char continuar;

    system("cls"); //Limpia la pantalla al ejecutarse el programa
    srand(time(NULL)); //Toma la "semilla" para generar su random 
    //basada en la función de la hora del procesador

    do
    {
        system("cls"); //Limpia la pantalla de las tiradas anteriores, solo deja la mas actual

        //Procesos de tirar los dados
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;

        //Resultados a mostrar en pantalla
        cout << "El primer dado dio: " << dado1 << endl;
        cout << "El segundo dado dio: " << dado2 << endl;
        cout << endl;

        //Para hacer otra tirada o salir del programa
        cout << " Desea hacer otra tirada de dados?" << endl;
        cout << "('s' para continuar, 'n' para salir)" << endl;
        cin >> continuar;
        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}