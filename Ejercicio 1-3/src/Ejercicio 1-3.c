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
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroDelMedio;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese un numero: ");
    scanf("%d", &numeroDos);

    printf("Ingrese un numero: ");
    scanf("%d", &numeroTres);

    if(((numeroDos<numeroUno) && (numeroTres>numeroUno)) || ((numeroDos>numeroUno) && (numeroTres<numeroUno)))
    {
        printf("El numero del medio es el primero: %d", numeroUno);
    }
    else if(((numeroUno<numeroDos) && (numeroTres>numeroDos)) || ((numeroUno>numeroDos) && (numeroTres<numeroDos)))
    {
        printf("El numero del medio es el segundo: %d", numeroDos);
    }
    else if(numeroUno==numeroDos || numeroUno==numeroTres || numeroDos==numeroTres)
    {
        printf("No hay numero de el medio");
    }
    else
    {
        printf("El numero del medio es el tercero: %d", numeroTres);
    }

    return 0;
}
