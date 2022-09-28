#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char menu(char* mensajeUno,char* mensajeDos,char* mensajeTres,char* mensajeCuatro,char* mensajeCinco,char* mensajeSeis)
{
    char opcion;
    printf("%s",mensajeUno);
    printf("%s",mensajeDos);
    printf("%s",mensajeTres);
    printf("%s",mensajeCuatro);
    printf("%s",mensajeCinco);
    printf("%s",mensajeSeis);
    fflush(stdin);
    scanf("%c",&opcion);
    return opcion;
}
int subMenu(char* mensajeUno,char* mensajeDos,char* mensajeTres,char* mensajeCuatro,char* mensajeCinco)
{
    int opcion;
    printf("%s",mensajeUno);
    printf("%s",mensajeDos);
    printf("%s",mensajeTres);
    printf("%s",mensajeCuatro);
    printf("%s",mensajeCinco);
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}
int menuListado(char* mensajeUno,char* mensajeDos,char* mensajeTres,char* mensajeCuatro)
{
    int opcion;
    printf("%s",mensajeUno);
    printf("%s",mensajeDos);
    printf("%s",mensajeTres);
    printf("%s",mensajeCuatro);
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}
int continuarCarga(char mensaje[], char mensajeOpcion[])
{
    int opcion;
    printf("%s",mensaje);
	printf("%s",mensajeOpcion);
	fflush(stdin);
	scanf("%d",&opcion);
	return opcion;
}
