//Programa59 que almacena los salarios
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int salarios[5]=0;

    //Procedimiento
    printf("Salarios del turno de la madrugada: \n");
    for (int i=1; i<=4; i++)
    {
        printf("\nCual es el salario mensual del trabajador %i de la madrugada: ", i);
        scanf("%i", &salarios[i]);
    }

    printf("Salario del turno de la tarde: \n");
    for (int t=0; t<=4; t++)
    {
        printf("\nCual es el salario de la tarde del trabajador %i de la tarde: ", t);
        scanf("%i", &salarios[t]);
    }
    
    //Cerrrar
    getch();
    return 0;
}
