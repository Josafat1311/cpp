#include <iostream>
using namespace std;

//Variable
int numero_secreto = 7;

//Funcion
void adivinarNumeroSecreto(int mi_numero)
{
    if (mi_numero == numero_secreto)
    {
        cout << "Adivinaste" << endl;
    }
    else
    {
        cout << "Intento fallido con " << mi_numero << endl;
        
        int otro_numero = 0;
        cout << "Ingrese otro numero: ";
        cin >> otro_numero;

        adivinarNumeroSecreto(otro_numero);
    }
}

//Nucleo
int main(int argc, char const *argv[])
{
    adivinarNumeroSecreto(5);

    return 0;
}
