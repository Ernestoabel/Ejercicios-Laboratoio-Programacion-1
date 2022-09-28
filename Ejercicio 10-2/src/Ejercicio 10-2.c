/*
 ============================================================================
 Name        : Ejercicio 10-2
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "menu.h"

#define TAM 300
#define VACIO 1
#define OCUPADO 0

int main(void) {
	setbuf(stdout, NULL);

	eEmpleado empleados[TAM];
	eEmpleado empleado;
	eSector sectores[4]={{100,"Sistemas"},{200,"RecursosHumanos"},{300,"Administracion"},{400,"Gerencia"}};

	int posicionVacia,eleccionDos,modificar,elegirModificar,cantidadSueldosMasAltos=0,numero;
	char eleccionUno;
	float resultado,totalSueldos;
	inicializarId(empleados,TAM);
	int id=100,contadorSistemas=0,contadorRecursos=0,contadorAdministracion=0,contadorGerencia=0;
	inicializarEmpleados(empleados,TAM,VACIO);
    do{
        eleccionUno=menu("\n1.Para cargar un empleado","\n2.Para modificar un empleado",
        "\n3.Para dar de baja un empleado","\n4.Para listar","\n5.Para salir","\nElija una opcion: ");
        switch(eleccionUno){
            case '1':
                do{
                	posicionVacia=buscarEspacioLibre(empleados,TAM,VACIO,&id);
                	empleados[posicionVacia] = cargarEmpleado(OCUPADO,&id);
                	numero=cargarSector();
                	if(numero==0){
                        contadorSistemas++;
                    }
                    if(numero==1){
                        contadorRecursos++;
                    }
                    if(numero==2){
                        contadorAdministracion++;
                    }
                    if(numero==3){
                        contadorGerencia++;
                    }
                	empleados[posicionVacia].idSectore = sectores[numero];
                	eleccionDos=continuarCarga("\n¿Cargar otro empleado?", "\n9 para salir: ");
    	        }while(eleccionDos!=9);
            break;
            case '2':
                do{
                    modificar=ingresarIdParaModificar(empleados,TAM);
                    elegirModificar=subMenu("\n1.Modifique nombre","\n2.Modifique apellido","\n3.Modifique sueldo","\n4.Modifique sector","\nIngrese opcion: ");
                    modificarEmpleado(empleados,elegirModificar,modificar);
                    eleccionDos=continuarCarga("\n¿Modificar otro empleado?", "\n9 para salir: ");
                }while(eleccionDos!=9);
            break;
            case '3':
            	do{
            	    modificar=ingresarIdParaModificar(empleados,TAM);
            	    darDeBajaEmpleado(empleados,modificar,VACIO);
            	    eleccionDos=continuarCarga("\n¿Dar de baja otro empleado?", "\n9 para salir: ");
            	}while(eleccionDos!=9);
            break;
            case '4':
            	do{
            	    modificar=menuListado("\n1.Para listar ordenado por Apellido y Sector",
            	    "\n2.Para listar total y promedio de los salarios,y cuantos superan el promedio",
            	    "\n3.Para saber el sector con mas empleados","\nElija una opcion: ");
            	    if(modificar==1){
            	    ordenarPorApellido(empleados,empleado,TAM);
            	    //ordenarPorSector(empleados,empleado,TAM);
            	    mostrarEmpleados(empleados,TAM);
                	}
                	if(modificar==2){
                	    totalSueldos=sacarPromedioEstructuras(empleados,TAM,&resultado);
                	    printf("\nEl total de sueldos es %.2f y su promedio es %.2f",totalSueldos,resultado);
                        cantidadSueldosMasAltos=calcularEmpleadosMejorPromedio(empleados,TAM,resultado);
                	    printf("\nLa cantidad de empleados que superan el sueldo promedio son: %d\n",cantidadSueldosMasAltos);
                	}
                	if(modificar==3){
                	    printf("%d-%d-%d-%d",contadorSistemas,contadorRecursos,contadorAdministracion,contadorGerencia);
                	    sectorMasEmpleados(empleados,TAM,contadorSistemas,contadorRecursos,contadorAdministracion,contadorGerencia);
                	}
                	eleccionDos=continuarCarga("\n¿Salir del menu listado?", "\n9 para salir: ");
                }while(eleccionDos!=9);
            break;
            case '5':
            	eleccionUno=continuarCarga("\n¿Desea salir del programa?", "\n9 para salir: ");
            break;
        }
    }while(eleccionUno!=9);
	return EXIT_SUCCESS;
}
