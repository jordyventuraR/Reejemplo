//Programa86 que mediante funciones van a evaluar una potencia y un producto
#include<stdio.h>
#include<conio.h>

void cuadrado(){
    int base=0;
    printf("-----------------------------------------");
    printf("\nEste es la potencia al  cuadrado: ");
    printf("\nIngrese la base: ");
    scanf("%i", &base);
    base=base*base;
    printf("\nEl producto es: %i", base);
}

void producto(){
    int numero1, numero2, producto;
    printf("\n-------------------------------------------");
    printf("\nIngrese el primer factor 1: ");
    scanf("%i", &numero1);
    printf("\nIngrese el segundo factor 2: ");
    scanf("%i", &numero2);
    producto=numero1*numero2;
    printf("\nEl producto es: %i", producto);
}

int main(){
    cuadrado();
    producto();
    getch();
    return 0;
}
