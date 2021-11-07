#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Vendedores[21]={0}, I=0, MayorV=0, MayorVP=0;

    printf("Ingresar el total vendido de cada vendedor: \n");

    for (I=1; I<=20; I++)
    {
        printf("Vendedor %d: \nUnidades vendidas: ", I);
        scanf("%d", &Vendedores[I]);

        Vendedores[I]=Vendedores[I]*15;
        Vendedores[0]=Vendedores[0]+Vendedores[I];

        if (Vendedores[I]>MayorV)
        {
            MayorV=Vendedores[I];
            MayorVP=I;
        }
    }

    printf("\nLas unidades totales vendidas fueron: %d.\nLa mayor venta fue de: %d unidades \ny la hizo: el vendedor %d", Vendedores[0], MayorV, MayorVP);
    return 0;
}
