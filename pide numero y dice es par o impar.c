//2.      Que pida un número y diga si es par o impar.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int i;
            printf("Introduzca número:");
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

