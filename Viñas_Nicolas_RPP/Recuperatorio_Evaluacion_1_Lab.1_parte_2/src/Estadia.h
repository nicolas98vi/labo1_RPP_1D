/*
 * Estadia2.h
 *
 *  Created on: 22 oct. 2021
 *      Author: nicro
 */

#ifndef ESTADIA_H_
#define ESTADIA_H_
#define TAM 100


struct{
int id;
char nombreDuenio[21];
int telefonoContacto;
int idPerro;
char fecha[30];
int isEmpty;
}typedef EstadiaDiaria;

/// @fn int initEmployees(EstadiaDiaria*, int)
/// @brief inicializa los listados de la estructura EstadiaDiaria
///
/// @param list
/// @param len
/// @return
int initEmployees(EstadiaDiaria* list, int len);





/// @fn int producto_buscarEspacioLibre(EstadiaDiaria[], int)
/// @brief busca un isEmpty que este VACIO
///
/// @param Estadia
/// @param tam
/// @return
int producto_buscarEspacioLibre(EstadiaDiaria Estadia[], int tam);


/// @fn int buscarEstadiaID(EstadiaDiaria*, int, int)
/// @brief busca la ID ingresada y devuelve la posicion en la lista del ID.
///
/// @param estadia
/// @param tam
/// @param ID
/// @return
int buscarEstadiaID(EstadiaDiaria* estadia,int tam,int ID);


/// @fn int bajaLogica(EstadiaDiaria*, int)
/// @brief Da de baja una estadia
///
/// @param ingresoDeTiempo
/// @param tamanio
/// @return
int bajaLogica(EstadiaDiaria* ingresoDeTiempo,int tamanio);

/// @fn void mostrarEstadia(EstadiaDiaria*, int)
/// @brief Muestra las estadias ingresadas
///
/// @param ingresoDeTiempo
/// @param tamanio
void mostrarEstadias(EstadiaDiaria* ingresoDeTiempo,int tamanio);

/// @fn void mostrarEstadia(EstadiaDiaria*, int)
/// @brief muestra una estadia ingresada
///
/// @param ingresoDeTiempo
/// @param i
void mostrarEstadia(EstadiaDiaria* ingresoDeTiempo,int i);

/// @fn void contadorDeAlan(EstadiaDiaria*, int)
/// @brief busca estadias que tengan un Alan de duenio de perrito y los cuenta
///
/// @param estadia
/// @param tamanioEstadia
void contadorDeAlan(EstadiaDiaria* estadia,int tamanioEstadia);

/// @fn void contadorDeLucia(EstadiaDiaria*, int)
/// @brief busca estadias que tengan un L de duenio de perrito y los cuenta
///
/// @param estadia
/// @param tamanioEstadia
void contadorDeLucia(EstadiaDiaria* estadia,int tamanioEstadia);

#endif /* ESTADIA_H_ */
