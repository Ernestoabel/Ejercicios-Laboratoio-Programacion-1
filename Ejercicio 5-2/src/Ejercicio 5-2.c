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
#include "funciones.h"
int main()
{
	setbuf(stdout, NULL);
    int numeros[5];
    int i;
    int suma;
    suma=0;

    for(i=0;i<5;i++)
    {
    printf("ingrese un numero: ");
    fflush(stdin);
    scanf("%d",&numeros[i]);
    suma+=numeros[i];
    }
    promedioArray(suma,i);
    return 0;
}
