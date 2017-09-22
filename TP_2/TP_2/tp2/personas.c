#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "personas.h"

void Estado(EPersonas lista[],int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        lista[i].estado = 0;
    }
}



int espacioLibre(EPersonas lista[], int t)
{
    int i, ind;

    for (i=0; i<t; i++)
    {
        if (lista[i].estado == 0)
        {
            ind = i;
            break;
        }
        else
        {
            ind = -1;
        }
    }
    return ind;
 }


 void MostrarPersona(EPersonas lista)
{
    printf("%d--%s--%d", lista.dni,lista.nombre,lista.edad);
}


void AgregarPersona(EPersonas lista[],int t)
{
    int ind;
    ind = espacioLibre(lista,t);
    if (ind != -1)
    {
        printf("ingresar dni: ");
        scanf("%d", &lista[ind].dni);
        printf("ingresar nombre: ");
        fflush(stdin);
        gets(lista[ind].nombre);
        printf("ingresar edad: ");
        scanf("%d", &lista[ind].edad);
        }
        lista[ind].estado = 1;
}



void ListaOrdenada(EPersonas lista[], int t)
{
    int i, j;
    EPersonas auxEPersonas;

    for(i=0; i<t-1; i++)
    {
        if (lista[i].estado != 0 )
        {
            for(j=i+1; j<t; j++)
            {
                if (lista[j].estado != 0)
                {
                    if(stricmp(lista[i].nombre, lista[j].nombre)>0)
                    {
                        auxEPersonas=lista[i];
                        lista[i]=lista[j];
                        lista[j]=auxEPersonas;

                    }
                    else if(stricmp(lista[i].nombre, lista[j].nombre)==0)
                    {
                        if(lista[i].dni > lista[j].dni)
                        {
                            auxEPersonas=lista[i];
                            lista[i]=lista[j];
                            lista[j]=auxEPersonas;
                        }
                        }
                        }

                        }
                        }

                        }
                        }

    int validPositivos (int num)
{
    int flag = 0;
    if (num > 0)
    {
        flag = 1;
    }
    return flag;
}


    int buscarPorDni(EPersonas lista[], int dni, int t)
{
    int i, ind;

    for (i=0; i<t; i++)
    {
        if (lista[i].estado != 0 && dni == lista[i].dni)
        {
            ind = i;
        }
        else
        {
            ind = -1;
        }

    }
    return ind;
}

void BorrarPersonas(EPersonas lista[],int t)
{
    int validDNI;
    int ind;
    char resp;

    printf("ingrese dni:");
    scanf("%d",&validDNI);
    ind = buscarPorDni(lista,validDNI,t);
    if (ind == -1)
    {
        printf("el dni no existe");
    }
    else
    {
        MostrarPersona(lista[ind]);
        printf("desea borrar a la persona? s/n :");
        resp = getche();
        if (resp == 's')
        {
            lista[ind].estado = 0;
            printf("hecho");
        }
        else
        {
            printf("cancelado");
        }

    }
}

void contEdad (EPersonas lista[], int t, int cont[])
{
    int i;

    for (i=0; i<t; i++)
    {
        if (lista[i].estado != 0)
        {
            if (lista[i].edad < 18)
            {
                cont[0] = cont [0] + 1;
            }
            else if(lista[i].edad >= 18 && lista[i].edad <= 35)
            {
                cont[1] = cont [1] +1;
            }
            else
            {
                cont[2] = cont [2] +1;
            }
        }

    }
}

int Maximo (int cont[], int t)
{
    int i, max=0;
    for (i=0; i<t; i++)
    {
        if (max == 0 || cont[i] > max)
        {
            max = cont[i];
        }
    }
    return max;
}
