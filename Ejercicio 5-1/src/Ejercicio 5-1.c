/******************************************************************************

Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	setbuf(stdout, NULL);
    int numeros[5];
    int i;
    int numerosImpares[i];
    int suma;
    suma=0;
    for(i=0;i<5;i++)
    {
    printf("ingrese un numero: ");
    fflush(stdin);
    scanf("%d",&numeros[i]);
    suma+=numeros[i];
    if(numeros[i]%2!=0)
    {
        numerosImpares[i]=numeros[i];
    }
    }
    for(i=0;i<5;i++)
    {
        if(numerosImpares[i]!=0)
        {
        printf("\nLos numeros impares son: %d",numerosImpares[i]);
        }
    }
    printf("\nLa suma es: %d",suma);

    return 0;
}
