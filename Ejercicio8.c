#include<stdio.h>
#include<stdlib.h>


int main()
{
    int R=0, I=0, Nums[3]={0};

    printf("Ingresar las repeticiones a realizar: \n");
    scanf("%d", &Nums[0]);

    Nums[2]=1;
    printf("0 ");

    for (I=1; I<=Nums[0]; I++)
        {
            Nums[3]=Nums[1]+Nums[2];
            Nums[1]=Nums[2];
            Nums[2]=Nums[3];
            printf("%d ", Nums[1]);
        }
    return 0;
}
