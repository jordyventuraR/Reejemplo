/*Programa5 Jordy Ventura 202300587: Escribe un programa que convierta 
una temperatura en grados Celsius a Fahrenheit, o bien 
de grados Fahrenheit a Celsius, según la opción seleccionada por el usuario.*/
#include<stdio.h>
#include<conio.h>

int main()
{
    char opcion;
    float celsius, farenheint;
    printf("Ingrese 'C' para pasarlo a Farenheit, o 'F' para pasarlo a celsius: ");
    scanf(" %c", &opcion);
    switch (opcion)
    {
    case 'c':
    case 'C':
        printf("Ingrese la temperatura en celsius: ");
        scanf(" %f", &celsius);
        printf("El valor de la temperatura en Farenheint: %f", 1.8*celsius+32);
        break;
    
    case 'f':
    case 'F':
        printf("Ingrese la temperatura en Farenheint: ");
        scanf(" %f", &farenheint);
        printf("El valor de la temperatura en Farenheint: %f", ((farenheint-32)*5)/9);
        break;

    default:
        break;
    }

    getch();
    return 0;
}
