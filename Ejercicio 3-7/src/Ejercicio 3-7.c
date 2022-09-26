/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	setbuf(stdout, NULL);
    int numero1;
    int numero2;
    char letra;

    printf("Ingrese s para sumar o r para restar: ");
    scanf("%c",&letra);
    printf("Ingrese un numero del 10 al 100: ");
    scanf("%d",&numero1);
    while(numero1<10||numero1>100)
    {
        printf("Ingrese un numero del 10 al 100: ");
        scanf("%d",&numero1);
    }
    printf("Ingrese un numero del 10 al 100: ");
    scanf("%d",&numero2);
    while(numero2<10||numero2>100)
    {
        printf("Ingrese un numero del 10 al 100: ");
        scanf("%d",&numero2);
    }


    if(letra=='s')
    {
        printf("El resultado de la suma es: %d",FuncionSumar(numero1,numero2));
    }
    else
    {
        if(letra=='r')
        {
            printf("El resultado de la resta es: %d",FuncionRestar(numero1,numero2));
        }
    }

    return 0;
}


