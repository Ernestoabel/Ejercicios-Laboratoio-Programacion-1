#include <stdio.h>
#include <string.h>
#include <ctype.h>

int pedirTexto (char texto[])
{
  int retorno = -1;
  char cadena[30];

  if (texto != NULL)
    {
      printf("Ingrese su texto : ");
      scanf("%[^\n]",cadena);
      strcpy(texto,cadena);
      retorno = 0;
    }
  return retorno;
}

int esSoloLetra(char *pResultado)
{
    int i;
    int retorno;
    int numeros=0;
    if(pResultado!=NULL)
    {
        for (i=0;i< strlen(pResultado);i++)
            {
                if(isalpha(pResultado[i])==0)
                {
                    numeros++;
                }
            }
        if(numeros>0)
        {
            retorno=0;
        }
        else
        {
            retorno=1;
        }
    }
    return retorno;
}

int esLetraConEspacio(char *pResultado)
{
    int i;
    int retorno;
    int contador;
    int aux;
    if(pResultado!=NULL)
    {
        for (i=0;i< strlen(pResultado);i++)
            {
                if(pResultado[i]==' ')
                {
                    aux=i;
                    contador++;
                }
            }
        if(strlen(pResultado)/2==aux||(strlen(pResultado)/2)-1==aux||(strlen(pResultado)/2)+1==aux)
        {
            retorno=1;
        }
        else
        {
            retorno=0;
        }
    }
    return retorno;
}
