#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float funIngresarNum()
{
    float numero;
    printf("ingrese numero: ");
    scanf("%f",&numero);
    system("cls");
    return numero;
}

float funSum(float numeroA,float numeroB)
{
    float resul;
    resul = numeroA + numeroB;
    return resul;
}

float funRes(float numeroA,float numeroB)
{
    float resul;
    resul = numeroA-numeroB;
    return resul;
}

float funDiv(float numeroA,float numeroB)
{
    float resul;
    resul = numeroA/numeroB;
    return resul;
}

float funMult (float numeroA,float numeroB)
{
    long double resul;
    resul = numeroA*numeroB;
    return resul;
}




float funComa (float numero)
{
    int ret;
    if (numero - (int) numero == 0)
    {
        ret = 1;
    }
    else
    {
        ret = 0;
    }
    return ret;
}

float funCero (float numeroA,float numeroB)
{
    int resp=0;
    while (numeroA!= (float) 0 && numeroB != (float) 0)
    {
        resp=1;
        break;
    }
    return resp;
}

float funFacto (float numeroA)
{
    int resp = 1;
    int cont;
    {
        for (cont = (int) numeroA; cont > 1; cont--)
        {
            resp= resp*cont;
        }
    }

    return resp;
}

