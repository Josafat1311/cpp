#include <iostream>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include "funciones.h"
#include "colores.h"

using namespace std;

//Variables
int categoria = 0, respuesta = 0, puntaje = 0;

//Funcion de las categorias 
void preguntas_especificas()
{
    system ("cls");
    cout << "--------------MODO PREGUNTAS ESPECIFICAS--------------" << endl;
    cout << endl;
    cout << "               Seleccione una categoria" << endl;

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 12);
    cout << "1) Artes" << endl;
    SetConsoleTextAttribute(hConsole, 10);
    cout << "2) Ciencias" << endl;
    cout << ORANGE << "3) Deportes" << endl;
    cout << ROSE << "4) Entretenimiento" << endl;
    SetConsoleTextAttribute(hConsole, 3);
    cout << "5) Geografia" << endl;
    SetConsoleTextAttribute(hConsole, 14);
    cout << "6) Historia" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "7) Atras" << endl;
    cout << endl;
    cout << "Seleccion: ";
    cin >> categoria;

    switch (categoria)
    {
    case 1:
        artes();
        break;
    case 2:
        ciencias();
        break;
    case 3:
        deportes();
        break;
    case 4:
        entretenimiento();
        break;
    case 5:
        geografia();
        break;
    case 6:
        historia();
        break;
    case 7:
        menu_especificas();
        break;
    
    default:
        break;
    }      
}

void artes()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 12);
    cout << "           --------------Artes--------------" << endl;
    cout << endl;

    if (categoria == 1)
    {
        SetConsoleTextAttribute(hConsole, 7);
        cout << "En que museo se exhibe la famosa obra 'La Mona Lisa'?" << endl;
        cout << "1) Museo Vaticano" << endl;
        cout << "2) Museo del Louvre" << endl;
        cout << "3) Museo Hermitage" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 2)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "2) Museo del Louvre";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }

            
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Cual de estas no pertenece a las 7 bellas artes?" << endl;
            cout << "1) Cine" << endl;
            cout << "2) Escultura" << endl;
            cout << "3) Musica" << endl;
            cout << "4) Todas pertenecen" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 4)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "4) Todas pertenecen";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "Cual pertenece a las 7 maravillas del mundo moderno?" << endl;
                cout << "1) Chichen Itza" << endl;
                cout << "2) Torre inclinada de Pisa" << endl;
                cout << "3) Stonehenge" << endl;
                cout << "4) Ninguna pertenece" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 1)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "1) Chichen Itza";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}

void ciencias()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 10);
    cout << "           --------------Ciencias--------------" << endl;
    cout << endl;

    if (categoria == 2)
    {
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Cual es el hueso mas largo del cuerpo humano?" << endl;
        cout << "1) La tibia" << endl;
        cout << "2) La clavicula" << endl;
        cout << "3) El femur" << endl;
        cout << "4) La columna vertebral" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 3)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "3) El femur";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }

            
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Que elemento quimico esta representado como 'Au' en la tabla periodica?" << endl;
            cout << "1) Mercurio" << endl;
            cout << "2) Oro" << endl;
            cout << "3) Hierro" << endl;
            cout << "4) Ninguno es correcto" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 2)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "2) Oro";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "Quien es considerado el padre de la Teoria de la Evolucion?" << endl;
                cout << "1) Albert Einstein" << endl;
                cout << "2) Isaac Newton" << endl;
                cout << "3) Stephen Hawking" << endl;
                cout << "4) Charles Darwin" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 4)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "4) Charles Darwin";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}

void deportes()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    cout << ORANGE << "           --------------Deportes--------------" << endl;
    cout << endl;

    if (categoria == 3)
    {
        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Que equipo de futbol es conocido por el primer campeon de Honduras?" << endl;
        cout << "1) Platense" << endl;
        cout << "2) Motagua" << endl;
        cout << "3) Olimpia" << endl;
        cout << "4) Boca Juniors" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 1)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "1) Platense";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }


            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Quien es el/la atleta olimpico con mas medallas ganadas?" << endl;
            cout << "1) Larisa Latynina - Gimnasia" << endl;
            cout << "2) Paavo Nurmi     - Atletismo" << endl;
            cout << "3) Michael Phelps  - Natacion" << endl;
            cout << "4) Mark Spitz      - Natacion" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 3)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "3) Michael Phelps  - Natacion";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "De cuantos tiempos se compone un partido de Hockey?" << endl;
                cout << "1) 3 - 30min cada uno" << endl;
                cout << "2) 2 - 45min cada uno" << endl;
                cout << "3) 4 - 15min cada uno" << endl;
                cout << "4) 3 - 20min cada uno" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 4)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "4) Consta de 3 tiempos de 20 min cada uno";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}

