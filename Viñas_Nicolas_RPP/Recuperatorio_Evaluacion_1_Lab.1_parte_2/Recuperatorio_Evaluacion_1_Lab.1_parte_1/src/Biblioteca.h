/*
 * Biblioteca.h
 *
 *  Created on: 22 oct. 2021
 *      Author: nicro
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LLENO 1
#define VACIO 0

/// @fn void pedirEntero(int*, char*, char*, int, int)
/// @brief Te permite ingresar un entero que si ingresas mas del maximo y menos del minimo te salara el mensaje de error.
///
/// @param entero
/// @param mensaje
/// @param mensajeError
/// @param min
/// @param max
void pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max);

/// @fn void pedirCaracter(char*, char*)
/// @brief te permite ingresar un caracter.
///
/// @param caracter
/// @param mensaje
void pedirCaracter(char* caracter, char* mensaje);


/// @fn void pedirCadena(char*, char*, char*, int)
/// @brief te deja ingresar una cadena de caracteres pero si es mayor que el maximo que almacena te mostrara el mensaje de error
///
/// @param cadena
/// @param mensaje
/// @param mensajeError
/// @param max
void pedirCadena(char* cadena, char* mensaje, char* mensajeError, int max);


/// @fn int producto_verificarConfirmacion(char*)
/// @brief pide que preciones "s" en el mensaje paradar a entender que estas de acuerdo.
///
/// @param mensaje
/// @return
int producto_verificarConfirmacion(char* mensaje);


/// @fn void mostrar(int, char*, char*, char*)
/// @brief Devuelve un mensaje segun el dato que ingresen en opcion
///
/// @param opcion
/// @param mesajeUno
/// @param mesajeDos
/// @param mesajeTres
void mostrar(int opcion,char* mesajeUno,char* mesajeDos,char* mesajeTres);

/// @fn void mostrarSolo(char*)
/// @brief Tiene un printf que muestra
///
/// @param mensaje
void printfSolo(char* mensaje);


#endif /* BIBLIOTECA_H_ */
