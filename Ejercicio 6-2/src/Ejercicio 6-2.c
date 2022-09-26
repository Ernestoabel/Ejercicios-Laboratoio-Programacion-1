/*
 ============================================================================
 Name        : Ejercicio 6-2
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

/******************************************************************************

Ejercicio 6-2: Realizar un programa que permita el ingreso de 10 números enteros
(positivos y negativos). Necesito generar un listado de los números positivos de
manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras
repetitivas)
[Listado 1: 4, 5, 6, 10, 18, 29]
[Listado 2 : -1,-5,-9,-12]

*******************************************************************************/
#include <stdio.h>
#define TAM 6
int main()
{
    int i,aux,j;
    int numerosUno[TAM]={4, 5, 6, 10, 18, 29};
    int numerosDos[4]={-1,-5,-9,-12};
    for(i=0;i<TAM-1;i++){
        for(j=i+1;j<TAM;j++){
            if(numerosUno[i]>numerosUno[j]){
                aux=numerosUno[i];
                numerosUno[i]=numerosUno[j];
                numerosUno[j]=aux;
            }
        }
        for(j=i+1;j<4;j++){
            if(numerosDos[i]<numerosDos[j]){
                aux=numerosDos[i];
                numerosDos[i]=numerosDos[j];
                numerosDos[j]=aux;
            }
        }
    }

    for(j=0;j<TAM;j++){
        printf("\nEl orden ascendete es:%d",numerosUno[j]);
    }
    for(j=0;j<4;j++){

       printf("\nEl orden decreciente es:%d",numerosDos[j]);
    }


    return 0;
}
