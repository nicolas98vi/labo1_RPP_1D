/*
 ============================================================================
 Name        : 1_parte_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "PerritoEstadiaDuenio.h"

int main(void) {
	setbuf(stdout, NULL);
	ePerro arrayPerritos[TAMPerrito]={{7000, "lobo", "Sharpei", 2},{7001, "Sheila", "Golden", 12},{7002, "Reina", "Galgo", 13}};
	EstadiaDiaria arrayEstadia[TAM];
	Duenio arrayDuenio[tamDuenio]={{3000, "Jose",47373732},{3001, "Luis",47372732},{3002, "Esteban",47322732},{3003, "Josefa",47313232},{3004, "Lusia", 41213232}};
	int opcion;
	int cantidadEstadias;
	cantidadEstadias=1;
	int IDEstadias;
	IDEstadias=100000;
    int retorno;
    retorno=initEmployees(arrayEstadia, TAM);
    mostrar(retorno," ","ERROR AL INICIALIZAR","Exito al inizialisar");

	do
	{
		pedirEntero(&opcion,"-------------------------------------\n"
				 "1. RESERVAR ESTADIA\n"
				 "2. MODIFICAR ESTADIA\n"
				 "3. CANCELAR ESTADÍA\n"
				 "4. LISTAR ESTADÍAS\n"
				 "5. LISTAR PERROS\n"
	             "6. Promedio de edad de los perros\n"
	             "7. El perro que tiene más estadías reservadas\n"
				 "8. Listado de perros con sus estadías diarias reservadas\n"
				 "9. Salir\n"
				 "-------------------------------------\n"
				 "Ingrese una opcion: ", "ERROR AL INGRESAR NUMERO\n"
				 "-------------------------------------\n"
				 				 "1. RESERVAR ESTADIA\n"
				 				 "2. MODIFICAR ESTADIA\n"
				 				 "3. CANCELAR ESTADÍA\n"
				 				 "4. LISTAR ESTADÍAS\n"
				 				 "5. LISTAR PERROS\n"
				 	             "6. Promedio de edad de los perros\n"
				 	             "7. El perro que tiene más estadías reservadas\n"
				 				 "8. Listado de perros con sus estadías diarias reservadas\n"
				 				 "9. Salir\n"
				 				 "-------------------------------------\n"
				 				 "Ingrese una opcion: ", 0, 9);

		switch(opcion)
		{
		   case 1:

			   retorno=Estadia_agregarEstadia(arrayPerritos,arrayEstadia,arrayDuenio,cantidadEstadias,TAMPerrito,tamDuenio,IDEstadias);
			   if(retorno==1){
				   cantidadEstadias++;
				   IDEstadias++;
			   }
			   	mostrar(retorno,"ERROR AL INGRESAR ESTADIA","Ingreso de estadia canselada","Exito al ingresar Estadia!!!");
			   system("pause");
			break;
			case 2:
				if(cantidadEstadias>1){
					subMenuModificar(arrayPerritos,arrayEstadia,arrayDuenio,TAM,TAMPerrito,tamDuenio);
				}else{
					printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 3:
				if(cantidadEstadias>1){
					retorno=bajaLogica(arrayEstadia,cantidadEstadias);
				    mostrar(retorno,"Baja canselada","ERROR AL DAR DE BAJA","Exito al dar de baja!!!");
				}else{
					printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 4:
				if(cantidadEstadias>1){
					mostrarEstadias(arrayEstadia,TAM);
				}else{
					printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 5:
				mostrarPerritos(arrayPerritos,TAMPerrito);
				system("pause");
				break;
			case 6:
			    promedioEdadPerritos(arrayPerritos,3);
				system("pause");
				break;
			case 7:
				if(cantidadEstadias>1){
					mayorEstadiaDePerro(arrayPerritos,arrayEstadia,cantidadEstadias,TAMPerrito);
				}else{
					printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 8:
				if(cantidadEstadias>1){
					listadoDePerroEstadia(arrayPerritos,arrayEstadia,cantidadEstadias,TAMPerrito);
				}else{
					printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 9:
				printfSolo("Salio del menu!!!\n");
				system("pause");
				break;
		}
	}while(opcion != 9);

	return EXIT_SUCCESS;
}


