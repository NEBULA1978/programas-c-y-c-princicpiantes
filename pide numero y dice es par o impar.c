//2.      Que pida un n�mero y diga si es par o impar.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int i;
            printf("Introduzca n�mero:");
    scanf("%d",&i);

    if (i%2==0) {
       printf("Es par.");
    }
    else
    {
       printf("Es impar.");
    }

    system("PAUSE");     
    return 0;
}