void entretenimiento()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    cout << ROSE << "           --------------Entretenimiento--------------" << endl;
    cout << endl;

    if (categoria == 4)
    {
        HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Que actor interpreta a batman en 'The Batman'?" << endl;
        cout << "1) Michael Keaton" << endl;
        cout << "2) George Clooney" << endl;
        cout << "3) Robert Pattinson" << endl;
        cout << "4) Ben Affleck" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 3)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "3) Robert Pattinson";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }


            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Quien es la/el cantante mas reciente que ha ganado Oscar y Grammy?" << endl;
            cout << "1) Billie Eilish" << endl;
            cout << "2) Lady Gaga" << endl;
            cout << "3) Adele" << endl;
            cout << "4) Eminem" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 1)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "1) Billie Eilish";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "Como se llama el primer hijo de Goku de Dragon Ball?" << endl;
                cout << "1) Trunks" << endl;
                cout << "2) Gohan" << endl;
                cout << "3) Krilin" << endl;
                cout << "4) Goten" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 2)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "2) Gohan";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}

void geografia()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 3);
    cout << "           --------------Geografia--------------" << endl;
    cout << endl;

    if (categoria == 5)
    {
        SetConsoleTextAttribute(hConsole, 7);
        cout << "En que pais se encuentra el 'pulmon del mundo'?" << endl;
        cout << "1) En Honduras" << endl;
        cout << "2) Museo del Louvre" << endl;
        cout << "3) Museo Hermitage" << endl;
        cout << "4) En Brasil" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 4)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "4) En Brasil";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }

            
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Que pais esta compuesto por la mayor cantidad de islas?" << endl;
            cout << "1) Suecia" << endl;
            cout << "2) Noruega" << endl;
            cout << "3) Finlandia" << endl;
            cout << "4) Ninguna es correcta" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 1)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "1) Suecia";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "Que es el Monte Fuji?" << endl;
                cout << "1) Una colina" << endl;
                cout << "2) Un monte" << endl;
                cout << "3) Un volcan" << endl;
                cout << "4) Una cordillera" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 3)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "3) Un volcan";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}

void historia()
{
    setlocale(LC_CTYPE, "Spanish");
    system ("cls");

    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, 14);
    cout << "           --------------Historia--------------" << endl;
    cout << endl;

    if (categoria == 6)
    {
        SetConsoleTextAttribute(hConsole, 7);
        cout << "Cuando se dio la llegada del hombre a la Luna?" << endl;
        cout << "1) En 1969" << endl;
        cout << "2) En 1945" << endl;
        cout << "3) En 1989" << endl;
        cout << "4) En 11941" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
        cout << endl;

        if (respuesta == 1)
        {
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 10);
            cout << "Correcto!"  << endl;
            cout << endl;
            puntaje++;
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
                cout << "En 1969";
                cout << endl;
                cout << endl;
                puntaje == 0;
                getch();
            }

            
            HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
            SetConsoleTextAttribute(hConsole, 7);
            setlocale(LC_CTYPE, "Spanish");
            system ("cls");
            cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
            getch();

            cout << endl;
            system ("cls");
            cout << "Quien fue el primero en arribar a Honduras con proposito de conquista?" << endl;
            cout << "1) Cristobal Colon" << endl;
            cout << "2) Gil Gonzales Davila" << endl;
            cout << "3) Hernan Cortes" << endl;
            cout << "4) Agustin de Iturbide" << endl;
            cout << "Respuesta: ";
            cin >> respuesta;
            cout << endl;

            if (respuesta == 2)
            {
                HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                SetConsoleTextAttribute(hConsole, 10);
                cout << "Correcto!"  << endl;
                cout << endl;
                puntaje++;
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
                    cout << "2) Gil Gonzales Davila";
                    cout << endl;
                    cout << endl;
                    puntaje == 0;
                    getch();
                }

                SetConsoleTextAttribute(hConsole, 7);
                setlocale(LC_CTYPE, "Spanish");
                system ("cls");
                cout << "------Presione ENTER para pasar a la siguiente pregunta------" << endl;
                getch();

                cout << endl;
                system ("cls");
                cout << "Que imperio llego a conquistar casi toda Europa?" << endl;
                cout << "1) El imperio Frances" << endl;
                cout << "2) El imperio Mongol" << endl;
                cout << "3) El imperio Britanico" << endl;
                cout << "4) El imperio Romano" << endl;
                cout << "Respuesta: ";
                cin >> respuesta;
                cout << endl;

                if (respuesta == 4)
                {
                    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
                    SetConsoleTextAttribute(hConsole, 10);
                    cout << "Correcto!"  << endl;
                    cout << endl;
                    puntaje++;
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
                        cout << "4) El imperio Romano";
                        cout << endl;
                        cout << endl;
                        puntaje == 0;
                        getch();
                    }

        system ("cls");
        SetConsoleTextAttribute(hConsole, 7);

        cout << "Tu puntaje final en esta categoria es: " << puntaje << "/3" << endl;
        cout << endl;
    }
}