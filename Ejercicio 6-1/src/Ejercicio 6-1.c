/*
 ============================================================================
 Name        : Ejercicio 6-1
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

/******************************************************************************

Ejercicio 6-1: Disponemos de dos variables numéricas (a y b). Realizar un algoritmo
que permita el intercambio de valores de dichas variables.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numUno;
    int numDos;
    int aux;
    numUno=5;
    numDos=7;
    printf("\nEl orden de los numeros es %d y %d",numUno,numDos);
    aux=numUno;
    numUno=numDos;
    numDos=aux;
    printf("\nEl orden de los numeros es %d y %d",numUno,numDos);
    return 0;
}
