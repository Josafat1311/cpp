#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int pares = 0;
    int impares = 0;
    int total = 0;

    //Procesos
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }

        if (i % 2 == 1)
        {
            impares = impares + i;
        }
        cout << i << " ";
    }
    total = pares + impares;

    cout << endl;
    cout << endl;

    //Salidas
    cout << "Suma total de pares: " << pares << endl;
    cout << "Suma total de impares: " << impares << endl;
    cout << "Total al sumar pares con impares: " << total << endl;

    return 0;
}
