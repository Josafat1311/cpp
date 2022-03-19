#include <iostream>
#include <stdlib.h> // rand, srand
#include <time.h>
using namespace std;

//Nucleo
int main(int argc, char const *argv[])
{
    //Variables
    int numero_secreto = 0;
    int mi_numero = 0;

    //Inicializa el numero random
    srand(time(NULL));

    //Genera un numero entre 1 y 10
    numero_secreto = rand() % 10 + 1;

    do
    {
        cout << "Adivina el numero (1 a 10): ";
        cin >> mi_numero;

        if (numero_secreto < mi_numero)
        {
            cout << "El numero secreto puede ser menor" << endl;
        }
        else
        {
            if (numero_secreto > mi_numero)
            {
                cout << "El numero secreto puede ser mayor" << endl;
            }
            
        }
    } while (numero_secreto != mi_numero);
    
    cout << endl;
    cout << endl;
    cout << "Adivinaste!";
    cout << endl;
    
    return 0;
}
