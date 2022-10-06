/*
 ============================================================================
 Name        : Ejercicio 11-4
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

eAlumno cargarAlumno(int* validacion);
int main()
{
    eAlumno alumnos[TAM];
    int i,validacion;
    for(i=0;i<TAM;i++){
        alumnos[i]=cargarAlumno(&validacion);
        if(validacion==0){
            printf("El alumno se cargo correctamente");
        }
    }
    for(i=0;i<TAM;i++){
        printf("\nLista de Alumnos");
        printf("\n%d--%s--%d",alumnos[i].legajo,alumnos[i].nombre,alumnos[i].edad);
    }
    return 0;
}
eAlumno cargarAlumno(int* validacion){
    eAlumno alumno;
    *validacion=-1;
    if(validacion!=NULL){
        printf("\nIngrese el legajo\n");
        scanf("%d",&(alumno).legajo);
        printf("\nIngrese el nombre\n");
        scanf("%s",alumno.nombre);
        printf("\nIngrese la edad\n");
        scanf("%d",&(alumno).edad);
        *validacion=0;
    }
    return alumno;
}
