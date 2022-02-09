#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int ciclos = 0;

    //Proceso
    while (ciclos < 1000000)
    {
        cout << "*"; //Salida

        ciclos = ciclos + 1;
    }
    
    return 0;
}
