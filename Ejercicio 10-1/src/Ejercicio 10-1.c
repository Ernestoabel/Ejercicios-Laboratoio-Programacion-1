/*
 ============================================================================
 Name        : Ejercicio 10-1
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int idDireccion;
	char calle[51];
	int altura;
	char localidad[51];
	char provincia[51];
	int codigoPostal;
}eDireccion;
typedef struct
{
	int idProvedor;
	char razonSocial[51];
	float precio;
	int idProvedoree;
	eDireccion idDireccione;//enlaza la estructura eDireccion
}eProvedor;
typedef struct
{
	int idProducto;
	char descripcion[51];
	float precio;
	eProvedor idProvedoree;//enlaza la estructura eProvedor
}eProducto;
typedef struct
{
	int idDuenio;
	char nombre[51];
	int edad;
	char sexo;
}eDuenio;
typedef struct
{
	int idRaza;
	char raza[51];
}eRaza;
typedef struct
{
	int idMascota;
	char nombre[51];
	eRaza  idRazae;//enlaza la estructura eRaza
	char sexo;
	eDuenio idDuenioe;//enlaza la estructura eDuenio
}eMascota;
typedef struct
{
	int idLocalidad;
	char descripcion[51];
	int codigoPostal;
}eLocalidad;
typedef struct
{
	int idAlumno;
	char nombre[51];
	eLocalidad idLocalidade;//enlaza la estructura eLocalidad
}eAlumno;



int main(void) {
	setbuf(stdout, NULL);


	return EXIT_SUCCESS;
}
