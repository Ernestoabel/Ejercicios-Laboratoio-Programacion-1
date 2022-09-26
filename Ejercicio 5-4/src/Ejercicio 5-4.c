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
    int contadorNegativos;
    int sumaImpares;
    int mayorPar;
    mayorPar=0;
    contadorNegativos=0;
    sumaImpares=0;
    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]);
        while(numeros[i]<-100||numeros[i]>100)
        {
            printf("Ingrese un numero del -100 al 100: ");
            scanf("%d",&numeros[i]);
        }
    }
    for(i=0;i<TAM;i++)
    {
        if(numeros[i]<0)
        {
              contadorNegativos++;
        }
    }
    for(i=0;i<TAM;i++)
    {
        if(numeros[i]%2!=0)
        {
              sumaImpares+=numeros[i];
        }
        else
        {
            if(mayorPar<numeros[i])
            {
                mayorPar=numeros[i];
            }
        }
    }
    if(contadorNegativos!=0)
    {
    printf("\nLa cantidad de numeros negativos es %d",contadorNegativos);
    }
    printf("\nEl mayor numero par es: %d",mayorPar);
    printf("\nLa suma de los impares es %d",sumaImpares);
    for(i=0;i<TAM;i++)
    {
        printf("\nLos numeros ingresados son: %d",numeros[i]);
    }
    for(i=0;i<TAM;i++)
    {
        if(numeros[i]>15)
        {
        printf("\nLos numeros mayores a 15 ingresados son: %d",numeros[i]);
        }
    }
    for(i=0;i<TAM;i++)
    {
        if(i%2!=0)
        {
        printf("\nLos numeros en las posiciones impares son: %d",numeros[i]);
        }
    }
    return 0;
}
