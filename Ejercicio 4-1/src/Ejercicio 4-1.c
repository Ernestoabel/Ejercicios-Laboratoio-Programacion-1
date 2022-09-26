/******************************************************************************

Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
5! = 5*4*3*2*1 = 120

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
	setbuf(stdout, NULL);
    int numero;
    int factorial;
    int i;
    factorial=1;
    numero=pedirNumero();
    for(i=1;i<=numero;i++)
    {
        factorial=factorial*i;
    }
    printf("El factorial del numero es: %d",factorial);

    return 0;
}
