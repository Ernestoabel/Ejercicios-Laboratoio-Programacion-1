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
    int resultado;
    funcionMostrar(resultado);
    printf("El numero es: %f",FuncionFlotante());

    return 0;
}

