#include <iostream>
/******************************************************************************
Problema 9
Introducir los enteros positivos A y B y determinar el
cociente y el residuo cuando A se divide entre B
Valenzuela Juarez Luis Angel
@Luis98avjl
*******************************************************************************/
using namespace std;

int main()
{
    unsigned a,b;
    double resultado;
    cout << " Ingrese el valor del numerador: ";
    cin>>a;
    cout <<"Ingrese el valor del denominador:";
    resultado = double(a) / double(b);
    cout << "\n A / B: " << resultado;
    resultado = a%b;
    cout << "\n A mod B: " << resultado << "\n";
    return 0 ;
}
