/*
 ============================================================================
 Name        : Ejercicio 7-2
 Author      : Ernesto Fatala
 Version     :
 Copyright   : Your copyright notice
 Description : Division J
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    char textoAlfanumerico[30];
    char numeroTelefonoFijo[15];
    char numeroTelefonoCelular[15];
    int esAlfanumerico;
    int soloNumerosFijo;
    int soloNumerosCelular;

    do{
    pedirArrayCaracteres("Ingrese un texto alfanumerico: ","\n-Error-\nSe paso de caracteres\nIngrese un texto alfanumerico: ",textoAlfanumerico,10);
    validarAlfanumerico(textoAlfanumerico,&esAlfanumerico);
    }while(esAlfanumerico!=0);
    do{
    pedirArrayCaracteres("\nIngrese su numero de telefono fijo: ","\n-Error-\nCantidad de numeros no valido\nIngrese su numero de telefono fijo: ",numeroTelefonoFijo,9);
    pedirArrayCaracteres("\nIngrese su numero de telefono celular: ","\n-Error-\nCantidad de numeros no valido\nIngrese su numero de telefono celular: ",numeroTelefonoCelular,11);
    do{
    validarNumeroTelefonico(numeroTelefonoFijo,8);
    }while(strlen(numeroTelefonoFijo)!=8);
    do{
    validarNumeroTelefonico(numeroTelefonoCelular,10);
    }while(strlen(numeroTelefonoCelular)!=10);
    soloNumerosFijo=esNumerica(numeroTelefonoFijo);
    soloNumerosCelular=esNumerica(numeroTelefonoCelular);
    }while(soloNumerosFijo!=0&&soloNumerosCelular!=0);
    printf("\nEl texto ingresado es: %s",textoAlfanumerico);
    return 0;
}
