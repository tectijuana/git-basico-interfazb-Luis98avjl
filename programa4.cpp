#include <stdio.h>
#include <math.h>
#include<iostream>
/******************************************************************************
Problema 4
Determinar si la suma 3^1974 + 3^1974 + 3^1974 es igual a 3^1975  
Valenzuela Juarez Luis Angel
@Luis98avjl
*******************************************************************************/
using namespace std;

int main() 
{
    int suma;
    double numero = 3;
    double elevado = pow(numero, 1974);
    double elevado1 = pow(numero, 1976);
    
    suma = elevado + elevado + elevado;
    if (suma == elevado1)
    {
        cout << "La suma es igual" << endl;
    }
    return 0;
}
