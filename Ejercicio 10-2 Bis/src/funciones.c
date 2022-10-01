#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	int idSector;
	char descripcionSector[51];
}eSector;
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}eEmpleado;
int inicializarEmpleados(eEmpleado* empleados,int cantidad,int estado)
{
	int retorno=-1,i;
	if(empleados != NULL && cantidad > 0 ){
		for(i = 0; i<cantidad; i++){
			empleados[i].isEmpty = estado;
		}
		retorno = 0;
	}

	return retorno;
}
int inicializarId(eEmpleado* empleados,int cantidad)
{
	int retorno=-1,i;
	if(empleados != NULL && cantidad > 0 ){
		for(i = 0; i<cantidad; i++){
			empleados[i].id = 0;
		}
		retorno = 0;
	}

	return retorno;
}
eEmpleado cargarEmpleado(int estado, int* id)
{
    eEmpleado carga;
	if(id != NULL){
		printf("Ingrese nombre empleado \n");
		fflush(stdin);
		scanf("%s", carga.name);
		printf("Ingrese apellido empleado \n");
		fflush(stdin);
		scanf("%s", carga.lastName);
		printf("Ingrese salario empleado \n");
		scanf("%f",&carga.salary);
		carga.id = *id;
		(*id)++;
		carga.isEmpty = estado;
	}
	return carga;
}
eSector cargarSector(eSector* sectores,int cantidad)
{
	eSector carga;
	int i,auxiliar,repeticion=-1;

    do{
    	printf("Ingrese numero de id del sector \n");
    	scanf("%d",&auxiliar);
		for(i=0;i<cantidad;i++){
			if(auxiliar==sectores[i].idSector){
				carga.idSector=sectores[i].idSector;
				strcpy(carga.descripcionSector,sectores[i].descripcionSector);
				repeticion=0;
			}
		}
    }while(repeticion!=0);

    return carga;
}
int buscarEspacioLibre(eEmpleado* empleados,int cantidad, int estado, int* id)
{
    int retorno=-1;
    int i;
    if(empleados!=NULL&&id!=NULL)
    {
    	for(i=0;i<cantidad;i++){
    		if(empleados[i].isEmpty==estado){
    			retorno = i;
    			break;
    		}
        }
    }
    return retorno;
}
int ingresarIdParaModificar(eEmpleado* empleados,int cantidad)
{
    int modificar,i,retorno=-1,entro=0;
    if(empleados!=NULL){
        do{
        	printf("\nIngrese id a modificar: ");
            scanf("%d",&modificar);
            for(i=0;i<cantidad;i++){
                if(empleados[i].isEmpty==0){
                    if(empleados[i].id==modificar){
                        modificar=i;
                        return modificar;
                        entro=1;
                        break;
                    }
                }
            }
            printf("\nEl numero de id no corresponde a un empleado\n");
        }while(entro!=1);
        retorno=0;
    }
    return retorno;
}
int mostrarEmpleados(eEmpleado* empleados,int cantidadUno,eSector* sectores)
{
    int retorno=-1;
    int i;
    if(empleados!=NULL)
    {
        for(i=0;i<cantidadUno;i++)
        {
            if(empleados[i].isEmpty==0)
            {
                printf("\n%d--%s--%s--%.2f--%s",empleados[i].id,empleados[i].name,empleados[i].lastName,empleados[i].salary,sectores[i].descripcionSector);
            }
        }
        retorno=0;
    }
    return retorno;
}
int modificarEmpleado(eEmpleado* modificar, int opcion,int posicion)
{
    int retorno = -1;
	if(modificar != NULL){
	    if(opcion==1){
    		printf("Ingrese nombre empleado \n");
    		fflush(stdin);
    		scanf("%s", modificar[posicion].name);
	    }
	    if(opcion==2){
    		printf("Ingrese apellido empleado \n");
    		fflush(stdin);
    		scanf("%s", modificar[posicion].lastName);
	    }
	    if(opcion==3){
    		printf("Ingrese salario empleado \n");
    		scanf("%f",&modificar[posicion].salary);
	    }

		retorno = 0;
	}
	return retorno;
}
int darDeBajaEmpleado(eEmpleado* modificar,int posicion,int estado)
{
    int retorno = -1;
    int baja;
	if(modificar != NULL){
	    printf("\nPrecione 1 para confirmar la baja del empleado: ");
	    scanf("%d",&baja);
	    if(baja==1){
	        modificar[posicion].isEmpty=estado;
	    }
	    else{
	        printf("\nBaja cancelada\n");
	    }
		retorno = 0;
	}
	return retorno;
}
int ordenarPorApellido(eEmpleado* ordenar,eEmpleado ordenador,int cantidad,eSector* ordenarUno,eSector ordenadorUno)
{
    int retorno=-1;
    int i,j;
    if(ordenar!=NULL){
        for(i=0;i<cantidad-1;i++){
            for(j=i+1;j<cantidad;j++){
            	if(ordenar[i].isEmpty==0){
					if (strcmp(ordenar[i].lastName,ordenar[j].lastName)>0){
						if(strcmp(ordenar[i].lastName,ordenar[j].lastName)==0){
							if (ordenarUno[i].idSector>ordenarUno[j].idSector){
								ordenadorUno=ordenarUno[i];
								ordenarUno[i]=ordenarUno[j];
								ordenarUno[j]=ordenadorUno;
							}
						}
						ordenador=ordenar[i];
						ordenar[i]=ordenar[j];
						ordenar[j]=ordenador;
					}
                }
            }
        }
        retorno=0;
    }
    return retorno;
}
/*int ordenarPorSector(eEmpleado* ordenar,eEmpleado ordenador,int cantidad,eSector* ordenarUno,eSector ordenadorDos)
{
    int retorno=-1,i,j;
    if(ordenar!=NULL && ordenarUno!=NULL){
        for(i=0;i<cantidad-1;i++){
            for(j=i+1;j<cantidad;j++){
            	if(ordenar[i].isEmpty==0){
					if (ordenarUno[i].idSector>ordenarUno[j].idSector){
						ordenadorDos=ordenarUno[i];
						ordenarUno[i]=ordenarUno[j];
						ordenarUno[j]=ordenadorDos;
					}
				}
            }
        }
        retorno=0;
    }
    return retorno;
}*/
int ordenarPorSector(eEmpleado* ordenar,eEmpleado ordenador,int cantidad)
{
    int retorno=-1,i,j;
    if(ordenar!=NULL){
        for(i=0;i<cantidad-1;i++){
            for(j=i+1;j<cantidad;j++){
            	if(ordenar[i].isEmpty==0){
					if (ordenar[i].sector>ordenar[j].sector){
						ordenador=ordenar[i];
						ordenar[i]=ordenar[j];
						ordenar[j]=ordenador;
					}
				}
            }
        }
        retorno=0;
    }
    return retorno;
}
int contador(eEmpleado* empleados,int cantidad,int sector)
{
	int i,contador=0;
	for(i=0;i<cantidad;i++){
		if(empleados[i].isEmpty==0 && empleados[i].sector==sector){
			contador++;
		}

	}
	return contador;
}
int listarMayorSector(eEmpleado* empleados,int cantidad,eSector* sectores)
{
	int retorno=-1,i,contadorAuxiliar=0,sectorMaximo,cantidadEmpleadosMaximo;
	if(empleados!=NULL && sectores!=NULL){
		for(i=0;i<cantidad;i++){
			if(empleados[i].isEmpty==0){
				if(i>0){
						contadorAuxiliar=contador(empleados,cantidad,empleados[0].sector);
						//contadorAuxiliar++;
						sectorMaximo=sectores[0].idSector;
						cantidadEmpleadosMaximo=contadorAuxiliar;
						printf("\n%d A ",sectorMaximo);
						printf("\n%d A ",contadorAuxiliar);
				}else{
					//contadorAuxiliar++;
					contadorAuxiliar=contador(empleados,cantidad,empleados[i].sector);
					if(sectores[i].idSector!=sectores[i+1].idSector){
						sectorMaximo=sectores[0].idSector;
						cantidadEmpleadosMaximo=contadorAuxiliar;
						printf("\n%d B ",sectorMaximo);
						printf("\n%d B ",contadorAuxiliar);
				}
			}
		}
	}
		printf("\n%d C ",sectorMaximo);
		printf("\n%d C ",cantidadEmpleadosMaximo);
		retorno=0;
	}
	return retorno;
}
int sacarPromedioEstructuras(eEmpleado* calcular,int cantidad,float* resultado)
{
    int contadorEmpleados=0,i;
    float totalSueldos=0;
    if(calcular!=NULL){
        for(i=0;i<cantidad;i++){
            if(calcular[i].isEmpty==0){
                contadorEmpleados++;
                totalSueldos+=calcular[i].salary;
            }
        }
        *resultado=totalSueldos/contadorEmpleados;
    }
    return totalSueldos;
}
int calcularEmpleadosMejorPromedio(eEmpleado* calcular,int cantidad, float promedio)
{
    int contadorEmpleados=0,i;
    if(calcular!=NULL){
        for(i=0;i<cantidad;i++){
        	if(calcular[i].isEmpty==0){
				if(calcular[i].salary>promedio){
					contadorEmpleados++;
				}
        	}
        }
    }
    return contadorEmpleados;
}

