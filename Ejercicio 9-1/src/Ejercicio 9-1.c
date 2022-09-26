/*
 ============================================================================
 Name        : Ejercicio 9-1
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 4

int main(void) {
	setbuf(stdout, NULL);
	eAlumnos listaAlumnos[TAM];
	int i;
	for(i=0;i<TAM;i++){
	    listaAlumnos[i]=cargarAlumno();
	}
	calcularPromedio(listaAlumnos,TAM);
	mostrarAlumnos(listaAlumnos,TAM);
	return EXIT_SUCCESS;
}
