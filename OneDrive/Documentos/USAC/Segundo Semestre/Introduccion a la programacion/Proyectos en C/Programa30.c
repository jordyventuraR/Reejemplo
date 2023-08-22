//Programa que muestra los numeros hasta el valor que le das
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int max, i=0;

    //Entrada de datos
    printf("Ingrese el valor maximo: ");
    scanf("%i", &max);


    //Procedimiento
    while (i<=max)
    {
        printf("%i", i);
        printf(",");
        i++;
    }
    
    //Cierre
    while (getchar()!='\n')
    {
        
    }

    getch();
    return 0;
}
