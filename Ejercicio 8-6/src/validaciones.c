#include <stdio.h>
#include <string.h>
#include <ctype.h>
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
