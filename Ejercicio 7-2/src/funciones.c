#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pedirArrayCaracteres(char mensaje[],char mensajeError[],char* texto,int longitudCadena)
{
  int retorno = -1;
  char cadena[longitudCadena];
  if(texto != NULL){
        printf("%s",mensaje);
        fflush(stdin);
        scanf("%s",cadena);
        strcpy (texto, cadena);
    while(strlen (cadena) >=longitudCadena){
	    printf("%s",mensajeError);
	    fflush(stdin);
    	scanf("%s",cadena);
    	strcpy (texto, cadena);
	}
      retorno = 0;
    }
  return retorno;
}
int validarNumeroTelefonico(char* texto,int longitudCadena)
{
    int retorno=-1;
    printf("\n");
	if(texto!=NULL){
		if(strlen(texto)==longitudCadena){
			retorno=0;
		}
		if(strlen(texto)==8){
			for(int i=0;i<4;i++){
				printf("%c",texto[i]);
			}
			printf("-");
			for(int i=4;i<8;i++){
				printf("%c",texto[i]);
			}
		}
		if(strlen(texto)==10){
			for(int i=0;i<6;i++){
				printf("%c",texto[i]);
			}
			printf("-");
			for(int i=6;i<10;i++){
				printf("%c",texto[i]);
			}
		}
    }
	return retorno;
}
int validarAlfanumerico(char array[], int *confirmacion)
{
	int salida=-1;
	int i;
	int letras=0;
	int numeros=0;
	if(array!=NULL && confirmacion!=NULL){
		for(i=0;i<strlen(array);i++){
			if(isdigit(array[i])!=0){
				numeros++;
			}
			if(isalpha(array[i])!=0){
				letras++;
			}
		}
		if((numeros+letras)==strlen(array) && numeros>0 && letras>0){
			*confirmacion=0;//es alfanumerico
		}
		else{
			*confirmacion=-1;
		}
		salida=0;
	}
	return salida;
}
int esNumerica(char* cadena)
{
	int retorno=0;
	for(int i=0;cadena[i]!='\0';i++)
	{
		//EN LA PRIMER POSICION DEL ARRAY ES VALIDO TENER UN NUMERO NEGATIVO POR ESO HACEMOS ESTO
		if(isdigit(cadena[i])==0)
		{
			retorno=-1;
			break;
		}
	}
	return retorno;
}
