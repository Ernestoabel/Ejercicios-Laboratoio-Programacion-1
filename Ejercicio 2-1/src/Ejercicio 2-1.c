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
    int numero;
    int repeticiones;
    float promedio;
    int acumulador;
    int contador;
    numero=0;
    repeticiones=0;
    acumulador=0;
    contador=0;

    do
    {
        printf("Ingrese un numero negativo: ");
        scanf("%d",&numero);
        if(numero>=0)
        {
            printf("Ingrese un numero negativo: ");
            scanf("%d",&numero);
        }
        acumulador=numero+acumulador;
        contador++;
        repeticiones ++;

    }while(repeticiones<7);

    promedio=acumulador/contador;
    printf("El promedio es :%2.f",promedio);

    return 0;
}
