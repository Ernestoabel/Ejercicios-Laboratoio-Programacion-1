/*
 ============================================================================
 Name        : Ejercicio 7-3
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    setbuf(stdout, NULL);
    int resultado;
    int resultadoDos;
    char texto[10];
    pedirTexto(texto);
    printf("el texto es %s",texto);
    resultado=esSoloLetra(texto);
    printf("\nLa funcion devuelve %d\n",resultado);
    resultadoDos=esLetraConEspacio(texto);
    printf("\nLa funcion devuelve %d\n",resultadoDos);

    return 0;
}
