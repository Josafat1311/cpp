#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int nota = 0;

    //Recopilacion de datos
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    //Procesos
    if (nota < 0 || nota > 100)
    {
        cout << "Ingrese una nota entre 0 y 100";
        return 0;
    }

    if (nota >= 95 && nota <= 100)
    {
        cout << "Obtuviste una A!!!";
    }

    if (nota >= 85 && nota <= 94)
    {
        cout << "Obtuviste una B!!";
    }

    if (nota >= 75 && nota <= 84)
    {
        cout << "Obtuviste una C!";
    }
    
    if (nota >= 65 && nota <= 74)
    {
        cout << "Obtuviste una D";
    }

    if (nota >= 60 && nota <= 64)
    {
        cout << "Obtuviste una E";
    }

    if (nota < 60)
    {
        cout << "Obtuviste una F";
    }

    return 0;
}
