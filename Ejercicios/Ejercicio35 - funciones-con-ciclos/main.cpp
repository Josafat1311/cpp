#include <iostream>
using namespace std;

//Funciones
void imprimir_caracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }
    cout << endl;
}

//Nucleo
int main(int argc, char const *argv[])
{
    //Procesos
    imprimir_caracteres('@', 10);
    imprimir_caracteres('#', 5);
    cout << "Hola Mundo" << endl;
    imprimir_caracteres('*', 1000);
    
    return 0;
}
