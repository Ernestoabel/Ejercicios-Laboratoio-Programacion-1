/*
 ============================================================================
 Name        : Ejercicio 11-2
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarVector(char* vectorUno,char* vectorDos);

int main()
{
    char nombreCompleto[]={"Maria Elena Girotto"};
    char nombre[]={"Elena"};
    int respuesta;
    respuesta=validarVector(nombreCompleto,nombre);
    printf("\n%d",respuesta);

    return 0;
}

int validarVector(char* vectorUno,char* vectorDos){
    int i,retorno=0;
    if(vectorUno!=NULL&&vectorDos!=NULL){
        for(i=0;i<strlen(vectorUno);i++){
            if(*(vectorUno+i)==*(vectorDos+i)){
                retorno=1;
            }
        }
    }
    return retorno;
}
