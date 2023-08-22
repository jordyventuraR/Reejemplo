//Programa que suma dos vectores
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int vector1[5], vector2[5], vector3[5], suma[5];

    //Procesamiento
    //vector1
    printf("El vector 1: \n");
    for (int i=1; i<=4; i++){
        printf("Ingrese el dato %i: ", i);
        scanf("%i", &vector1[i]);
    }

    //Vector2
    printf("El vector 2: \n");
    for (int t=1; t<=4; t++){
        printf("Ingrese el dato %i: ", t);
        scanf("%i", &vector2[t]);
    }

    //La suma del vector
    printf("La suma es: \n");
    for (int l=1; l<=4; l++){
        suma[l]=vector1[l]+vector2[l];
        printf("\nLa suma del dato %i: ", l);
        printf("%i", suma[l]);
    }
    
    //Cierre
    getch();
    return 0;
}
