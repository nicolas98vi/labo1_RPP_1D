#include "Biblioteca.h"


void pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max)
{
	int numeroIngresado;

	if(entero != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s ", mensaje);
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		while(numeroIngresado < min || numeroIngresado > max)
		{
			printf("%s ", mensajeError);
			fflush(stdin);
			scanf("%d", &numeroIngresado);
		}

		*entero = numeroIngresado;
	}
}


void pedirCaracter(char* caracter, char* mensaje)
{

	if(caracter != NULL && mensaje != NULL)
	{
		printf("%s", mensaje);
		fflush(stdin);
		*caracter = getchar();
	}

}

void pedirCadena(char* cadena, char* mensaje, char* mensajeError, int max)
{
	char buffer[256];
	int tam;

	if(cadena != NULL && mensaje != NULL && mensajeError != NULL && max > 0)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%[^\n]", buffer);
		tam = strlen(buffer);

		while(tam > max)
		{
			printf("%s", mensajeError);
			fflush(stdin);
			scanf("%[^\n]", buffer);
			tam = strlen(buffer);
		}

		strcpy(cadena, buffer);
	}

}


int producto_verificarConfirmacion(char* mensaje)
{
	int retorno = -1;
	char respuesta;

	pedirCaracter(&respuesta, mensaje);
	if(respuesta == 's' || respuesta == 'S')
	{
		retorno = 0;
	}

	return retorno;
}


void mostrar(int opcion,char* mesajeUno,char* mesajeDos,char* mesajeTres){
	switch(opcion){
		case -1:
			printfSolo(mesajeUno);
		break;
		case 0:
			printfSolo(mesajeDos);
		break;
		case 1:
			printfSolo(mesajeTres);
		break;
	}
}

void printfSolo(char* mensaje){
	printf("%s\n",mensaje);
}






