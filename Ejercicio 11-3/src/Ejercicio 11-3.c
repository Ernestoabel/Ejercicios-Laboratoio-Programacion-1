/*
 ============================================================================
 Name        : Ejercicio 11-3
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int calcularMayor(int* array,int cantidad);

int main()
{
    int numeros[6]={5,3,1,9,35,6};
    int mayor;
    mayor=calcularMayor(numeros,6);
    printf("El mayor numero es: %d",mayor);

    return 0;
}
int calcularMayor(int* array,int cantidad){
    int i,mayor=0;
    if(array!=NULL){
        for(i=0;i<cantidad;i++){
            if(*(array+i)>mayor){
                mayor=*(array+i);
            }
        }
    }
    return mayor;
}
