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
    int numeroMaximo;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese un numero: ");
    scanf("%d", &numeroDos);

    printf("Ingrese un numero: ");
    scanf("%d", &numeroTres);

    if(numeroUno>numeroDos)
    {
        if(numeroUno>numeroTres)
        {
            numeroMaximo=numeroUno;
            printf("El numero maximo es el primero: %d",numeroMaximo);
        }
        else
        {
            numeroMaximo=numeroTres;
        }

    }

    else
    {
        if(numeroDos>numeroTres)
        {
            numeroMaximo=numeroDos;
            printf("El numero maximo es el segundo: %d",numeroMaximo);
        }
        else
        {
            numeroMaximo=numeroTres;
            printf("El numero maximo es el tercero: %d",numeroMaximo);
        }

    }


    return 0;
}
