#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
	int a = 0;
	int b = 0;
	int resultado_suma = 0;
    int resultado_resta = 0;
    int resultado_multiplicacion = 0;
    int resultado_division = 0;

    //Datos de entrada 
    cout << "Ingrese en 'a' el numero de menor valor" << endl;
    cout << "Ingres el valor de a: ";
	cin >> a;
	
	cout << endl;
	
    cout << "Ingrese en 'b' un numero mayor que el ingresado en 'a'" << endl;
	cout << "Ingrese el valor de b: ";
	cin >> b;

    //Procesos
	resultado_suma = a + b;
    resultado_resta = b - a; 
    resultado_multiplicacion = a * b;
    resultado_division = b / a;

    //Salidas
	cout << endl;
	cout << "la suma de a+b es: " << resultado_suma << endl;
    cout << "la suma de a-b es: " << resultado_resta << endl;
    cout << "la suma de a*b es: " << resultado_multiplicacion << endl;
    cout << "la suma de a/b es: " << resultado_division << endl;

    return 0;
}