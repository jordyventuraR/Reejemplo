//Programa que pide el valor de 10 numeros y devuelve la suma de los ultimos  valores numericos
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero=0, suma=0;

    for (int i = 1; i<=10; i++)
    {
        printf("Ingrese el dato %i: ", i);
        scanf("%i", &numero);
        if (i>=5)
        {
            suma=numero+suma;
        }
    }
    printf("La suma es: %i", suma);

    //Cierre
    getch();
    return 0;
}
