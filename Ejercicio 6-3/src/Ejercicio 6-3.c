/*
 ============================================================================
 Name        : Ejercicio 6-3
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

/******************************************************************************

Ejercicio 6-3: Realizar un programa que permita el ingreso de datos de 15 empleados
legajo (coincidente con el índice), edad, salario, sexo (1-Femenino, 2-Masculino, 3-No
binario). Realizar carga secuencial. Calcular el sueldo promedio. Listar a los
empleados no binarios.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 15


int main()
{
    setbuf(stdout,NULL);
    int listaEdad[TAM];
    float ListaSalario[TAM];
    int listaSexo[TAM];
    int inicializarEdades;
    float inicializarSalarios;
    int inicializarSexo;
    int edad;
    float salario;
    int sexo;
    int i;
    int sumaSalarios;
    float promedio;
    sumaSalarios=0;


    inicializarEdades=inicializarParametrosEnteros(listaEdad,TAM);
    inicializarSalarios=inicializarParametrosFlotantes(ListaSalario,TAM);
    inicializarSexo=inicializarParametrosEnteros(listaSexo,TAM);

    if(inicializarEdades==0&&inicializarSalarios==0&&inicializarSexo==0){
        for(i=1;i<=TAM;i++){
            printf("Ingrese la edad: ");
            scanf("%d",&edad);
            while(edad<18||edad>65){
                printf("Ingrese la edad correcta entre 18 y 65: ");
                scanf("%d",&edad);
            }
            listaEdad[i]=edad;
            printf("Ingrese el salario: ");
            scanf("%f",&salario);
            ListaSalario[i]=salario;

            printf("Ingrese 1 para Femenino:");
            printf("\nIngrese 2 para Masculino:");
            printf("\nIngrese 3 para No binario:");
            printf("\nIngrese el sexo: ");
            scanf("%d",&sexo);
            while(sexo<1||sexo>3){
                printf("Ingrese 1 para Femenino:");
                printf("\nIngrese 2 para Masculino:");
                printf("\nIngrese 3 para No binario:");
                printf("\nIngrese el sexo: ");
                scanf("%d",&sexo);
            }
            listaSexo[i]=sexo;
            sumaSalarios+=salario;
        }
        for(i=1;i<=TAM;i++){
            if(listaSexo[i]==3){
                printf("\nEl legajo %d tiene la edad %d y un sueldo de %.2f",i,listaEdad[i],ListaSalario[i]);
            }
        }
        promedio=sumaSalarios/TAM;
        printf("\nEl promedio de los sueldos es : %.2f",promedio);
    }
    else{
        printf("Algo salio mal");
    }

    return 0;
}
