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
    float numero1;
    printf("Ingrese un valor del 10 al 100: ");
    scanf("%f",&numero1);
    while(numero1<10||numero1>100)
    {
        printf("Ingrese un valor del 10 al 100: ");
        scanf("%f",&numero1);
    }

    realizarDescuento(numero1);

    return 0;
}

