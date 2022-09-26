/******************************************************************************

F. Pasar las acciones de menú a funciones y llevarlas a una biblioteca

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
int main()
{
	setbuf(stdout, NULL);
    int opcion;
    int menu;
    int bandera;
    int bandera1;
    bandera=1;
    bandera1=1;
    do
    {
        menu=menuPrincipal(opcion);
    switch (menu)
    {
        case 1:
        bandera=loguearse(bandera);
        break;
        case 2:
        bandera1=comprar(bandera,bandera1);
        break;
        case 3:
        verCompras(bandera,bandera1);
        break;
        case 4:
        bandera1=vender(bandera,bandera1);
        break;
        case 5:
        break;
        }
    }while(menu!=5);


    return 0;
}
