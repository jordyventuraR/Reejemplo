//Programa59 que almacena los salarios
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int salarios[5], suma1=0, suma2=0;

    //Poner a 0 las variables
    for (int l=1; l<=4; l++){
        salarios[l]=0;
    }
    
    //Procedimiento
    printf("Salarios del turno de la madrugada: \n");
    for (int i=1; i<=4; i++)
    {
        printf("\nCual es el salario mensual del trabajador %i de la madrugada: ", i);
        scanf("%i", &salarios[i]);
        suma1=salarios[i]+suma1;
    }

    printf("Salario del turno de la tarde: \n");
    for (int t=1; t<=4; t++)
    {
        printf("\nCual es el salario de la tarde del trabajador %i de la tarde: ", t);
        scanf("%i", &salarios[t]);
        suma2=salarios[t]+suma2;
    }

    printf("\nEl salario por el dia es: %i", suma1);
    printf("\nEl salario por la tarde es: %i", suma2);
    
    //Cerrrar
    getch();
    return 0;
}