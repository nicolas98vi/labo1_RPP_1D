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



/// @fn void mostrarDuenios(Duenio*, int)
/// @brief muestra todos los duenios
///
/// @param DuenioListado
/// @param tam
void mostrarDuenios(Duenio* DuenioListado,int tam);

/// @fn void mostrarDuenio(Duenio*, int)
/// @brief muestra un solo duenio
///
/// @param DuenioListado
/// @param i
void mostrarDuenio(Duenio* DuenioListado,int i);

/// @fn int menuModificarDuenio(Duenio*, int)
/// @brief permite modificar una o varias partes del duenio elejido por ID en un menu.
///
/// @param DuenioListado
/// @param listado
/// @return
int menuModificarDuenio(Duenio* DuenioListado,int listado);

/// @fn int buscarDuenioID(Duenio*, int, int)
/// @brief busca la ID ingresada y devuelve la posicion en la lista del ID.
///
/// @param DuenioEstructura
/// @param tam
/// @param ID
/// @return
int buscarDuenioID(Duenio* DuenioEstructura,int tam,int ID);


#endif /* DUENIO_H_ */
