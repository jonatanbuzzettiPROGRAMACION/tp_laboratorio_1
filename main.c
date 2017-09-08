#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
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
        printf("1- Ingresar 1er operando (A=%.3f)\n", numeroA);
        printf("2- Ingresar 2do operando (B=%.3f)\n", numeroB);
        printf("3- Calcular la suma (A+B)=%.3f\n", sum);
        printf("4- Calcular la resta (A-B)=%.3f\n", res);
        printf("5- Calcular la division (A/B)=%.3f\n", div);
        printf("6- Calcular la multiplicacion (A*B)=%.3f\n", mult);
        printf("7- Calcular el factorial (A!)=%d\n", facto);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numeroA=funIngresarNum();
                break;
            case 2:
                numeroB=funIngresarNum();
                break;
            case 3:
                sum=funSum(numeroA, numeroB);
                printf("suma: %f\n", sum);
                system("pause");
                system("cls");
                break;
            case 4:
                res=funRes(numeroA, numeroB);
                printf("resta: %f\n", res);
                system("pause");
                system("cls");
                break;
            case 5:
                val=funCero(numeroA, numeroB);
                if(val!=0){
                   div=funDiv(numeroA, numeroB);
                   printf("division: %.3f\n", div);
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
                       system("pause");
                       system("cls");




                break;
            case 7:
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
