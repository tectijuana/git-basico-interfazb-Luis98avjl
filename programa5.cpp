#include <stdio.h>
#include <math.h>
#include<iostream>
/******************************************************************************
Problema 5 
Escribir en un programa que determine las constantes w,x,y,z en la ecuacion WX + Y = YZ - Z e imprimir la ecuacion
Valenzuela Juarez Luis Angel
@Luis98avjl
*******************************************************************************/
using namespace std;

int main()
{
  int W,X,Y,Z;
    int ecuacion;
    cout << "Introduzca el valor de W";
    cin >> W;
    cout << "Introduzca el valor de X";
    cin >> X;
    cout << "Introduzca el valor de Y";
    cin >> Y;
    cout << "Introduzca el valor de Z";
    cin >> Z;  

    ecuacion =  X = (Y - Z - Y)/W;
    
    cout << "El resultado de la ecuacion es:" << ecuacion<<endl;
    
    return 0;

}
