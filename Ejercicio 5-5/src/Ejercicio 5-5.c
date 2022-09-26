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
#define TAM 10

int main()
{
	setbuf(stdout, NULL);
    int numeros[TAM];
    int i;
    int sumaPositivos;
    float promedio;
    int contadorPositivos;
    int menorNegativo;
    contadorPositivos=0;
    sumaPositivos=0;
    menorNegativo=0;
    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]);
        while(numeros[i]<-50||numeros[i]>75)
        {
        printf("Ingrese un numero entre -50 y 75: ");
        scanf("%d",&numeros[i]);
        }
        if(numeros[i]>0)
        {
        sumaPositivos+=numeros[i];
        contadorPositivos++;
        }
        else
        {
            if(menorNegativo>numeros[i])
            {
                menorNegativo=numeros[i];
            }
        }
    }
    promedio=sumaPositivos/contadorPositivos;
    printf("\nEl promedio de los postitivos es: %.2f",promedio);
    for(i=0;i<TAM;i++)
    {
        if(numeros[i]<0)
        {
            printf("\nLa lista de numeros negativos a partir del manor es: %d",numeros[i]);
        }
    }

    return 0;
}
