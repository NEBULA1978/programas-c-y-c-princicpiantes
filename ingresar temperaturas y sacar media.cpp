//#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
       int temp,cant,suma;
       float prom;
       cant = 0;
       suma = 0;
      
       cout<<"Ingrese la temperatura(-300 para terminar):";
       cin>>temp;
      
       while (temp!=-300)
       {
             cant = cant + 1;
             suma = suma + temp;
             cout<<"Ingrese la temperatura(-300 para terminar):";
             cin>>temp;  //SIEMPRE dentro del ciclo while debe haber una instrucción que    
                         // modifique la condición del mismo
       }
       prom = (float) suma/cant; // para forzar la división float
       cout<<"El promedio de temperaturas es: "<<prom;

       cin>>temp;
}
