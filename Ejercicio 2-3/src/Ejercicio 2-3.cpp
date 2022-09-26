//============================================================================
// Name        : Ejercicio.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	setbuf(stdout, NULL);
    int numero;
    numero=0;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    if(numero %2 !=0)
    {
        printf("El numero es impar");
    }
    else
    {
        printf("El numero es par");
    }

    return 0;
}

