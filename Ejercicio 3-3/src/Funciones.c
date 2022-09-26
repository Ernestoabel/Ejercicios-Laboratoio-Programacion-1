#include <stdio.h>
#include <stdlib.h>

int FuncionParImpar(int numero,int determinar)
{
    printf("Ingresar un numero: ");
    scanf("%d",&numero);
    if(numero%2==0)
    {
        determinar=1;
    }
    else
    {
        determinar=0;
    }
    return determinar;
}
