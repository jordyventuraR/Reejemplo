//Programa que muestra la suma de 10 valores y saca su promedio
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int i=1, valor, suma, promedio;

    //Entrada de datos
    while (i<=10)
    {
        printf("Ingrese el dato numero %i: ", i);
        scanf("%i", &valor);
        suma=valor+suma;
        i++;
    }
    
    printf("La suma es: %i", suma);
    promedio=suma/10;
    printf("\nEl promedio : %i", promedio);

    getch();
    return 0;
}
