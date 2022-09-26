#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int inicializarParametrosEnteros(int datos[],int cantidadElementos)
{
    int i;
    int retorno=-1;
    if(datos!=NULL && cantidadElementos>0)
    {
    for(i=0;i<cantidadElementos;i++)
    {
        datos[i]=0;
    }
    retorno=0;
    }
    return retorno;
}
float inicializarParametrosFlotantes(float datos[],int cantidadElementos)
{
    int i;
    int retorno=-1;
    if(datos!=NULL && cantidadElementos>0)
    {
    for(i=0;i<cantidadElementos;i++)
    {
        datos[i]=0;
    }
    retorno=0;
    }
    return retorno;
}
