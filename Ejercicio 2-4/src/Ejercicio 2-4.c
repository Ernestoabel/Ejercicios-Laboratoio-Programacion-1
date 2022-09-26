/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int FuncionPedirNumero(int numero);
int FuncionNumeroMayorPar(int numero);
int FuncionNumeroMenor(int numero);
int FuncionSegundoNumero(int numero);
int FuncionNumeroMayor(int numero);

int main()
{
	setbuf(stdout, NULL);
    int numero;
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int i;
    int numeroMenor1;
    int numeroMenor2;
    int numeroMenor3;
    int numeroMenor4;
    int numeroMayorPar1;
    int numeroMayorPar2;
    int numeroMayorPar3;
    int numeroMayorPar4;
    int segundoNumero1;
    int segundoNumero2;
    int segundoNumero3;
    int segundoNumero4;

    for(i=0;i<2;i++)
    {
        numero1=FuncionPedirNumero(numero);
        numeroMayorPar1=FuncionNumeroMayorPar(numero1);
        numeroMenor1=FuncionNumeroMenor(numero1);
    }
    segundoNumero1=FuncionSegundoNumero(numero1);

    for(i=0;i<2;i++)
    {
        numero2=FuncionPedirNumero(numero);
        numeroMayorPar2=FuncionNumeroMayorPar(numero2);
        numeroMenor2=FuncionNumeroMenor(numero2);
    }
    segundoNumero2=FuncionSegundoNumero(numero2);

    for(i=0;i<2;i++)
    {
        numero3=FuncionPedirNumero(numero);
        numeroMayorPar3=FuncionNumeroMayorPar(numero3);
        numeroMenor3=FuncionNumeroMenor(numero3);
    }
    segundoNumero3=FuncionSegundoNumero(numero3);

    for(i=0;i<2;i++)
    {
        numero4=FuncionPedirNumero(numero);
        numeroMayorPar4=FuncionNumeroMayorPar(numero4);
        numeroMenor4=FuncionNumeroMenor(numero4);
    }
    segundoNumero4=FuncionSegundoNumero(numero4);

    if((numeroMenor1<numeroMenor2)&&(numeroMenor1<numeroMenor3)&&(numeroMenor1<numeroMenor4))
    {
        printf("El menor numero es: %d\n",numeroMenor1);
    }
    else if((numeroMenor1>numeroMenor2)&&(numeroMenor2<numeroMenor3)&&(numeroMenor2<numeroMenor4))
    {
        printf("El menor numero es: %d\n",numeroMenor2);
    }
    else if((numeroMenor1>numeroMenor3)&&(numeroMenor2>numeroMenor3)&&(numeroMenor4>numeroMenor3))
    {
        printf("El menor numero es: %d\n",numeroMenor3);
    }
    else
    {
        printf("El menor numero es: %d\n",numeroMenor4);
    }

    if((numeroMayorPar1!=segundoNumero1)&&(numeroMayorPar1>numeroMayorPar2)&&(numeroMayorPar1>numeroMayorPar3)&&(numeroMayorPar1>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar1);
        printf("Es el primero ingresado\n");
    }
    else if((numeroMayorPar1==segundoNumero1)&&(numeroMayorPar1>numeroMayorPar2)&&(numeroMayorPar1>numeroMayorPar3)&&(numeroMayorPar1>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar1);
        printf("Es el segundo ingresado\n");
    }
    else if((numeroMayorPar2!=segundoNumero2)&&(numeroMayorPar1<numeroMayorPar2)&&(numeroMayorPar2>numeroMayorPar3)&&(numeroMayorPar2>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar2);
        printf("Es el tercero ingresado\n");
    }
    else if((numeroMayorPar2==segundoNumero2)&&(numeroMayorPar1<numeroMayorPar2)&&(numeroMayorPar2>numeroMayorPar3)&&(numeroMayorPar2>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar2);
        printf("Es el cuarto ingresado\n");
    }
    else if((numeroMayorPar3!=segundoNumero3)&&(numeroMayorPar1<numeroMayorPar3)&&(numeroMayorPar3>numeroMayorPar2)&&(numeroMayorPar3>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar3);
        printf("Es el quinto ingresado\n");
    }
    else if((numeroMayorPar3==segundoNumero3)&&(numeroMayorPar1<numeroMayorPar3)&&(numeroMayorPar3>numeroMayorPar2)&&(numeroMayorPar3>numeroMayorPar4))
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar3);
        printf("Es el sexto ingresado\n");
    }
    else if(numeroMayorPar4!=segundoNumero4)
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar4);
        printf("Es el septimo ingresado\n");
    }
    else
    {
        printf("El mayor numero par es: %d\n",numeroMayorPar4);
        printf("Es el octavo ingresado\n");
    }


    return 0;
}
int FuncionPedirNumero(int numero)
{
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    while(numero==0)
    {
        printf("Ingrese un numero distinto a 0: ");
        scanf("%d",&numero);
    }
    return numero;
}
int FuncionNumeroMayorPar(int numero)
{
    int bandera;
    int numeroMayorPar;
    if(numero %2==0&&bandera==1)
    {
        numeroMayorPar=numero;
        bandera=0;
    }
    else if(numero %2==0&&numero > numeroMayorPar)
    {
        numeroMayorPar=numero;
    }
    return numeroMayorPar;
}
int FuncionNumeroMenor(int numero)
{
    int bandera;
    int numeroMenor;
    if(bandera==1)
    {
        numeroMenor=numero;
        bandera=0;
    }
    else if(numero<numeroMenor)
    {
        numeroMenor=numero;
    }
    return numeroMenor;
}
int FuncionSegundoNumero(int numero)
{
    int bandera;
    int segundoNumero;
    if(bandera==1)
    {
        segundoNumero=numero;
        bandera=0;
    }
    else if(numero<segundoNumero)
    {
        segundoNumero=numero;
    }
    return segundoNumero;
}
int FuncionNumeroMayor(int numero)
{
    int bandera;
    int numeroMayor;
    if(bandera==1)
    {
        numeroMayor=numero;
        bandera=0;
    }
    else if(numero>numeroMayor)
    {
        numeroMayor=numero;
    }
    return numeroMayor;
}
