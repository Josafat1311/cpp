#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	//Variables
	int opcion = 0;
	
	while(true)
	{
		//Recopilacion de datos
		system("cls");
		cout << "****" << endl;
		cout << "MENU" << endl;
		cout << "****" << endl;
		
		cout << endl;
		cout << "1 -> Cafe y Granitas" << endl;
		cout << "2 -> Reposteria" << endl;
		cout << "0 -> Salir" << endl;
		
		cout << "Ingrese la opcion del menu: ";
		cin >> opcion;
		
		//Procesos
		if(opcion == 1)
		{
			system("cls");
			cout << "Estas en el menu de cafe y granitas" << endl;
			system("pause");
		}
		
		if(opcion == 2)
		{
			system("cls");
			cout << "Estas en el menu de reposteria" << endl;
			system("pause");
		}
		
		if (opcion == 0)
		{
			break;
		}
	}
	
	cout << endl;
	cout << "Saliste del sistema";
	
	return 0;
}