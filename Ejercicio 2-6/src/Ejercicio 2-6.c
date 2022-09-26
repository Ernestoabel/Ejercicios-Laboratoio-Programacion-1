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
    char letra;
    int repeticion;
    char contadorLetraM=0;
    repeticion=0;

   do
   {
        printf("ingrese una letra miniscula: ");
        scanf("%c",&letra);
        if(letra=='m')
        {
            contadorLetraM++;
        }
        repeticion++;
   }while(repeticion<9);

    printf("La cantidad de veces que se ingreso la letra m es: %d",contadorLetraM);

    return 0;
}
