#include <iostream>
using namespace std;

//Funcion Fibonacci
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    
    return fib(n - 1) + fib(n - 2);
}

//Nucleo
int main(int argc, char const *argv[])
{
    cout << fib(9);
    cout << endl;
    cout << endl;
    
    return 0;
}