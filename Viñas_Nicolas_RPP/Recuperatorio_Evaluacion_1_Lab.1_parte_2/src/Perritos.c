#include "PerritoEstadiaDuenio.h"

int menuModificarPerrito(ePerro* perritoModificar,int listado){
	int retorno;
	int opciones;
	retorno=0;

   if(!producto_verificarConfirmacion("\nIngrese 's' para confirmar el modificar perro: ")){
		do{
			pedirEntero(&opciones,"-------------------------------------\n"
					 "1. MODIFICAR EDAD\n"
					 "2. MODIFICAR NOMBRE\n"
					 "3. MODIFICAR RAZA\n"
					 "4. SALIR\n"
					 "-------------------------------------\n"
					 "Ingrese una opcion: ", "ERROR AL INGRESAR NUMERO\n"
					 "-------------------------------------\n"
					 					 "1. MODIFICAR EDAD\n"
					 					 "2. MODIFICAR NOMBRE\n"
					 					 "3. MODIFICAR RAZA\n"
					 					 "4. SALIR\n"
					 					 "-------------------------------------\n"
					 					 "Ingrese una opcion: ", 0, 5);
			switch(opciones){

			case 1:
				pedirEntero(&perritoModificar[listado].edad,"Ingrese la edad del perro: ","ERROR  AL INGRESAR EDAD\nIngrese la edad del perro:",0, 25);
		    break;
			case 2:
				pedirCadena(perritoModificar[listado].nombre,"Ingrese el nombre del perro: ","ERROR  AL INGRESAR NOMBRE\nIngrese el nombre del perro: ",21);
		    break;
			case 3:
				pedirCadena(perritoModificar[listado].raza,"Ingrese la raza del perro: ","ERROR  AL INGRESAR RAZA\nIngrese la raza del perro: ", 21);
		    break;
			case 4:
				printfSolo("Esta saliendo del menu para cambiar un perro...");
		    break;
			}
		}while(opciones!=4);

		retorno=1;
   }
	mostrarPerrito(perritoModificar,listado);

	return retorno;
}


void mostrarPerritos(ePerro* perritos,int tam){
	int i;
	printf(" ID         Nombre del perrito           Edad del perrito         Raza del perrito\n");
	for(i=0;i<tam;i++){
		if(perritos[i].id>0){
			mostrarPerrito(perritos, i);
		}

	}
}

void mostrarPerrito(ePerro* perritos,int i){
	printf("%d %18s %24d %26s\n",perritos[i].id,perritos[i].nombre,perritos[i].edad,perritos[i].raza);
}


void promedioEdadPerritos(ePerro* perritos,int tam){
	int i;
    float suma;
    suma=0;
    float promedio;

	for(i=1;i<tam;i++){

		suma=suma+perritos[i].edad;

	}
	promedio=suma/(float)tam;

	printf("El promedio en edades de los %d perros ingresados es %.2f\n",tam,promedio);
}

int buscarPerritoID(ePerro* perritos,int tam,int ID){
	int i;
	int listado;
	for(i=0;i<tam;i++){
		if(perritos[i].id==ID){
			listado=i;
		    break;
		}
	}
	return listado;
}



int cargarPerrito(ePerro* perritos,int tam,int ID,int i)
{
	int retorno;
	retorno=0;

	perritos[i].id=ID;

	pedirEntero(&perritos[i].edad,"Ingresar la edad del perrito","ERROR AL INGRESAR. Ingresar la edad del perrito",0, 13);

	pedirCadena(perritos[i].nombre, "Ingrese el nombre del perrito: ","FALLO AL INGRESAR. Ingrese el nombre del perrito: ",21);

	pedirCadena(perritos[i].raza, "Ingrese la raza del perrito: ","FALLO AL INGRESAR. Ingrese la raza del perrito: ",21);

	retorno=1;


	return retorno;
}


