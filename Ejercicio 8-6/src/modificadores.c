#include <stdio.h>
#include <string.h>
#include <ctype.h>
int modificarFloat(float dato[])
{
    int salida=-1;
    int aux;
    float auxPrecio;

	if(dato!=NULL)
	{
		printf("\nIngrese del listado el producto a modificar su precio");
        printf("\nNumero de listado: ");
        scanf("%d",&aux);
        printf("\nIngrese el nuevo precio: " );
        scanf("%f",&auxPrecio);
        dato[aux]=auxPrecio;
		salida=0;
	}
	return salida;
}
