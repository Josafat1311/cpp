#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int nota = 0;

    //Recopilacion de datos
    cout << "Ingrese la nota que obtuvo: ";
    cin >> nota;

    //Procesos

    if (nota == 100)
    {
        cout << "Obtuviste una S (A++)";
    }
    else
        if (nota >= 95 && nota <= 99)
        {
            cout << "Obtuviste una A+";
        }
        else
            if (nota >= 90 && nota <= 94)
            {
                cout << "Obtuviste una A";
            }   
            else
                if (nota >= 85 && nota <= 89)
                {
                    cout << "Obtuviste una A-";
                } 
                else
                    if (nota >= 80 && nota <= 84)
                    {
                        cout << "Obtuviste una B+";
                    } 
                    else
                        if (nota >= 75 && nota <= 79)
                        {
                            cout << "Obtuviste una B";
                        } 
                        else
                            if (nota >= 70 && nota <= 74)
                            {
                                cout << "Obtuviste una B-";
                            } 
                            else
                                if (nota >= 65 && nota <= 69)
                                {
                                    cout << "Obtuviste una C+";
                                } 
                                else
                                    if (nota >= 60 && nota <= 64)
                                    {
                                        cout << "Obtuviste una C";
                                    } 
                                    else
                                        if (nota >= 55 && nota <= 59)
                                        {
                                            cout << "Obtuviste una C-";
                                        } 
                                        else
                                            if (nota >= 50 && nota <= 54)
                                            {
                                                cout << "Obtuviste una D+";
                                            } 
                                            else
                                                if (nota >= 45 && nota <= 49)
                                                {
                                                    cout << "Obtuviste una D";
                                                } 
                                                else
                                                    if (nota >= 40 && nota <= 44)
                                                    {
                                                        cout << "Obtuviste una D-";
                                                    } 
                                                    else
                                                        if (nota >= 35 && nota <= 39)
                                                        {
                                                            cout << "Obtuviste una E+";
                                                        } 
                                                        else
                                                            if (nota >= 30 && nota <= 34)
                                                            {
                                                                cout << "Obtuviste una E";
                                                            } 
                                                            else
                                                                if (nota >= 25 && nota <= 29)
                                                                {
                                                                    cout << "Obtuviste una E-";
                                                                } 
                                                                else
                                                                    if (nota >= 20 && nota <= 24)
                                                                    {
                                                                        cout << "Obtuviste una F+";
                                                                    } 
                                                                    else
                                                                        if (nota >= 10 && nota <= 19)
                                                                        {
                                                                            cout << "Obtuviste una F";
                                                                        } 
                                                                        else
                                                                            if (nota >= 5 && nota <= 9)
                                                                            {
                                                                                cout << "Obtuviste una F-";
                                                                            } 
                                                                            else
                                                                                if (nota >= 0 && nota <= 4)
                                                                                {
                                                                                    cout << "Obtuviste una F--";
                                                                                } 
                                                                                else
                                                                                    {
                                                                                        cout << "Ingrese una nota entre 0 y 100";
                                                                                    } 
                                                                                


    return 0;
}
