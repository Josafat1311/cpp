#include <iostream>
#include <math.h>
using namespace std;

//Funcion para calcular raiz cuadrada
double raiz_cuadrada(double numero)
{
    return sqrt(numero);
}

//Nucleo
int main(int argc, char const *argv[])
{
	system("cls");
	
    //Variables
    double numero = 0;

    //Recopilacion de datos
    cout << "Ingrese el numero del cual desea saber la raiz cuadrada: ";
    cin >> numero;
    cout << endl;

    //Resultados a mostrar en pantalla
    cout << "La raiz cuadrada de " << numero << " es: " << raiz_cuadrada(numero);
    cout << endl;
    cout << endl;

    return 0;
}