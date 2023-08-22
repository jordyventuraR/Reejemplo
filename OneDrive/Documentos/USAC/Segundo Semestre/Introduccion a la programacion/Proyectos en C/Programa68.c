//Programa 68 suma valor en bucle
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero=0, suma=0;
    char operacion;

    do
    {
        printf("\nIngrese un numero: ");
        scanf("%i", &numero);
        suma=suma+numero;
        printf("La suma de los numeros es: %i", suma);
        printf("\nSi desea sumar otro dato ingrese s o S: ");
        scanf(" %c", &operacion);
        printf("\n usted ingreso: %c", operacion);
    }while (operacion == 's' || operacion == 'S');

    printf("\nGracias amigo...");
    
    //Cierre
    getch();
    return 0;
}
