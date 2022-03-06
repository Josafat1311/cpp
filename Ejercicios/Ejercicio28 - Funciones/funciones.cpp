#include <iostream>
using namespace std;

int sumar ()
{
    return 5 + 7;
}

string nombre_completo()
{
    return "Juan Perez";
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreYapellido = nombre_completo();

    cout << resultado;
    cout << endl;
    cout << nombreYapellido;

    return 0;
}
