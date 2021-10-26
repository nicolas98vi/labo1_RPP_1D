#include "PerritoEstadiaDuenio.h"

void mostrarDuenios(Duenio* DuenioListado,int tam){
	int i;
	printf(" ID       Nombre del Dueño           Fecha\n");
	for(i=1;i<tam;i++){
		mostrarDuenio(DuenioListado, i);
	}
}
void mostrarDuenio(Duenio* DuenioListado,int i){
	printf("%d) %15s %20d\n",DuenioListado[i].id,DuenioListado[i].nombre,DuenioListado[i].telefono);
}

int menuModificarDuenio(Duenio* DuenioListado,int listado){
	int retorno;
	int opciones;

	retorno=0;
   if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar el modificar duenio: ")){
		do{
			pedirEntero(&opciones,"-------------------------------------\n"
					 "1. MODIFICAR NOMBRE\n"
					 "2. MODIFICAR TELEFONO\n"
					 "4. SALIR\n"
					 "-------------------------------------\n"
					 "Ingrese una opcion: ", "ERROR AL INGRESAR NUMERO\n"
					 "-------------------------------------\n"
					 					 "1. MODIFICAR NOMBRE\n"
					 					 "2. MODIFICAR TELEFONO\n"
					 					 "4. SALIR\n"
					 					 "-------------------------------------\n"
					 					 "Ingrese una opcion: ", 0, 4);
			switch(opciones){
			case 1:
				pedirCadena(DuenioListado[listado].nombre,"Ingrese el nombre del duenio: ","ERROR  AL INGRESAR NOMBRE\nIngrese el nombre del duenio: ",41);
		    break;
			case 2:
				pedirEntero(&DuenioListado[listado].telefono,"Ingrese el telefono del duenio: ","ERROR  AL INGRESAR TELEFONO\nIngrese el telefono del duenio: ",40000000, 50000000);
		    break;
			case 3:
				printfSolo("Esta saliendo del menu para cambiar un duenio...");
		    break;
			}
		}while(opciones!=3);

		retorno=1;
   }
   mostrarDuenio(DuenioListado,listado);

	return retorno;
}



int buscarDuenioID(Duenio* DuenioEstructura,int tam,int ID){
	int i;
	int listado;
	for(i=0;i<tam;i++){
		if(DuenioEstructura[i].id==ID){
			listado=i;
		    break;
		}
	}
	return listado;
}

