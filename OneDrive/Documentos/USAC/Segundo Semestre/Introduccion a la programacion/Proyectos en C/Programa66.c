//Programa66 que evalua una operacion 
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char operacion;
    float numero1, numero2, suma, resta, multiplicacion, division;

    //Entrada de datos
    printf("Ingrese el numero 1: ");
    scanf("%f", &numero1);

    regreso:
    printf("\nOperacion: ");
    scanf(" %c", &operacion);

    //Procesamiento
    if (operacion=='+'){
        printf("Ingrese el segundo dato: ");
        scanf("%f", &numero2);
        suma=numero1+numero2;
        printf("La suma es: %0.2f", suma);
    }else if (operacion=='-'){
        printf("Ingrese el segundo dato: ");
        scanf("%f", &numero2);
        resta=numero1-numero2;
        printf("La resta es: %0.2f", resta);
    }else if (operacion=='*'){
        printf("Ingrese el segundo dato: ");
        scanf("%f", &numero2);
        multiplicacion=numero1*numero2;
         printf("El producto  es: %0.2f", multiplicacion);
    }else if (operacion=='/'){
        regresar: 
        printf("\nIngrese el segundo dato: ");
        scanf("%f", &numero2);
        if (numero2==0){
            printf("El numero 2 no puede ser 0: ");
            goto regresar;
        }else{
            division=numero1/numero2;
            printf("El cociente es: %0.2f", division);
        }
    }else{
        printf("Operacion no reconocida: ");
        goto regreso;
    }

    //cierre
    getch();
    return 0;
}
