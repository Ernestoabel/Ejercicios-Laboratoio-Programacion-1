#include <stdio.h>
#include <stdlib.h>

int restar1(int num1, int num2)
{
    int total;
    total=num1-num2;
    return total;
}

int restar2(void)
{
    int numero1;
    int numero2;
    int total;
    printf("Ingresar un numero:");
    scanf("%d",&numero1);
     printf("Ingresar un numero:");
    scanf("%d",&numero2);
    total=numero1-numero2;
    return total;
}

void restar3(int num3, int num4)
{
    int resultadoRestar3;
    resultadoRestar3=num3-num4;
    printf("El resultado es: %d\n", resultadoRestar3);
}

void restar4()
{
    int numero1;
    int numero2;
    int resultadoRestar4;
    printf("Ingresar un numero:");
    scanf("%d",&numero1);
     printf("Ingresar un numero:");
    scanf("%d",&numero2);
    resultadoRestar4=numero1-numero2;
    printf("El resultado es: %d", resultadoRestar4);
}
