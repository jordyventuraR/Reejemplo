//Programa que evalua perfiles de hierro
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int no_perfiles, i=1, correctas, incorrectas; 
    float longuitud;

    //Introduccion de datos 
    printf("Ingrese el numero de perfiles: ");
    scanf("%i", &no_perfiles);

    //Procedimiento
    while (i<=no_perfiles)
    {
        printf("Ingrese la longuitud del perfil numero %i: ", i);
        scanf("%f", &longuitud);
        if (longuitud>1.20 && longuitud<1.30)
        {
            correctas++;
        }
        i++;
    }
    incorrectas=no_perfiles-correctas;

    //Salida de datos
    printf("El numero de perfiles correctos es: %i", correctas);
    printf("\nEl numero de piezas incorrectas es: %i", incorrectas);
    
    //Cierre
    getch();
    return 0;
}
