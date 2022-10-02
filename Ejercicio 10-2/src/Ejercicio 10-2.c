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
#define TAMC 4
#define VACIO 1
#define OCUPADO 0

int main(void) {
	setbuf(stdout, NULL);

	eEmpleado empleados[TAM];
	eEmpleado empleado;
	eSector listaSector[TAM];
	eSector sectores[4]={
		{100,"Sistemas"},{200,"RecursosHumanos"},{300,"Administracion"},{400,"Gerencia"}
	};
	eSector sector={100,"Sistemas"};
	int posicionVacia,eleccionDos,modificar,elegirModificar,cantidadSueldosMasAltos=0,validarModificacfion;
	char eleccionUno;
	float resultado,totalSueldos;
	inicializarId(empleados,TAM);
	int id=100;
	inicializarEmpleados(empleados,TAM,VACIO);
    do{
        eleccionUno=menu("\n1.Para cargar un empleado","\n2.Para modificar un empleado",
        "\n3.Para dar de baja un empleado","\n4.Para listar","\n5.Para salir","\nElija una opcion: ");
        switch(eleccionUno){
            case '1':
                do{
                	posicionVacia=buscarEspacioLibre(empleados,TAM,VACIO,&id);
                	empleados[posicionVacia] = cargarEmpleado(OCUPADO,&id);
                	listaSector[posicionVacia] = cargarSector(sectores,TAMC);
                	empleados[posicionVacia].sector=listaSector[posicionVacia].idSector;
                	mostrarEmpleados(empleados,TAM,listaSector);
                	eleccionDos=continuarCarga("\nCargar otro empleado?", "\n9 para salir: ");
    	        }while(eleccionDos!=9);
            break;
            case '2':
                do{
                	do{
						mostrarEmpleados(empleados,TAM,listaSector);
						modificar=ingresarIdParaModificar(empleados,TAM);
						elegirModificar=subMenu("\n1.Modifique nombre","\n2.Modifique apellido","\n3.Modifique sueldo","\n4.Modifique sector","\nIngrese opcion: ");
						validarModificacfion=modificarEmpleado(empleados,elegirModificar,modificar,sectores,listaSector);
                    }while(validarModificacfion!=0);
                    eleccionDos=continuarCarga("\nModificar otro empleado?", "\n9 para salir: ");
                }while(eleccionDos!=9);
            break;
            case '3':
            	do{
            	    modificar=ingresarIdParaModificar(empleados,TAM);
            	    darDeBajaEmpleado(empleados,modificar,VACIO);
            	    eleccionDos=continuarCarga("\nDar de baja otro empleado?", "\n9 para salir: ");
            	}while(eleccionDos!=9);
            break;
            case '4':
            	do{
            	    modificar=menuListado("\n1.Para listar ordenado por Apellido y Sector",
            	    "\n2.Para listar total y promedio de los salarios,y cuantos superan el promedio",
            	    "\n3.Para saber el sector con mas empleados","\nElija una opcion: ");
            	    if(modificar==1){
            	    ordenarPorApellido(empleados,empleado,TAM,listaSector,sector);
            	    mostrarEmpleados(empleados,TAM,listaSector);
                	}
                	if(modificar==2){
                	    totalSueldos=sacarPromedioEstructuras(empleados,TAM,&resultado);
                	    printf("\nEl total de sueldos es %.2f y su promedio es %.2f",totalSueldos,resultado);
                        cantidadSueldosMasAltos=calcularEmpleadosMejorPromedio(empleados,TAM,resultado);
                	    printf("\nLa cantidad de empleados que superan el sueldo promedio son: %d\n",cantidadSueldosMasAltos);
                	}
                	if(modificar==3){
                		ordenarPorSector(empleados,empleado,TAM,listaSector,sector);
                		listarMayorSector(empleados,TAM,listaSector);
                	}
                	eleccionDos=continuarCarga("\nSalir del menu listado?", "\n9 para salir: ");
                }while(eleccionDos!=9);
            break;
            case '5':
            	eleccionUno=continuarCarga("\nDesea salir del programa?", "\n9 para salir: ");
            break;
        }
    }while(eleccionUno!=9);
	return EXIT_SUCCESS;
}
