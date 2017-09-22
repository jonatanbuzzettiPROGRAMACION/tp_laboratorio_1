#include <stdio.h>
#include <stdlib.h>
#include "personas.h"
#define TAM 30

int main()
{
    char seguir='s';
    int opcion;
    EPersonas listaPersona[TAM];
    cambiarEstado(listaPersonas,TAM);

    do
    {
        opcion = mostrarMenu("1- Agregar persona\n2- Borrar persona\n3- Imprimir lista ordenada por  nombre\n4- Imprimir grafico de edades\n5- Salir");
        switch(opcion)
        {
            case 1:
                AgregarPersona(listaPersona,TAM);
                break;
            case 2:
                BorrarPersonas(listaPersona,TAM);
                break;
            case 3:
                ListaOrdenada(listaPersona,TAM);
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    while(seguir=='s');

    return 0;
}
