#include <stdio.h>
int menuPrincipal(int opcion)
{
    printf("1.Loguearse");
    printf("\n2.Comprar");
    printf("\n3.Ver mis compras");
    printf("\n4.Vender");
    printf("\n5.Salir");
    printf("\nOpcion: ");
    scanf("%d",&opcion);
    return opcion;
}
int menuSecundario(int opcion)
{
    printf("\n1.Vender");
    printf("\n2.Hacer factura");
    printf("\n3.Volver atrás");
    printf("\nOpcion: ");
    scanf("%d",&opcion);
    return opcion;
}
int loguearse(int bandera)
{
    printf("\nlogueó existoso\n");
    bandera=0;
    return bandera;
}
int comprar(int bandera, int bandera1)
{
    if(bandera==1)
    {
        printf("\nDebe loguearse primero\n");
    }
    else
    {
        printf("\nCompra realizada\n");
        bandera1=0;
        return bandera1;
    }
}
void verCompras(int bandera,int bandera1)
{
    if(bandera==1)
    {
        printf("\nDebe loguearse primero\n");
    }
    else if(bandera1==1)
    {
        printf("\nDebe realizar una compra primero\n");
    }
    else
    {
        printf("\nUsted tiene una compra\n");
    }
}
int vender(int bandera,int bandera1)
{
    int menu1;
    int opcion;
    if(bandera==1)
    {
        printf("\nDebe loguearse primero\n");
    }
    else
    {
        do
        {
        menu1=menuSecundario(opcion);
        switch (menu1)
        {
        case 1:
        if(bandera1==1)
        {
            printf("\nDebe realizar una compra\n");
        }
        else if(bandera1==0)
        {
            printf("\nVenta realizada\n");
            bandera1=1;
        }
        case 2:
        break;
        case 3:
        break;
        }
        }while(menu1!=3);
    }
    return bandera1;
}
