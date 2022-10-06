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
			(empleados+i)->isEmpty = estado;
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
			(empleados+i)->id = 0;
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
    		if((empleados+i)->isEmpty==estado){
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
                if((empleados+i)->isEmpty==0){
                    if((empleados+i)->id==modificar){
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
    if(empleados!=NULL){
        for(i=0;i<cantidadUno;i++){
            if((empleados+i)->isEmpty==0){
                printf("\n%d--%s--%s--%.2f--%s",(empleados+i)->id,(empleados+i)->name,(empleados+i)->lastName,(empleados+i)->salary,(sectores+i)->descripcionSector);
            }
        }
        retorno=0;
    }
    return retorno;
}
int mostrarEmpleadosPorSector(eEmpleado* empleados,int cantidadUno,eSector* sectores)
{
    int retorno=-1,i,auxiliar,repeticion=-1;
    if(empleados!=NULL){
    	do{
    	    printf("Ingrese numero de id del sector \n");
    	    scanf("%d",&auxiliar);
    		for(i=0;i<cantidadUno;i++){
    			if(auxiliar==(sectores+i)->idSector){
    				repeticion=0;
    			}
    		}
    	}while(repeticion!=0);
        for(i=0;i<cantidadUno;i++){
            if((empleados+i)->isEmpty==0){
            	if((sectores+i)->idSector==auxiliar){
                printf("\n%d--%s--%s--%.2f--%s",(empleados+i)->id,(empleados+i)->name,(empleados+i)->lastName,(empleados+i)->salary,(sectores+i)->descripcionSector);
            	}
            }
        }
        retorno=0;
    }
    return retorno;
}
int mostrarCantidadEmpleadosSector(eEmpleado* empleados,int cantidadUno,eSector* sectores,int sector,int contador)
{
	int retorno=-1,i;
	if(sectores!=NULL&&empleados!=NULL){
		for(i=0;i<cantidadUno;i++){
			if((empleados+i)->isEmpty==0){
				if((sectores+i)->idSector==sector){
					printf("\nEl sector %s tiene la cantidad de %d empleados\n",(sectores+i)->descripcionSector,contador);
					break;
				}
			}
		}
	        retorno=0;
	}
	    return retorno;
}
int modificarEmpleado(eEmpleado* modificar, int opcion,int posicion,eSector* sector,eSector* sectores)
{
    int retorno = -1;
	if(modificar != NULL){
	    if(opcion==1){
    		printf("Ingrese nombre empleado \n");
    		fflush(stdin);
    		scanf("%s", modificar[posicion].name);
    		retorno = 0;
	    }
	    if(opcion==2){
    		printf("Ingrese apellido empleado \n");
    		fflush(stdin);
    		scanf("%s", modificar[posicion].lastName);
    		retorno = 0;
	    }
	    if(opcion==3){
    		printf("Ingrese salario empleado \n");
    		scanf("%f",&modificar[posicion].salary);
    		retorno = 0;
	    }
	    if(opcion==4){
	        printf("Ingrese el sector del empleado \n");
	        scanf("%d",&modificar[posicion].sector);
	        if(modificar[posicion].sector==100){
	        	sectores[posicion].idSector=sector[0].idSector;
	        	strcpy(sectores[posicion].descripcionSector,sector[0].descripcionSector);
	        	retorno = 0;
	        }else if(modificar[posicion].sector==200){
	        	sectores[posicion].idSector=sector[1].idSector;
	        	strcpy(sectores[posicion].descripcionSector,sector[1].descripcionSector);
	        	retorno = 0;
	        }else if(modificar[posicion].sector==300){
	        	sectores[posicion].idSector=sector[2].idSector;
	        	strcpy(sectores[posicion].descripcionSector,sector[2].descripcionSector);
	        	retorno = 0;
	        }else if(modificar[posicion].sector==400){
	        	sectores[posicion].idSector=sector[3].idSector;
	        	strcpy(sectores[posicion].descripcionSector,sector[3].descripcionSector);
	        	retorno = 0;
	        }else{
	        	printf("\n--ERROR--\nNumero de sector incorrecto\n");
	        }

	        printf("%d Empl ",modificar[posicion].sector);
	        printf("%d Sect ",sectores[posicion].idSector);
	        printf("%s Sect ",sectores[posicion].descripcionSector);
	        retorno = 0;
	    }
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
            	if((ordenar+i)->isEmpty==0){
					if (strcmp((ordenar+i)->lastName,(ordenar+j)->lastName)>0){
						if(strcmp((ordenar+i)->lastName,(ordenar+j)->lastName)==0){
							if ((ordenarUno+i)->idSector>(ordenarUno+j)->idSector){
								ordenadorUno=ordenarUno[i];
								ordenarUno[i]=ordenarUno[j];
								ordenarUno[i]=ordenadorUno;
							}
						}
						ordenador=ordenar[i];
						ordenar[i]=ordenar[j];
						ordenar[j]=ordenador;
						ordenadorUno=ordenarUno[i];
						ordenarUno[i]=ordenarUno[j];
						ordenarUno[i]=ordenadorUno;
					}
                }
            }
        }
        retorno=0;
    }
    return retorno;
}
int ordenarPorSector(eEmpleado* ordenar,eEmpleado ordenador,int cantidad,eSector* ordenarUno,eSector ordenadorUno)
{
    int retorno=-1,i,j;
    if(ordenar!=NULL && ordenarUno!=NULL){
        for(i=0;i<cantidad-1;i++){
            for(j=i+1;j<cantidad;j++){
            	if((ordenar+i)->isEmpty==0){
					if ((ordenarUno+i)->idSector>(ordenarUno+j)->idSector){
						ordenadorUno=ordenarUno[i];
						ordenarUno[i]=ordenarUno[j];
						ordenarUno[j]=ordenadorUno;
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
		if((empleados+i)->isEmpty==0 && (empleados+i)->sector==sector){
			contador++;
		}

	}
	return contador;
}
int contadorPorSector(eEmpleado* empleados,int cantidad,int* contador)
{
	int i,repeticion=-1,sector;
	*contador=0;
	if(empleados!=NULL){
		do{
			printf("Ingrese numero de id del sector \n");
			scanf("%d",&sector);
			for(i=0;i<cantidad;i++){
				if(sector==(empleados+i)->sector){
					repeticion=0;
				}
			}
		}while(repeticion!=0);
		for(i=0;i<cantidad;i++){
			if((empleados+i)->isEmpty==0 && (empleados+i)->sector==sector){
				(*contador)++;
			}
		}
	}
	return sector;
}

int listarMayorSector(eEmpleado* empleados,int cantidad,eSector* sectores)
{
	int retorno=-1,i,contadorAuxiliar=0,cantidadEmpleadosMaximo,idMAximo;
	if(empleados!=NULL && sectores!=NULL){
		for(i=0;i<cantidad;i++){
				if(i==0){
					contadorAuxiliar = contador(empleados,cantidad,empleados[0].sector);
					idMAximo = empleados[0].sector;
					cantidadEmpleadosMaximo=contadorAuxiliar;
				}else{
					if(sectores[i].idSector != sectores[i-1].idSector){
						contadorAuxiliar = contador(empleados,cantidad,(empleados+i)->sector);
						if(contadorAuxiliar>cantidadEmpleadosMaximo){
							idMAximo = (empleados+i)->sector;
							cantidadEmpleadosMaximo=contadorAuxiliar;
						}
					}
				}
		}
	}
	for(i=0;i<cantidad;i++){
		if((empleados+i)->isEmpty==0&&idMAximo==(empleados+i)->sector){
			printf("\n%d--%s--%s--%.2f--%s",(empleados+i)->id,(empleados+i)->name,(empleados+i)->lastName,(empleados+i)->salary,(sectores+i)->descripcionSector);
		}
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
                totalSueldos+=(calcular+i)->salary;
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
        	if((calcular+i)->isEmpty==0){
				if((calcular+i)->salary>promedio){
					contadorEmpleados++;
				}
        	}
        }
    }
    return contadorEmpleados;
}
int sacarPromedioEstructurasPorSector(eEmpleado* calcular,int cantidad,float* resultado)
{
    int contadorEmpleados=0,i,repeticion,auxiliar;
    float totalSueldos=0;
    do{
    	printf("Ingrese numero de id del sector \n");
    	scanf("%d",&auxiliar);
    	for(i=0;i<cantidad;i++){
    		if(auxiliar==(calcular+i)->sector){
    			repeticion=0;
    		}
    	}
    }while(repeticion!=0);
    if(calcular!=NULL){
        for(i=0;i<cantidad;i++){
            if((calcular+i)->isEmpty==0&&(calcular+i)->sector==auxiliar){
                contadorEmpleados++;
                totalSueldos+=(calcular+i)->salary;
            }
        }
        *resultado=totalSueldos/contadorEmpleados;
    }
    return totalSueldos;
}

