#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int flagNumeroA=0;
    int flagNumeroB=0;
    int flagSum=0;
    int flagRes=0;
    int flagMult=0;
    int flagDiv=0;
    int flagFacto=0;
    float numeroA=0;
    float numeroB=0;
    float sum=0;
    float res=0;
    float mult=0;
    float div=0;
    int facto=0;
    int val;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        if (flagNumeroA == 0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%.3f)\n",numeroA);
        }
        if (flagNumeroB == 0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%.3f)\n",numeroB);
        }
        if (flagSum == 0)
        {
            printf("3- Calcular la suma (A+B)\n");
        }
        else
        {
            printf("3- Calcular la suma (A+B) = %.3f\n",sum);
        }
        if (flagRes == 0)
        {
            printf("4- Calcular la resta (A-B)\n");
        }
        else
        {
            printf("4- Calcular la resta (A-B) = %.3f\n",res);
        }
        if (flagDiv == 0)
        {
            printf("5- Calcular la division (A/B)\n");
        }
        else
        {
            printf("5- Calcular la division (A/B) = %.3f\n",div);
        }
        if (flagMult == 0)
        {
            printf("6- Calcular la multiplicacion (A*B)\n");
        }
        else
        {
            printf("6- Calcular la multiplicacion (A*B) = %.3f\n",mult);
        }
        if (flagFacto == 0)
        {
            printf("7- Calcular el factorial (A!)\n");
        }
        else
        {
            printf("7- Calcular el factorial (A!) = %d\n",facto);
        }
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Ingrese la opcion que desea usar: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numeroA=funIngresarNum();
                flagNumeroA=1;
                break;
            case 2:
                numeroB=funIngresarNum();
                flagNumeroB=1;
                break;
            case 3:
                sum=funSum(numeroA, numeroB);
                printf("suma: %f\n", sum);
                flagSum=1;
                system("pause");
                system("cls");
                break;
            case 4:
                res=funRes(numeroA, numeroB);
                printf("resta: %f\n", res);
                flagRes=1;
                system("pause");
                system("cls");
                break;
            case 5:
                val=funCero(numeroA, numeroB);
                if(val!=0){
                   div=funDiv(numeroA, numeroB);
                   printf("division: %.3f\n", div);
                   flagDiv=1;
                       system("pause");
                       system("cls");
                }
                else{
                   printf("operacion invalida\n");
                       system("pause");
                       system("cls");
                }

                break;
            case 6:
                mult=funMult(numeroA, numeroB);
                printf("multiplicacion: %3f\n", mult);
                flagMult=1;
                       system("pause");
                       system("cls");




                break;
            case 7:
                facto=funFacto(numeroA);
                if(facto!=0){
                  printf("factorial: %d\n", numeroA, facto);
                  flagFacto=1;
                       system("pause");
                       system("cls");
                }
                else{
                    printf("operacion invalida\n");
                       system("pause");
                       system("cls");
                }

                break;
            case 8:
                sum=funSum(numeroA, numeroB);
                printf("suma: %f\n", sum);
                res=funRes(numeroA, numeroB);
                printf("resta: %f\n", res);
                val=funCero(numeroA, numeroB);
                if(val!=0){
                   div=funDiv(numeroA, numeroB);
                   printf("division: %.3f\n", div);

                }
                else{
                   printf("operacion invalida\n");

                }
                mult=funMult(numeroA, numeroB);
                printf("multiplicacion: %3f\n", mult);
                facto=funFacto(numeroA);
                if(facto!=0){
                  printf("factorial: %d\n", numeroA, facto);
                       system("pause");
                       system("cls");
                }
                else{
                    printf("operacion invalida\n");
                       system("pause");
                       system("cls");
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }



}   return 0;
}
