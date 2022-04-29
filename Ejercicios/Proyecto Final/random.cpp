#include <iostream>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include "funciones.h"
#include "colores.h"
using namespace std;

//Variables
int respuesta_Random = 0, puntaje_Random = 0; 
char mostrar_puntaje;

//Funcion del Modo Random
void modo_random()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 14);
    cout << "           --------------Historia--------------" << endl;
    cout << endl;

    
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Como se conocia la Primera Guerra Mundial antes de que estallara la segunda?" << endl;
    cout << "1) La Guerra Mundial" << endl;
    cout << "2) Guerra Fria" << endl;
    cout << "3) La Gran Guerra" << endl;
    cout << "4) La Guerra de los Balcanes" << endl;
    cout << "Respuesta: ";
    cin >> respuesta_Random;
    cout << endl;

    if (respuesta_Random == 3)
    {
        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        SetConsoleTextAttribute(hConsole, 10);
        cout << "Correcto!"  << endl;
        cout << endl;
        puntaje_Random++;
        getch();
    }
    else
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 12);
            cout << "Incorrecto"  << endl;
            cout << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "La respuesta correcta es: ";
            SetConsoleTextAttribute(hConsole, 10);
            cout << "3) La Gran Guerra";
            cout << endl;
            cout << endl;
            puntaje_Random == 0;
            getch();
        }

        SetConsoleTextAttribute(hConsole, 7);
        setlocale(LC_CTYPE, "Spanish");
        system ("cls");
        cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
        getch();

        cout << endl;
        system ("cls");
        SetConsoleTextAttribute(hConsole, 3);
        cout << "           --------------Geografia--------------" << endl;
        cout << endl;

        SetConsoleTextAttribute(hConsole, 7);
        cout << "Cual es el pais del mundo con mayor poblacion?" << endl;
        cout << "1) China" << endl;
        cout << "2) Rusia" << endl;
        cout << "3) India" << endl;
        cout << "4) Estados Unidos" << endl;
        cout << "Respuesta: ";
        cin >> respuesta_Random;
        cout << endl;

        if (respuesta_Random == 1)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje_Random++;
            getch();
        }
        else
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 12);
                cout << "Incorrecto"  << endl;
                cout << endl;
                SetConsoleTextAttribute(hConsole, 7);
                cout << "La respuesta correcta es: ";
                SetConsoleTextAttribute(hConsole, 10);
                cout << "1) China";
                cout << endl;
                cout << endl;
                puntaje_Random == 0;
                getch();
            }

            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << ROSE << "           --------------Entretenimiento--------------" << endl;
            cout << endl;

            SetConsoleTextAttribute(hConsole, 7);
            cout << "Quien interpreta a Bella en la saga 'Crepusculo' ? " << endl;
            cout << "1) Anna Kendrick" << endl;
            cout << "2) Anne Hathaway" << endl;
            cout << "3) Emma Watson" << endl;
            cout << "4) Kristen Stewart" << endl;
            cout << "Respuesta: ";
            cin >> respuesta_Random;
            cout << endl;

            if (respuesta_Random == 4)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje_Random++;
                getch();
            }
            else
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 12);
                    cout << "Incorrecto"  << endl;
                    cout << endl;
                    SetConsoleTextAttribute(hConsole, 7);
                    cout << "La respuesta correcta es: ";
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "4) Kristen Stewart";
                    cout << endl;
                    cout << endl;
                    puntaje_Random == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << ORANGE << "           --------------Deportes--------------" << endl;
                cout << endl;

                SetConsoleTextAttribute(hConsole, 7);
                cout << "Cual pertenece a las 7 maravillas del mundo moderno?" << endl;
                cout << "1) El Maracana               (Brasil)" << endl;
                cout << "2) El estadio Azteca         (Mexico)" << endl;
                cout << "3) La Bombonera              (Argentina)" << endl;
                cout << "4) El estadio Metropolitano  (Honduras)" << endl;
                cout << "Respuesta: ";
                cin >> respuesta_Random;
                cout << endl;

                if (respuesta_Random == 2)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje_Random++;
                    getch();
                }
                else
                    {
                        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                        SetConsoleTextAttribute(hConsole, 12);
                        cout << "Incorrecto"  << endl;
                        cout << endl;
                        SetConsoleTextAttribute(hConsole, 7);
                        cout << "La respuesta correcta es: ";
                        SetConsoleTextAttribute(hConsole, 10);
                        cout << "2) El estadio Azteca  (Mexico)";
                        cout << endl;
                        cout << endl;
                        puntaje_Random == 0;
                        getch();
                    }

                    SetConsoleTextAttribute(hConsole, 7);
                    setlocale(LC_CTYPE, "Spanish");
                    system ("cls");
                    cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                    getch();

                    cout << endl;
                    system ("cls");
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "           --------------Ciencias--------------" << endl;
                    cout << endl;

                    SetConsoleTextAttribute(hConsole, 7);
                    cout << "Cual de estos no pertenece a los estados de la materia?" << endl;
                    cout << "1) Solido" << endl;
                    cout << "2) Liquido" << endl;
                    cout << "3) Todos pertenecen" << endl;
                    cout << "4) Plasmatico" << endl;
                    cout << "Respuesta: ";
                    cin >> respuesta_Random;
                    cout << endl;

                    if (respuesta_Random == 3)
                    {
                        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                        SetConsoleTextAttribute(hConsole, 10);
                        cout << "Correcto!"  << endl;
                        cout << endl;
                        puntaje_Random++;
                        getch();
                    }
                    else
                        {
                            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                            SetConsoleTextAttribute(hConsole, 12);
                            cout << "Incorrecto"  << endl;
                            cout << endl;
                            SetConsoleTextAttribute(hConsole, 7);
                            cout << "La respuesta correcta es: ";
                            SetConsoleTextAttribute(hConsole, 10);
                            cout << "3) Todos pertenecen";
                            cout << endl;
                            cout << endl;
                            puntaje_Random == 0;
                            getch();
                        }

                        SetConsoleTextAttribute(hConsole, 7);
                        setlocale(LC_CTYPE, "Spanish");
                        system ("cls");
                        cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                        getch();

                        cout << endl;
                        system ("cls");
                        SetConsoleTextAttribute(hConsole, 12);
                        cout << "           --------------Artes--------------" << endl;
                        cout << endl;

                        SetConsoleTextAttribute(hConsole, 7);
                        cout << "Quien es el autor del libro 'Moby Dick'?" << endl;
                        cout << "1) Herman Melville" << endl;
                        cout << "2) Stephen King" << endl;
                        cout << "3) Edgard Allan Poe" << endl;
                        cout << "4) J.K. Rowling" << endl;
                        cout << "5) Julio Verne" << endl;
                        cout << "Respuesta: ";
                        cin >> respuesta_Random;
                        cout << endl;

                        if (respuesta_Random == 1)
                        {
                            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                            SetConsoleTextAttribute(hConsole, 10);
                            cout << "Correcto!"  << endl;
                            cout << endl;
                            puntaje_Random++;
                            getch();
                        }
                        else
                            {
                                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                                SetConsoleTextAttribute(hConsole, 12);
                                cout << "Incorrecto"  << endl;
                                cout << endl;
                                SetConsoleTextAttribute(hConsole, 7);
                                cout << "La respuesta correcta es: ";
                                SetConsoleTextAttribute(hConsole, 10);
                                cout << "1) Herman Melville";
                                cout << endl;
                                cout << endl;
                                puntaje_Random == 0;
                                getch();
                            }

                            SetConsoleTextAttribute(hConsole, 7);
                            setlocale(LC_CTYPE, "Spanish");
                            system ("cls");
                            cout << "------Presione ENTER para pasar continuar------" << endl;
                            getch();

                            system ("cls");
                            cout << "          Desea ver su puntaje final?" << endl;
                            cout << "           (Ingrese 's' para verlo)" << endl;
                            cout << "           (Ingrese 'n' para salir)" << endl;
                            cin >> mostrar_puntaje;

                            if (mostrar_puntaje == 's' || mostrar_puntaje == 'S')
                            {
                                system ("cls");
                                SetConsoleTextAttribute(hConsole, 7);

                                cout << "Tu puntaje final en el Modo Random es: " << puntaje_Random << "/6" << endl;
                                cout << endl;
                            }
                            else
                            return;
}