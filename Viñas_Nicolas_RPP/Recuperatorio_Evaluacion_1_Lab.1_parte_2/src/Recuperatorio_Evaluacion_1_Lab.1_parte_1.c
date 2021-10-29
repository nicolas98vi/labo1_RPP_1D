/*
 ============================================================================
 Name        : 1_parte_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 9. ALTA DE PERRO: Con id autoincremental (comienza en 7002 por los 3 perritos que ya
estaban hardcodeados).
10. La cantidad de dueños que se llaman Alan y que, a su vez, tienen al menos una
estadía reservada.
11. Listado de estadías realizadas por dueñas que se llaman Lucia y cuya fecha de
reserva es durante la segunda quincena de noviembre 2021.

 */


#include "PerritoEstadiaDuenio.h"

int main(void) {
	setbuf(stdout, NULL);
	ePerro arrayPerritos[TAMPerrito]={{7000, "lobo", "Sharpei", 2},{7001, "Sheila", "Golden", 12},{7002, "Reina", "Galgo", 13}};
	EstadiaDiaria arrayEstadia[TAM];
	Duenio arrayDuenio[tamDuenio]={{3000, "Alan",47373732},{3001, "Luis",47372732},{3002, "Esteban",47322732},{3003, "Josefa",47313232},{3004, "Lucia", 41213232}};
	int opcion;
	int cantidadEstadias;
	cantidadEstadias=1;
	int IDEstadias;
	IDEstadias=100000;

	int IDPerrito;
	IDPerrito=7002;
	int cantidadPerritos;
	cantidadPerritos=3;

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
				 "9. ALTA DE PERRO\n"
				 "10.La cantidad de dueños que se llaman Alan\n"
				 "11.Listado de estadías realizadas por dueñas que se llaman Lucia\n"
				 "12. Salir\n"
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
				 	 	 	 	 "9. ALTA DE PERRO:\n"
				 	 	 	 	 "10.La cantidad de dueños que se llaman Alan\n"
				 	 	 	 	 "11.Listado de estadías realizadas por dueñas que se llaman Lucia\n"
				 	 	 	 	 "12. Salir\n"
				 				 "-------------------------------------\n"
				 				 "Ingrese una opcion: ", 0, 13);

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

				if(cantidadPerritos<TAMPerrito){
					IDPerrito++;
					retorno = cargarPerrito(arrayPerritos,TAMPerrito,IDPerrito,cantidadPerritos);
					cantidadPerritos++;
					mostrar(retorno,"","ERROR AL INGRESAR Perrito","Exito al ingresar perrito!!!");
				}else{
					printfSolo("Ya no se puede ingresar perritos");
				}

				system("pause");
				break;
			case 10:
				if(cantidadEstadias>1){
					contadorDeAlan(arrayEstadia, cantidadEstadias);
				}else{
				    printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 11:
				if(cantidadEstadias>1){
					contadorDeLucia(arrayEstadia, cantidadEstadias);
				}else{
				    printfSolo("Ingrese una estadia primero");
				}
				system("pause");
				break;
			case 12:
				printfSolo("Salio del menu!!!\n");
				system("pause");
				break;
		}
	}while(opcion != 12);

	return EXIT_SUCCESS;
}


