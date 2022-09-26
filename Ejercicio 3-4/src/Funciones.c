#include <stdio.h>
#include <stdlib.h>

void funcionMostrar(int num)
{
    printf("ingrese un numero del 1 al 10: ");
    scanf("%d",&num);
    while(num<1||num>10)
    {
        printf("ingrese un numero del 1 al 10: ");
        scanf("%d",&num);
    }
    printf("El numero es: %d\n", num);
}

float FuncionFlotante(void)
{
    float numero;
    int retorno;
    printf("Ingrese un numero con decimal del 1 al 10: ");
    scanf("%f",&numero);
     while(numero<1||numero>10)
    {
        printf("ingrese un numero del 1 al 10: ");
        scanf("%f",&numero);
    }
    return numero;
}
