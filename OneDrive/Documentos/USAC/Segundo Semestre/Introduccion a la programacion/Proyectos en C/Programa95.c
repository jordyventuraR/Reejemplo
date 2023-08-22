//Programa 95 funcion que retorna un promedio
#include<stdio.h>
#include<conio.h>

void promedio(int numero1, int numero2, int numero3){
    float promedio=0;
    promedio=(float)(numero1+numero2+numero3)/3;
    printf("El promedio es: %0.2f", promedio);
}

int main(){
    //Variables
    int numeroA=0, numeroB=0, numeroC=0;

    //Procedimiento
    printf("Ingrese el numero1: ");
    scanf("%i", &numeroA);
    printf("Ingrese el numero2: ");
    scanf("%i", &numeroB);
    printf("Ingrese el numero3: ");
    scanf("%i", &numeroC);
    promedio(numeroA, numeroB, numeroC);

    //Cierre
    getch();
    return 0;
}
