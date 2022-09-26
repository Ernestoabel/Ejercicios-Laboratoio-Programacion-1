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

int main()
{
	setbuf(stdout, NULL);
    int legajo;
    char estadoCivil;
    int edad;
    int anoDeIngreso;
    char genero;
    int continuar;
    int precioLibreta;
    int personasMayores;
    int bandera;
    int legajoMasTiempo;
    int edadMasTiempo;
    float totalPrecioLibreta;
    float precioLibretaDescuento5;
    float precioLibretaDescuento10;
    float precioLibretaMayores;
    float cantidadLibretas;
    float precioTotalMayoresDescuento;
    float precioTotalMayoresDescuento5;
    float precioTotalMayoresDescuento10;
    precioTotalMayoresDescuento5=0;
    precioTotalMayoresDescuento10=0;
    precioTotalMayoresDescuento=0;
    cantidadLibretas=0;
    precioLibretaMayores=0;
    precioLibretaDescuento10=0;
    precioLibretaDescuento5=0;
    totalPrecioLibreta=0;
    precioLibreta=450;
    personasMayores=0;

    do
    {
        printf("Ingrese numero de legajo: ");
        fflush(stdin);
        scanf("%d",&legajo);
        while(legajo<1000||legajo>9999)
        {
            printf("legajo entre 1000 y 9999: ");
            fflush(stdin);
            scanf("%d",&legajo);
        }

        printf("Ingrese estado civil: ");
        fflush(stdin);
        scanf("%c",&estadoCivil);
        while(estadoCivil!='s'&&estadoCivil!='c'&&estadoCivil!='v')
        {
            printf("Ingrese s para soltero, c para casado, v para viudo: ");
            fflush(stdin);
            scanf("%c",&estadoCivil);
        }

        printf("Ingrese la edad: ");
        fflush(stdin);
        scanf("%d",&edad);
        while(edad<17)
        {
            printf("Edad valida mayor de 17: ");
            fflush(stdin);
            scanf("%d",&edad);
        }

        printf("Ingrese el genero: ");
        fflush(stdin);
        scanf("%c",&genero);
        while(genero!='f'&&genero!='m'&&genero!='o')
        {
            printf("Ingrese f para femenino, m para masculino, o para binario: ");
            fflush(stdin);
            scanf("%c",&genero);
        }

        printf("Ingrese el año de ingreso: ");
        fflush(stdin);
        scanf("%d",&anoDeIngreso);
        while(anoDeIngreso<1950||anoDeIngreso>2022)
        {
            printf("Valido entre 1950 y 2022: ");
            fflush(stdin);
            scanf("%d",&anoDeIngreso);
        }

        if(edad>60)
        {
            personasMayores++;
        }

        if(genero=='f'&&bandera==1)
        {
            legajoMasTiempo=legajo;
            edadMasTiempo=edad;
            bandera=0;
        }
        else
        {
            if(legajo<legajoMasTiempo)
            {
                legajoMasTiempo=legajo;
                edadMasTiempo=edad;
            }
        }
        cantidadLibretas++;
        totalPrecioLibreta=cantidadLibretas*precioLibreta;

        if(cantidadLibretas>=5&&cantidadLibretas<10)
        {
            precioLibretaDescuento5=totalPrecioLibreta*0.95;
        }
        else
        {
            if(cantidadLibretas>=10)
            {
                precioLibretaDescuento10=totalPrecioLibreta*0.90;
            }
        }
        if(personasMayores!=0)
        {
            precioLibretaMayores=450*0.75*personasMayores;
            precioTotalMayoresDescuento=totalPrecioLibreta-(personasMayores*450)+precioLibretaMayores;
        }
        if(cantidadLibretas>=5&&cantidadLibretas<10&&personasMayores!=0)
        {
            precioLibretaMayores=450*0.75*personasMayores;
            precioTotalMayoresDescuento5=totalPrecioLibreta*0.95-(personasMayores*450)+precioLibretaMayores;
        }
        if(cantidadLibretas>=10&&personasMayores!=0)
        {
            precioLibretaMayores=450*0.75*personasMayores;
            precioTotalMayoresDescuento10=totalPrecioLibreta*0.90-(personasMayores*450)+precioLibretaMayores;
        }

        printf("Desea agragar otra libreta? 1 para continuar: ");
        fflush(stdin);
        scanf("%d",&continuar);

    }while(continuar==1);

    if(personasMayores!=0)
    {
        printf("La cantidad de personas mayores de 60 son: %d\n",personasMayores);
        printf("El precio total a pagar considerando el descuento a mayores es: %.2f\n",precioTotalMayoresDescuento);
    }
    if(genero=='f')
    {
        printf("El legajo de la mujer con mas tiempo es %d y su edad es %d\n",legajoMasTiempo,edadMasTiempo);
    }
    if(totalPrecioLibreta!=0)
    {
        printf("El total a pagar por las libretas es: %.2f\n",totalPrecioLibreta);
    }
    if(cantidadLibretas>=5&&cantidadLibretas<10)
    {
        printf("El total a pagar por las libretas con descuento del 5 es: %.2f\n",precioLibretaDescuento5);
    }
    if(cantidadLibretas>=10)
    {
        printf("El total a pagar por las libretas con descuento del 10 es: %.2f\n",precioLibretaDescuento10);
    }
    if(cantidadLibretas>=5&&cantidadLibretas<10&&personasMayores!=0)
    {
        printf("El total a pagar por las libretas con descuento del 5 considerando mayores es: %.2f\n",precioTotalMayoresDescuento5);
    }
    if(cantidadLibretas>=10&&personasMayores!=0)
    {
        printf("El total a pagar por las libretas con descuento del 10 considerando mayores es: %.2f\n",precioTotalMayoresDescuento10);
    }

    return 0;
}
