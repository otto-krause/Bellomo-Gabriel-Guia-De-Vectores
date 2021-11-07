#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Alumnos[30]={0}, I=0, prom=0;

    printf("Ingresar la nota de cada alumno: \n");

    for (I=1; I<=30; I++)
    {
        printf("Alumno %d: ", I);
        scanf("%d", &Alumnos[I]);
        Alumnos[0]=Alumnos[0]+Alumnos[I];
    }

    prom=Alumnos[0]/30;

    printf("\nEl promedio del curso es %d", prom);
    return 0;
}
