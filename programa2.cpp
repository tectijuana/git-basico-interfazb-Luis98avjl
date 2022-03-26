#include <iostream>
#include <iomanip>
/******************************************************************************
 Problema 2
 
 Determinar si un entero dado es divisible entre 2 y 5 

 
 Valenzuela Juarez Luis Angel
 
 @Luis98avjl
*******************************************************************************/
using namespace std;

main()
{
char w='S';
   int a;
   cout <<"Introduzca un numero para determinar si es divisible de 2 , 5 : ";
   cin >>a;
   
      if (a%2 == 0)
      {
         
         cout<<"\t \n el numero " <<a << " es divisible de 2";
       }
      if (a%5 == 0)
      {
         
         cout<<"\t \n el numero " <<a << " es divisible de 5";
       }
}