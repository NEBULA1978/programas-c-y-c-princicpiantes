//8.      Que pida un n�mero y diga si es positivo o negativo.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int num1;
           
            printf("Introduzca n�mero 1:");
    scanf("%d",&num1);
   
    if (num1>0){
       printf("Es positivo\n");
    }
    else if (num1<0){
       printf("Es negativo\n");
    }   
    else
    {
        printf("Es cero\n");
    }
   
    system("PAUSE");     
    return 0;
}
