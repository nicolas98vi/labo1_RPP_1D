/*
 * Perritos2.h
 *
 *  Created on: 22 oct. 2021
 *      Author: nicro
 */

#ifndef PERRITOS_H_
#define PERRITOS_H_
#define TAMPerrito 5

struct{
int id;
char nombre[21];
char raza[21];
int edad;
}typedef ePerro;

/// @fn int modificarPerrito(ePerro*, int)
/// @brief Modifica  los datos de la estructura ePerro
///
/// @param perritoModificar
/// @param listado
/// @return
int menuModificarPerrito(ePerro* perritoModificar,int listado);


/// @fn void mostrarPerritos(ePerro*, int)
/// @brief Muestra los datos de la estructura ePerro
///
/// @param perritos
/// @param tam
void mostrarPerritos(ePerro* perritos,int tam);


/// @fn void mostrarPerrito(ePerro*, int)
/// @brief busca la ID ingresada y devuelve la posicion en la lista del ID.
///
/// @param perritos
/// @param i
void mostrarPerrito(ePerro* perritos,int i);


/// @fn void promedioEdadPerritos(ePerro*, int)
/// @brief suma las edades de los perros y da el promedio
///
/// @param perritos
/// @param tam
void promedioEdadPerritos(ePerro* perritos,int tam);

/// @fn int buscarPerritoID(ePerro*, int, int)
/// @brief
///
/// @param perritos
/// @param tam
/// @param ID
/// @return
int buscarPerritoID(ePerro* perritos,int tam,int ID);

/// @fn int cargarPerrito(ePerro*, int, int, int)
/// @brief D a de alta un perro.
///
/// @param perritos
/// @param tam
/// @param ID
/// @param i
/// @returndevuelve un 0 si hay un error y 1 si se pudo cargar.
int cargarPerrito(ePerro* perritos,int tam,int ID,int i);

#endif /* PERRITOS_H_ */
