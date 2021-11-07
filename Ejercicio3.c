#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Nums[2]={0}, Basn[2]={0}, NMI=0, I=0;

    printf("Ingresar dos numeros: \n");
    scanf("%d", &Nums[1]);
    scanf("%d", &Nums[2]);

    if (Nums[1]>Nums[2])
    {
        Basn[1]=Nums[1];
        Basn[2]=Nums[2];
    }
    else
    {
        Basn[1]=Nums[2];
        Basn[2]=Nums[1];
    }

    NMI=Basn[1]-Basn[2]-1;

    int NumsI[NMI];

    for (I=Basn[1]-1; I>Basn[2]; I--)
    {
        NumsI[NMI]=I;
        printf("\n%d", NumsI[NMI]);
    }
}
