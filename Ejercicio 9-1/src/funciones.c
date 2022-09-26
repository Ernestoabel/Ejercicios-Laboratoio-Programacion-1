#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nombre[30];
    int materiasAprobadas;
    float notas;
    float promedio;
}eAlumnos;
eAlumnos cargarAlumno()
{
    eAlumnos carga;
    printf("Ingrese nombre alumno \n");
	fflush(stdin);
	scanf("%s", carga.nombre);
    printf("Ingrese materias aprobadas \n");
	scanf("%d",&carga.materiasAprobadas);
    printf("Ingrese nota de la materia \n");
	scanf("%f",&carga.notas);
	return carga;
}
int mostrarAlumnos(eAlumnos mostrar[],int cantidad)
{
    int retorno = -1;
    int i;
    if(mostrar!=NULL){
        for(i=0;i<cantidad;i++)
	    {
            printf("\nEl alumno %s en la materia %d tiene nota %.2f y el promedio %.2f",mostrar[i].nombre,mostrar[i].materiasAprobadas,mostrar[i].notas,mostrar[i].promedio);
	    }
    retorno = 0;
    }
    return retorno;
}
int calcularPromedio(eAlumnos* calculo,int cantidad)
{
    int i,resultado=-1;
    if(calculo!=NULL){
        for(i=0;i<cantidad;i++){
                calculo[i].promedio=(float)calculo[i].notas/calculo[i].materiasAprobadas;
    	    }
    	resultado=0;
    }
    return resultado;
}
