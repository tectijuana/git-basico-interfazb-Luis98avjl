#include <stdio.h>
#include <math.h> 
#include<iostream>

/******************************************************************************
 Problema 6
 
Calcular z de acuerdo ocn la formula siguiente.
Asignar las variblaes numericas aprobadas. Sean a = 4, b = 6, x = 8, y = 2, y c = 5
cuando corra su programa.
z = (a+b)^3-(x+y)^2(a-c)^4+(1/2(c+x))

Valenzuela Juarez Luis Angel
@Luis98avjl
*******************************************************************************/
using namespace std;

int main()
{
    int ecuacion;
    int a = 4, b = 6, x = 8, y = 2, c = 5;
    ecuacion =0;
    ecuacion = pow(a+b,3)-pow(x+y,2)*pow(a-c,4)+(1/2(c+x));
    cout << ecuacion;

 return 0;
 
}