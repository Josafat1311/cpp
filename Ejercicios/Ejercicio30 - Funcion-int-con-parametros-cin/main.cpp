#include <iostream>
using namespace std;

//Funciones
int sumar(int a, int b)
{
    return a + b;
}
int restar(int a, int b)
{
    return a - b;
}

//Nucleo
int main(int argc, char const *argv[])
{
    system("cls");

    //Variables
    int numero1 = 0;
    int numero2 = 0;

    //Recopilacion de datos
    cout << "Ingrese el valor de a: ";
    cin >> numero1;
    cout << "Ingrese el valor de b: ";
    cin >> numero2;
    cout << endl;

    //Recopilacion de datos
    cout << "La suma es: " << sumar(numero1, numero2);
    cout << endl;
    cout << "La resta es: " << restar(numero1, numero2);

    return 0;
}
