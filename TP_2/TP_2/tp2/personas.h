#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersonas;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int EspacioLibre(EPersonas lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersonas lista[], int dni);



/**
 *
 *
 *
 *
 */
void Estado(EPersonas lista[],int t);


/**
 *
 * funcion para mostrar personas
 *
 *
 */
void MostrarPersona(EPersonas lista);


/**
 *
 * funcion para agregar personas
 *
 *
 */
void AgregarPersona(EPersonas lista[],int t);



/**
 *
 * funcion para mostrar nombres ordenados
 *
 *
 */
void ListaOrdenada(EPersonas lista[], int t);


/**
 *
 * validar positivos
 *
 *
 */
int validPositivos (int num);



/**
 *
 * funcion para borrar personas
 *
 *
 */
void BorrarPersonas(EPersonas lista[],int t);





/**
 *
 * contador de edad
 *
 *
 */
void contEdad (EPersonas lista[], int t, int cont[]);





/**
 *
 * .
 * maximo
 *
 */
int Maximo (int cont[], int t);

#endif // FUNCIONES_H_INCLUDED

