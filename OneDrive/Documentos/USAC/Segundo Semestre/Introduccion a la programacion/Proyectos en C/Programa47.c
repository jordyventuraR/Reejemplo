//Programa que pide un valor del 1 al 10 y devuelve los primeros 10 multiplos de dicho numero
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero;

    //Entrada de datos
    printf("Ingrese la tabla de que numero quiere: ");
    scanf("%i", &numero);

    //Procesamiento
    for ( int i = numero; i <=numero*10; i=i+numero)
    {
        printf(" %i, ", i);
    }
    
    //Cierre
    getch();
    return 0;
}
