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
#include "Funciones.h"

int main()
{
	setbuf(stdout, NULL);
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int resultadoRestar1;
    int resultadoRestar2;
    printf("Ingresar un numero:");
    scanf("%d",&numero1);
     printf("Ingresar un numero:");
    scanf("%d",&numero2);
    resultadoRestar1=restar1(numero1,numero2);
    printf("El resultado es: %d\n",resultadoRestar1);
    resultadoRestar2=restar2();
    printf("El resultado es: %d\n",resultadoRestar2);
    printf("Ingresar un numero:");
    scanf("%d",&numero3);
     printf("Ingresar un numero:");
    scanf("%d",&numero4);
    restar3(numero3,numero4);
    restar4();
    return 0;
}

