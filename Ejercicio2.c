#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Nums[6]={0}, I=0, prom=0;

    printf("Ingresar cinco numeros: \n");

    for (I=1; I<=5; I++)
    {
        scanf("%d", &Nums[I]);
        Nums[0]=Nums[0]+Nums[I];
    }

    prom=Nums[0]/5;
    printf("El promedio de los numeros ingresados es %d", prom);
    return 0;
}
