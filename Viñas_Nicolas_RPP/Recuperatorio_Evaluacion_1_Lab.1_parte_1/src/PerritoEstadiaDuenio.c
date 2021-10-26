#include "PerritoEstadiaDuenio.h"






int Estadia_agregarEstadia(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int tam, int tamPerro,int TamanioDuenios, int ultimoId)
{
	int retorno = 0;
	int index = producto_buscarEspacioLibre(estadia, tam);

	if(index != -1)
	{
		 printfSolo("Ingresar datos del ingreso----------------------------------------------\n");
		if(!producto_cargarUno(perritos, estadia, DuenioEstructura,tam,tamPerro,TamanioDuenios,ultimoId))
		{
			retorno = 1;
		}
		else
		{
			retorno = -1;
		}
	}else{

	}

	return retorno;
}





int producto_cargarUno(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int i,int tamPerro,int TamanioDuenios,int ultimoId)
{
	int j;
	int retorno = -1;

	estadia[i].id = ultimoId + 1;



	printfSolo("Lista de duenios");

	mostrarDuenios(DuenioEstructura,TamanioDuenios);

	pedirCadena(estadia[i].nombreDuenio,"Ingrese el nombre del duenio ", "ERROR AL INGRESAR NOMBRE", 21);


	for(j=0;j<TamanioDuenios;j++){
		  if(strcmp(DuenioEstructura[j].nombre,estadia[i].nombreDuenio)){
			  estadia[i].telefonoContacto=DuenioEstructura[j].telefono;
		  }
	}


	//pedirEntero(&estadia[i].telefonoContacto, "Ingrese el telefono del duenio ", "ERROR AL INGRESAR NOMBRE ",39999999,50000000);

	printfSolo("Lista de perros");

	mostrarPerritos(perritos,tamPerro);

	pedirEntero(&estadia[i].idPerro, "Ingrese la ID del perrito ", "ERROR AL INGRESAR ID",6999,7003);

	pedirEntero(&estadia[i].fecha, "Ingrese la dia ", "ERROR AL INGRESAR FECHA",0,30);




	if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar el alta de la estadia: "))
	{
		estadia[i].isEmpty = LLENO;
		retorno = 0;
	}

	return retorno;
}

int menuModificarEstadia(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int listado,int tamPerro,int TamanioDuenios){
	int retorno;
	int opciones;
	retorno=0;
    int i;

    if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar el modificar estadia: ")){
    	do{

    		pedirEntero(&opciones,"-------------------------------------\n"
    				 "1. MODIFICAR NOMBRE DEL DUENIO\n"
    				 "2. MODIFICAR ID DEL PERRO\n"
    				 "3. MODIFICAR FECHA\n"
    				 "4. SALIR\n"
    				 "-------------------------------------\n"
    				 "Ingrese una opcion: ", "ERROR AL INGRESAR NUMERO\n"
					 "-------------------------------------\n"
					     				 "1. MODIFICAR NOMBRE DEL DUENIO\n"
					     				 "2. MODIFICAR ID DEL PERRO\n"
					     				 "3. MODIFICAR FECHA\n"
					     				 "4. SALIR\n"
					     				 "-------------------------------------\n"
					     				 "Ingrese una opcion: ", 0, 5);
    		switch(opciones){

    		case 1:
    			printfSolo("Lista de duenios");

    				mostrarDuenios(DuenioEstructura,TamanioDuenios);

    				pedirCadena(estadia[listado].nombreDuenio,"Ingrese el nombre del duenio: ", "ERROR AL INGRESAR NOMBRE\nIngrese el nombre del duenio: ", 21);


    				for(i=0;i<TamanioDuenios;i++){
    					  if(strcmp(DuenioEstructura[i].nombre,estadia[listado].nombreDuenio)){
    						  estadia[i].telefonoContacto=DuenioEstructura[listado].telefono;
    					  }
    				}
    	    break;
    		case 2:
    			printfSolo("Lista de perros");
    			mostrarPerritos(perritos,tamPerro);
    			pedirEntero(&estadia[i].idPerro, "Ingrese la ID del perrito: ", "ERROR AL INGRESAR ID\nIngrese la ID del perrito:",6999,7003);
    	    break;
    		case 3:
    			pedirEntero(&estadia[i].fecha, "Ingrese la dia: ", "ERROR AL INGRESAR FECHA\nIngrese la dia:",0,30);
    	    break;
    		case 4:
    			printfSolo("Esta saliendo del menu para cambiar una estadia...");
    	    break;
    		}
    	}while(opciones!=4);

    	retorno=1;
    }

    mostrarEstadia(estadia, listado);

	return retorno;
}



