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
#define TAM 5
int numeroMaximo(int dato[],int* datoMaximo,int cantidadElementos);
int main()
{
	setbuf(stdout, NULL);
    int i;
    int numeros[TAM];
    int numMax;
    int maximo;
    for(i=0;i<TAM;i++)
    {
        printf("ingrese un numero: ");
        fflush(stdin);
        scanf("%d",&numeros[i]);
    }
    maximo=numeroMaximo(numeros,&numMax,TAM);
    printf("\nEl numero maximo es: %d",maximo);
    return 0;
}
int numeroMaximo(int dato[],int* datoMaximo,int cantidadElementos)
{
    int i;
    *datoMaximo=0;
    if(dato!=NULL && datoMaximo != NULL && cantidadElementos > 0)
    {
        for(i=0;i<cantidadElementos;i++)
        {
            if(*datoMaximo<dato[i])
            {
                *datoMaximo=dato[i];
            }
        }
    }
    return *datoMaximo;
}
