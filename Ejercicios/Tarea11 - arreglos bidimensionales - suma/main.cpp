#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    //Declaracion de variables
    int suma_de_valores = 0;
    srand(time(NULL));

    //Declaramos el arreglo
    //    y  x
    int a[5][5];

    //Asignamos los valores aleatorios al arreglo
	for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            a[y][x] = rand() % 10;
        }
    }
    
    //Mostrando la matriz resultante
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << a[y][x] << "  "; //Para mostrar la matriz resultante
        }
        cout << endl;
    }

    //Sumamos los valores contenidos en el arreglo;
	for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            suma_de_valores = suma_de_valores + a[y][x];
        }
    }
	
    //Salidas
    cout << endl;
    cout << "Total suma de los valores: " << suma_de_valores << endl;

    getch();
    return 0;
}