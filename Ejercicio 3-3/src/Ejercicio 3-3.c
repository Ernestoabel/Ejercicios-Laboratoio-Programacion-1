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
    int numero;
    int determinar;
    int resultado;
    resultado=FuncionParImpar(numero,determinar);
    printf("Si sale 1 es par, si sale 0 no lo es: %d",resultado);

    return 0;
}


