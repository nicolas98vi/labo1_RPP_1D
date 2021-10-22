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
int fecha;
int isEmpty;
}typedef EstadiaDiaria;

/// @fn int initEmployees(EstadiaDiaria*, int)
/// @brief inicializa los listados de la estructura EstadiaDiaria
///
/// @param list
/// @param len
/// @return
int initEmployees(EstadiaDiaria* list, int len);

/// @fn int ingresarDatosDiarios(EstadiaDiaria*, int)
/// @brief Da a ingresar los datos de una estadia
///
/// @param ingresoDeTiempo
/// @param lista
/// @return

int ingresarDatosDiarios(EstadiaDiaria* ingresoDeTiempo,int tamanio,int lista);



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
void mostrarEstadia(EstadiaDiaria* ingresoDeTiempo,int tamanio);



#endif /* ESTADIA_H_ */
