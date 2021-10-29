#include "PerritoEstadiaDuenio.h"

int initEmployees(EstadiaDiaria* list, int len)
{
	int retorno;
	retorno=0;
	int i;
	for(i=0; i<len; i++)
	{
		list[i].isEmpty = VACIO;
		retorno=1;
	}
	return retorno;
}


int producto_buscarEspacioLibre(EstadiaDiaria Estadia[], int tam)
{
	int i;
	int index = -1;

	for(i=0; i<tam; i++)
	{
		if(Estadia[i].isEmpty == VACIO)
		{
			index = i;
			break;
		}
	}

	return index;
}



int bajaLogica(EstadiaDiaria* ingresoEstadia,int tamanio){
	int retorno;
	retorno=0;
	int i;
	int id;

	pedirEntero(&id,"Ingrese el ID a dar de baja: ", "ERROR AL INGRESAR ID", 100000, 100101);

	for(i=1;i<tamanio;i++){

		if(id==ingresoEstadia[i].id && ingresoEstadia[i].isEmpty==LLENO){
			if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar la baja de la estadia: ")){
				retorno=1;
				ingresoEstadia[i].isEmpty=VACIO;
			}else{
				retorno=-1;
			}
		}
	}
	mostrarEstadias(ingresoEstadia, tamanio);
	return retorno;
}

void mostrarEstadias(EstadiaDiaria* ingresoDeEstadia,int tamanio){
	int i;
	printf("  ID     Nombre del dueño           Telefono            Fecha\n");
	for(i=1;i<tamanio;i++){
		if(ingresoDeEstadia[i].isEmpty==LLENO){
			mostrarEstadia(ingresoDeEstadia, i);
		}
	}
}

void mostrarEstadia(EstadiaDiaria* ingresoDeEstadia,int i){
	printf("%d %12s %24d %18s\n",ingresoDeEstadia[i].id,ingresoDeEstadia[i].nombreDuenio,ingresoDeEstadia[i].telefonoContacto,ingresoDeEstadia[i].fecha);
}


int buscarEstadiaID(EstadiaDiaria* estadia,int tam,int ID){
	int i;
	int listado;
	for(i=0;i<tam;i++){
		if(estadia[i].id==ID){
			listado=i;
		    break;
		}
	}
	return listado;
}


void contadorDeAlan(EstadiaDiaria* estadia,int tamanioEstadia){
	int i;
	int contador;
	contador=0;
	for(i=0;i<tamanioEstadia;i++){
			if(estadia[i].isEmpty==LLENO && strcmp(estadia[i].nombreDuenio,"Alan")){
				contador++;
			}
	}
	if(contador!=0){
		printf("La cantidad de Alan ingresados es %d\n",contador);
	}else{
		printf("No hay alan's ingresados \n");
	}
}

void contadorDeLucia(EstadiaDiaria* estadia,int tamanioEstadia){
	int i;
	int contador;
	contador=0;
	for(i=0;i<tamanioEstadia;i++){
			if(estadia[i].isEmpty==LLENO && strcmp(estadia[i].nombreDuenio,"Lucia")){
				contador++;
			}
	}
	if(contador!=0){
		printf("La cantidad de Lucia's ingresados es %d\n",contador);
	}else{
		printf("No hay Lucia's ingresados \n");
	}
}

