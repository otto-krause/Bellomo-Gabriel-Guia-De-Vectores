#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Notas[16]={0}, I=0;

    printf("Ingresar la nota de los alumnos: \n");

    for (I=1; I<=15; I++)
    {
        printf("Alumno %d:\n", I);
        scanf("%d", &Notas[I]);
    }

    printf("Los alumnos con nota igual/mayor a ocho son el:\n");

    for (I=1; I<=15; I++)
    {
        if (Notas[I]>=8)
        {
            printf("Alumno %d\n", I);
        }
    }
    return 0;
}
