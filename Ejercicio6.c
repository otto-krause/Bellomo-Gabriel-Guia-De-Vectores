#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Sueldos[21]={0}, I=0, MenOMay[3]={0};

    printf("Ingresar los sueldos de cada persona: \n\n");

    for (I=1; I<=20; I++)
    {
        printf("Sueldo de la persona %d: \n", I);
        scanf("%d", &Sueldos[I]);

        if (Sueldos[I]>2000)
        {
            MenOMay[1]+=1;
        }
        else
        {
            if (Sueldos[I]<2000)
            {
                MenOMay[2]+=1;
            }
            else
            {
                MenOMay[3]+=1;
            }
        }
    }

    printf("La cantidad de personas que cobran mas de $2000 son: %d \nY las que cobran menos de $2000 son: %d\n(Dato extra: Los que cobran 2000 exactos son: %d)", MenOMay[1], MenOMay[2], MenOMay[3]);
    return 0;
}
