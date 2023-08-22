//Programa que regresa un promedio de edades
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int i=0;
    float altura=0, suma=0, proomedio, personas=0;

    //Entrada de datos
    printf("Cuantas personas son: ");
    scanf("%f", &personas);

    //Proceso
    while (i<personas)
    {
        i++;
        printf("Cual es la altura de la persona %i: ", i);
        scanf("%f", &altura);
        suma= altura+suma;
    }

    //Salida
    proomedio=suma/personas;
    printf("El promedio de las alturas es: %f", proomedio);

    //cierre
    getch();
    return 0;
}
