#include<stdio.h>
#include<stdlib.h>


int main()
{
    int resistencia[6]={0}, I=0;

    printf("Ingresar cinco resitencias: \n");

    for (I=1; I<=5; I++)
    {
        scanf("%d", &resistencia[I]);
        resistencia[0]=resistencia[0]+resistencia[I];
    }

    printf("La resistencia total es %d", resistencia[0]);
    return 0;
}
