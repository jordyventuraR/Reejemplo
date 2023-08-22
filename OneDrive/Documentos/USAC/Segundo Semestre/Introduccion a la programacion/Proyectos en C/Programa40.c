//Programa con for que registra el valor de 10 datos hace la suma y el promedio
#include<stdio.h>
#include<conio.h>

int main()
{

    //Variables
     float suma=0, valor=0, promedio=0;
    //Procedimiento
    for (int i = 1; i<=10; i++)
    {
        printf("Ingrese el valor del dato %i: ", i);
        scanf("%f", &valor);
        suma=suma+valor;
    }
    promedio=suma/10;
    printf("La suma es: %f", suma);
    printf("\nEl promedio es: %f", promedio);

    //Cierre
    getch();
    return 0;
}
