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
#include <string.h>
#include <ctype.h>
#include "cargas.h"
#include "validaciones.h"
#define TAM 15

int main()
{
    char codigo[TAM][4];
    char modelo[TAM][10];
    int cantidad[TAM];
    float precio[TAM];
    int confirmacion;
    int opcion;
    int i=0;
    int aux;
    do{


        printf("\n1.Carga de productos");
        printf("\n2.Venta de productos");
        printf("\n3.Modificacion de precios");
        printf("\n4.Modificar el modelo");
        printf("\n5.Listar ordenado por codigo");
        printf("\n6.Listar datos de los productos con menos de 3 unidades");
        printf("\n7.Salir");
        printf("\nElija opcion: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
            case 1:
                for(i=0;i<TAM;i++)
                {
                    do{
                    cargarArrayChar("Ingrese el codigo del producto: ",codigo[i],4);
                    validarAlfanumerico(codigo[i],&confirmacion);
                    }while(confirmacion!=0);
                    cargarArrayChar("Ingrese el modelo del producto: ",modelo[i],10);
                    printf("Ingrese la cantidad del producto: ");
                    scanf("%d",&cantidad[i]);
                    printf("Ingrese el precio del producto: ");
                    scanf("%f",&precio[i]);
                }
            break;
            case 2:
                do{
                for(i=0;i<TAM;i++)
                {
                    printf("\nListado: %d",i);
                    printf("\nCantidad: %d",cantidad[i]);
                }
                printf("\nIngrese del listado el producto a vender");
                printf("\nNumero de listado: ");
                scanf("%d",&aux);
                cantidad[aux]--;
                printf("\n¿Vender otro producto?");
                printf("\n1 para salir: ");
                scanf("%d",&opcion);
                }while(opcion!=1);
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            break;
            case 7:
            break;
        }
    }while(opcion!=7);
    return 0;
}
