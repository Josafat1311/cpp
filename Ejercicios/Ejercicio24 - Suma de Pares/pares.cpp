#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int pares = 0;

    //Proceso
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }
        cout << i << " ";
    }
    
    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares;

    return 0;
}
