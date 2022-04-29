#include <iostream>
#include "funciones.h"
using namespace std;

//Variables
int opcion = 0, opcion_de_juego = 0;

//Funciones de desplazamiento entre menus
void menu_principal()
{
    system ("cls");
    cout << "--------------Trivia Party!--------------";
    cout << endl;
    cout << "          Seleccione una opcion" << endl;
    cout << endl;
    cout << "1) JUGAR" << endl;
    cout << "2) SALIR" << endl;
    cout << endl;
    cout << "Seleccion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        menu_jugar();
        break;
    
    default:
        break;
    }
}

void menu_jugar()
{
    system ("cls");
    cout << "--------------Bienvenido!--------------" << endl;
    cout << endl;
    cout << "          Seleccion de juego" << endl;
    cout << endl;
    cout << "1) Preguntas especificas" << endl;
    cout << "2) Modo random" << endl;
    cout << "3) Atras" << endl;
    cout << endl;
    cout << "Seleccion: ";
    cin >> opcion_de_juego;

    if (opcion_de_juego == 1)
    {
        menu_especificas();
    }
    
    if (opcion_de_juego == 2)
    {
        modo_random();
    }
    
    if (opcion_de_juego == 3)
    {
        menu_principal();
    }
    
}

void menu_especificas()
{
    system ("cls");
    cout << "--------------MODO MARATON DE PREGUNTAS ESPECIFICAS--------------" << endl;
    cout << endl;
    cout << "                     Seleccione una opcion" << endl;
    cout << endl;
    cout << "1) Seleccionar categoria" << endl;
    cout << "2) Atras" << endl;
    cout << endl;
    cout << "Seleccion: ";
    cin >> opcion_de_juego;

    if (opcion_de_juego == 1)
    {
        preguntas_especificas();
    }

    if (opcion_de_juego == 2)
    {
        menu_jugar();
    }
}

void menu_random()
{
    system ("cls");
    cout << "--------------MODO MARATON RANDOM--------------" << endl;
    cout << endl;
    cout << "             Seleccione una opcion" << endl;
    cout << endl;
    cout << "1) Jugar una ronda" << endl;
    cout << "2) Atras" << endl;
    cout << endl;
    cout << "Seleccion: ";
    cin >> opcion_de_juego;

    if (opcion_de_juego == 1)
    {
        modo_random();
    }

    if (opcion_de_juego == 2)
    {
        menu_jugar();
    }
}