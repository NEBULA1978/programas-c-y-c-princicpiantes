//9.      Que sólo permita introducir los caracteres S y N.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            char c;
           
            printf("Introduzca un carácter:");
                scanf("%c",&c);
   
if (c=='s' || c=='n' ){
                        printf("Es correcto\n");
            }
            else
{
                        printf("Es incorrecto\n");
}
   
system("PAUSE");      
return 0;
}
