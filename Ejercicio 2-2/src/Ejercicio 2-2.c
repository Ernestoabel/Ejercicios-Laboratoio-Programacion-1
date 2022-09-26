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
    float promedioNegativos;
    float promedioPositivos;
    int contadorNegativos;
    int contadorPositivos;
    int numeroNegativo;
    int numeroPositivo;
    int repeticiones;
    int carga;
    int banderaPositivo;
    int banderaNegativo;
    int numeroMayor;
    int numeroMenor;
    numero=0;
    contadorNegativos=0;
    contadorPositivos=0;
    numeroNegativo=0;
    numeroPositivo=0;


    do
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        printf("Oprima 1 para cargar un numero: ");
        scanf("%d",&carga);
        if(numero>0)
        {
            numeroPositivo=numero+numeroPositivo;
            contadorPositivos++;

            if(banderaPositivo==1)
            {
                numeroMenor=numero;
                banderaPositivo=0;
            }
            else
            {
                if(numero < numeroMenor)
                    {
                        numeroMenor=numero;
                    }
            }
        }

        else
        {
            numeroNegativo=numero+numeroNegativo;
            contadorNegativos++;

            if(banderaPositivo==1)
            {
                numeroMayor=numero;
                banderaPositivo=0;
            }
            else
            {
                if(numero > numeroMayor)
                    {
                        numeroMayor=numero;
                    }
            }
        }

        repeticiones ++;

    }while(carga == 1);

    promedioPositivos=numeroPositivo/contadorPositivos;
    promedioNegativos=numeroNegativo/contadorNegativos;

    printf("Promedio numeros positivos: %2.f\n", promedioPositivos);
    printf("El menor de los positivos es: %d\n", numeroMenor);
    printf("Promedio numeros negativos: %2.f\n", promedioNegativos);
    printf("El mayor de los negativos es: %d", numeroMayor);


    return 0;
}
