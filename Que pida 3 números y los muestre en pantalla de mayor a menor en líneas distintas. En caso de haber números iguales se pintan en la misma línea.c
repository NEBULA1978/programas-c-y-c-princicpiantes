//7.      Que pida 3 n�meros y los muestre en pantalla de mayor a menor en l�neas distintas. En caso de haber n�meros iguales se pintan en la misma l�nea.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int num1,num2,num3;
           
            printf("Introduzca n�mero 1:");
    scanf("%d",&num1);

            printf("Introduzca n�mero 2:");
    scanf("%d",&num2);

            printf("Introduzca n�mero 3:");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
       if (num2>num3)
       {
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3);
       }
       else if (num3>num2)
       {
        printf("%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2);
       }
       else
       {
        printf("%d\n",num1);
        printf("%d",num3);
        printf("%d\n",num2);
       }
    }
    else if (num2>num1 && num2>num3)
    {
       if (num1>num3)
       {
        printf("%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3);
       }
       else if (num3>num1)
       {
        printf("%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1);
       }      
       else
       {
        printf("%d\n",num2);
        printf("%d",num3);
        printf("%d\n",num1);
       }
    }
    else if (num3>num1 && num3>num2)
    {
       if (num1>num2)
       {
        printf("%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2);
       }
       else if (num2>num1)
       {
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
       }
       else
       {
        printf("%d\n",num3);
        printf("%d",num2);
        printf("%d\n",num1);
       }
    }
    else
    {
        printf("%d",num1);
        printf("%d",num2);
        printf("%d",num3);
    }
   
    system("PAUSE");     
    return 0;
}


