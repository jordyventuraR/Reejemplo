//Programa84 practica de funciones
#include<stdio.h>
#include<conio.h>

int numero1, numero2, suma;

void presentacion(){
    printf("--------------------------------------------------");
    printf("\nEste programa se basa en funciones y que suma dos valores");
    printf("\n---------------------------------------------------");
}

void cargar_datos(){
    printf("\nIngrese el primer dato: ");
    scanf("%i", &numero1);
    printf("\nIngrese el segundo dato: ");
    scanf("%i", &numero2);
    printf("\n-----------------------------------------------------");
}

void finalizacion(){
    suma=numero1+numero2;
    printf("\nLa suma es: %i", suma);
    printf("\nGracias");
    printf("\n-----------------------------------------------------");
}


int main(){
    presentacion();
    cargar_datos();
    finalizacion();
    getch();
    return 0;
}

