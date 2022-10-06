/*
 ============================================================================
 Name        : Ejercicio 11-5
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#define TAM 3
typedef struct{
    int legajo;
    char nombre[20];
    int edad;
}eAlumno;

int cargarAlumno(eAlumno* alumno);
int main()
{
    eAlumno alumnos[TAM];
    eAlumno alumno;
    int i,validacion;
    for(i=0;i<TAM;i++){
        validacion=cargarAlumno(&alumno);
        alumnos[i]=alumno;
        if(validacion==0){
            printf("El alumno se cargo correctamente\n");
        }
    }
    printf("\nLista de Alumnos");
    for(i=0;i<TAM;i++){
        printf("\n%d--%s--%d",alumnos[i].legajo,alumnos[i].nombre,alumnos[i].edad);
    }
    return 0;
}
int cargarAlumno(eAlumno* alumno){
    int retorno=-1;
    if(retorno==-1){
        printf("Ingrese el legajo\n");
        scanf("%d",&(alumno)->legajo);
        printf("Ingrese el nombre\n");
        scanf("%s",alumno->nombre);
        printf("Ingrese la edad\n");
        scanf("%d",&(alumno)->edad);
        retorno=0;
    }
    return retorno;
}
