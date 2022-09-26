/******************************************************************************

Ejercicio 7-1: Pedirle al usuario su nombre y apellido (en variables separadas, una
para el nombre y otra para el apellido). Ninguna de las dos variables se puede
modificar. Debemos lograr guardar en una tercer variable el apellido y el nombre con
el siguiente formato: Perez, Juan Ignacio usando la siguiente función
void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);
int main()
{
	setbuf(stdout, NULL);
    char nombre[]="Juan Ignacio";
    char apellido[]="Perez";
    char nombreApellido[20];
    //int i;

    /*for(i=0;i<10;i++)
    {
    	apellido[i]=' ';
    	nombre[i]=' ';
    }
    for(i=0;i<20;i++)
    {
    	nombreApellido[i]=' ';
    }
    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);
    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(apellido);*/


    FormarApellidoNombre(nombre,apellido,nombreApellido);

    return 0;
}

void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto)
{
	if(pNombre!=NULL && pApellido!=NULL && pCompleto!=NULL)
	{
	strcpy(pCompleto, pApellido);
    strcat(pCompleto, ", ");
    strcat(pCompleto, pNombre);
    printf("\n Nombre Completo: %s ", pCompleto);
	}
}
