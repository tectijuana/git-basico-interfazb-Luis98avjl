#include <iostream>
/******************************************************************************
Problema 10
Calcular el area superficial de un cilindro
Valenzuela Juarez Luis Angel
@Luis98avjl
*******************************************************************************/
using namespace std;

int main ()
{
    float pi = 3.14;
    float altura;
    float radio ;
    float superficie;

    cout<<"Ingrese la altura del cilindro:";
    cin >> altura;
    cout<<"Ingrese lel radio del cilindro:";
    cin>> radio;
    superficie = 2*pi*radio*altura;
    cout<<"El area superficial es:"<<endl<<superficie<<endl;
    return 0;
}