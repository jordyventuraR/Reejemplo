//Programa de dos listas
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int i=0, n=0, valorA, valorB,  suma1, suma2;

    //Procedimiento
    printf("Datos de la lista 1: \n");
    while (i<15)
    {
        i++;
        printf("Ingrese el dato %i: ", i);
        scanf("%i", &valorA);
        suma1=valorA+suma1;
    }

    printf("Datos de la lista 2: \n");
    while (n<15)
    {
        n++;
        printf("Ingrese el dato %i: ", n);
        scanf("%i", &valorB);
        suma2=valorB+suma2;
    }

    if(suma1>suma2){
        printf("La lista 1 es mayor");
    }else if (suma1=suma2)
    {
        printf("Las listas son iguales");
    }else{
        printf("La lista 2 es mayor");
    }
    
    //Cierre
    getch();
    return 0;
}
