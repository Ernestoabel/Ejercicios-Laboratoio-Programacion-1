/******************************************************************************

Ejercicio 4-2: Realizar una funci�n Suma que reciba como par�metros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La funci�n retorna 0 si
pudo realizar la suma y -1 en caso de no haberla podido realizar.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "sumaNumeros.h"

int main()
{
	setbuf(stdout, NULL);
    int numeroUno;
    int numeroDos;
    int resultado;
    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("Ingrese un numero: ");
    scanf("%d",&numeroDos);
    resultado=sumaDosNumeros(numeroUno,numeroDos,&resultado);
    if(resultado==0)
    {
        printf("El retorno es: %d",resultado);
    }
    else
    {

    }

    return 0;
}
