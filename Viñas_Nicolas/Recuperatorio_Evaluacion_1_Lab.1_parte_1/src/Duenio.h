/*
 * Duenio2.h
 *
 *  Created on: 22 oct. 2021
 *      Author: nicro
 */

#ifndef DUENIO_H_
#define DUENIO_H_
#define tamDuenio 5

struct{

	int id;
	char nombre[41];
	int telefono;

}typedef Duenio;

int modificarDuenio(Duenio* DuenioModificar,int listado);

void mostrarDuenio(Duenio* DuenioListado,int tam);


#endif /* DUENIO_H_ */