void  subMenuModificar(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int tamanioIngreso, int tamPerro,int TamanioDuenios){
	int retorno;
	int opciones;
	int listado;
	int listadoEncontrado;

	do{

			pedirEntero(&opciones,"1. Modificar perrito\n2. Modificar estadia\n3. Modificar Duenio\n4. Salir\nIngrese un numero: ", "ERROR AL SELECCIONAR EN EL MENU", 0, 5);
		switch(opciones){
		case 1:
			mostrarPerritos(perritos ,tamPerro);
			pedirEntero(&listado,"Ingrese la ID del perro: ", "ERROR AL INGRESAR LA ID", 7000, 7005);
			listadoEncontrado=buscarPerritoID(perritos,tamPerro,listado);
			retorno=menuModificarPerrito(perritos,listadoEncontrado);
			mostrar(retorno," ","ERROR AL CAMBIAR PERRO","Exito al cambiar Perrito");
			mostrarPerritos(perritos,tamPerro);
			break;
		case 2:
			mostrarEstadias(estadia,tamanioIngreso);
			pedirEntero(&listado,"Ingrese la ID de estadia: ", "ERROR AL INGRESAR LA ID", 99999, 100101);
			listadoEncontrado=buscarEstadiaID(estadia,tamanioIngreso,listado);
			retorno=menuModificarEstadia(perritos, estadia, DuenioEstructura, listadoEncontrado, tamPerro, TamanioDuenios);
			mostrar(retorno," ","ERROR AL CAMBIAR DATOS","Exito al cambiar fecha de estadia");
			mostrarEstadia(estadia,tamanioIngreso);
			break;
		case 3:
			mostrarDuenios(DuenioEstructura,TamanioDuenios);
			pedirEntero(&listado,"Ingrese la ID del duenio: ", "ERROR AL INGRESAR LA ID", 2999, 3005);
			listadoEncontrado=buscarDuenioID(DuenioEstructura,TamanioDuenios,listado);
			retorno=menuModificarDuenio(DuenioEstructura, listado);
			mostrar(retorno,"","CAMBIAR DUENIO CANCELADO","Exito al cambiar dueño");
			mostrarDuenio(DuenioEstructura,TamanioDuenios);

			break;
		case 4:
			printfSolo("Salio del menu de modificaciones\n");
			break;
		}
	}while(opciones!=4);
}





void mayorEstadiaDePerro(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro){
	int i;
	int j;


	int contadorUno;
	contadorUno=0;
	int mayor;
	mayor=0;
	char guardarNombre[21];

		for(i=0;i<tamPerro;i++){
			for(j=0;j<tamanioIngreso;j++){
					if(perritos[i].id==estadia[j].idPerro && estadia[j].isEmpty==LLENO){
						contadorUno++;
					}
				}
			if(contadorUno>mayor){
				contadorUno=mayor;
				strcpy(guardarNombre,perritos[i].nombre);
			}
	}

		printf("El nombre del perro con mas estadias es %s\n",guardarNombre);
}

void listadoDePerroEstadia(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro){

	int i;
	int j;

	printfSolo(" Nombre dell perro        Raza del perro        Edad del perro        Id de la estadia       Nombre del dueño      Telefono del dueño      Fecha de ingreso");
	for(i=0;i<tamPerro;i++){
				for(j=0;j<tamanioIngreso;j++){
					if(perritos[i].id==estadia[j].idPerro && estadia[j].isEmpty==LLENO){
						printf("%10s %25s %19d %23d %21s %24d %20d\n",perritos[i].nombre,perritos[i].raza,perritos[i].edad,estadia[j].id,estadia[j].nombreDuenio,estadia[j].telefonoContacto,estadia[j].fecha);
					}
				}
     }
}



