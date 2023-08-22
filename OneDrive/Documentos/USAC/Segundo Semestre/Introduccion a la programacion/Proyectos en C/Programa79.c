//Programa79 es una programa que añade una variable a otra
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //Variables
    char nombres[19];
    char apellidos[19];
    char nombrecompleto[39];

    //Entrada
    printf("Ingrese su nombre: ");
    gets(nombres);
    printf("Ingrese su apellido: ");
    gets(apellidos);

    //Procedimiento
    strcat(nombrecompleto, nombres);
    strcat(nombrecompleto, " ");
    strcat(nombrecompleto, apellidos);

    //salida
    printf("Su dato es: %s", nombrecompleto);

    //cierre
    getch();
    return 0;
}
