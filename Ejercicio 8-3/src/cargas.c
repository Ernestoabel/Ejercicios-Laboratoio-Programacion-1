#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cargarArrayChar(char mensaje[30],char array[],int cantidad)
{
    int retorno=-1;
    char cadena[cantidad];
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",cadena);
    if(strlen(cadena)<=cantidad&&array!=NULL)
    {
        strcpy(array,cadena);
        retorno=0;
    }
    else
    {
        printf("Error de ingreso");
        retorno=0;
    }
    return retorno;
}
