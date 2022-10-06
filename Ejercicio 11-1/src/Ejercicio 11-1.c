/*
 ============================================================================
 Name        : Ejercicio 11-1
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int remplazarCaracter(char* array,char original,char remplazo);

int main()
{
    char cadena[]={"Catarata Espacial"};
    int cantidad;
    cantidad=remplazarCaracter(cadena,'a','o');
    printf("%s",cadena);
    printf("\n%d",cantidad);
    return 0;
}
int remplazarCaracter(char* array,char original,char remplazo)
{
    int contador=0,i;
    if(array!=NULL){
        for(i=0;i<strlen(array);i++){
            if(*(array+i)==original){
                *(array+i)=remplazo;
                contador++;
            }
        }
    }
    return contador;
}
