//Programa 70 obtencion de variables string
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char nombre1[21];
    char nombre2[21];
    int edad1, edad2;

    //Entrada de datos
    //Persona 1
    printf("Cual es el nombre de la persona 1: ");
    gets(nombre1);
    printf("Cual es la edad de la persona 1: ");
    scanf("%i", &edad1);

    fflush(stdin);

    //Persona 2
    printf("Cual es el nombre de la persona 2:");
    gets(nombre2);
    printf("Cual es la edad de la persona 2: ");
    scanf("%i", &edad2);

    //Procesamiento
    if (edad1>edad2){
        printf("La persona con mayor edad es: %s\n", nombre1);
    }else if (edad1<edad2){
        printf("La persona con maro edad es: %s\n", nombre2);
    }else{
        printf("La persona tienen la misma edad");
    }
    
    //Cierre
    getch();
    return 0;
}
