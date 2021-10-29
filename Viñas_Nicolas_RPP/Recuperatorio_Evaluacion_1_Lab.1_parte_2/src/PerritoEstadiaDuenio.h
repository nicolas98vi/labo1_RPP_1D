/*
 * PerritoEstadiaDuenio2.h
 *
 *  Created on: 22 oct. 2021
 *      Author: nicro
 */

#ifndef PERRITOESTADIADUENIO_H_
#define PERRITOESTADIADUENIO_H_

#include "Perritos.h"
#include "Estadia.h"
#include "Biblioteca.h"
#include "Duenio.h"


/// @fn int Estadia_agregarEstadia(ePerro*, EstadiaDiaria*, Duenio*, int, int, int, int)
/// @brief inicia la dada de alta de una estadia, busca por otra funcion un espacio vacio y lo usa.
///
/// @param perritos
/// @param estadia
/// @param DuenioEstructura
/// @param tam
/// @param tamPerro
/// @param TamanioDuenios
/// @param ultimoId
/// @return
int Estadia_agregarEstadia(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int tam, int tamPerro,int TamanioDuenios, int ultimoId);


/// @fn int producto_cargarUno(ePerro*, EstadiaDiaria*, Duenio*, int, int, int, int)
/// @brief te permite cargar una estadia
///
/// @param perritos
/// @param estadia
/// @param DuenioEstructura
/// @param i
/// @param tamPerro
/// @param TamanioDuenios
/// @param ultimoId
/// @return
int producto_cargarUno(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int i,int tamPerro,int TamanioDuenios,int ultimoId);

/// @fn int menuModificarEstadia(ePerro*, EstadiaDiaria*, Duenio*, int, int, int)
/// @brief es un menu que permite seleccionar la parte de la estadia a modificar.
///
/// @param perritos
/// @param estadia
/// @param DuenioEstructura
/// @param listado
/// @param tamPerro
/// @param TamanioDuenios
/// @return
int menuModificarEstadia(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int listado,int tamPerro,int TamanioDuenios);



/// @fn void subMenuModificar(ePerro*, EstadiaDiaria*, Duenio*, int, int, int)
/// @brief Modifica los datos dentro de las estructuras
///
/// @param perritos
/// @param estadia
/// @param DuenioEstructura
/// @param tamanioIngreso
/// @param tamPerro
/// @param TamanioDuenios
void subMenuModificar(ePerro* perritos,EstadiaDiaria* estadia,Duenio* DuenioEstructura,int tamanioIngreso, int tamPerro,int TamanioDuenios);

/// @fn void mayorEstadiaDePerro(ePerro*, EstadiaDiaria*, int, int)
/// @brief Cuenta las estadias que tiene cada perro y compara para ver cual es el mayor
///
/// @param perritos
/// @param estadia
/// @param tamanioIngreso
/// @param tamPerro
void mayorEstadiaDePerro(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro);


/// @fn void listadoDePerroEstadia(ePerro*, EstadiaDiaria*, int, int)
/// @brief Muestra los perros con sus estadias
///
/// @param perritos
/// @param estadia
/// @param tamanioIngreso
/// @param tamPerro
void listadoDePerroEstadia(ePerro* perritos,EstadiaDiaria* estadia,int tamanioIngreso, int tamPerro);




#endif /* PERRITOESTADIADUENIO_H_ */
