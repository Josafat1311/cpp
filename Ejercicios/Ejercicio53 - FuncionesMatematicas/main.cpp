#include <iostream>
#include <math.h>
#define Pi 3.1416
using namespace std;


//Nucleo
int main(int argc, char const *argv[])
{
    //Variables
    double numero = 0;
    double seno = 0, coseno = 0, tangente = 0;

    //Procesos
    numero = 2 * Pi;
    seno = sin(numero);
    coseno = cos(numero);
    tangente = tan(numero);

    //Salidas
    cout << "Numero: " << numero << endl;
    cout << "Seno: " << seno << endl;
    cout << "Coseno: " << coseno << endl;
    cout << "Tangente: " << tangente << endl;
    cout << endl;

    return 0;
}