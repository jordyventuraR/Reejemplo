//Programa96 que devuelve el triangulo con mayor area y su area
#include<stdio.h>
#include<conio.h>

int area(int ladoA, int LadoB, int LadoC, int LadoD){
    int Area1, Area2;
    Area1=ladoA*LadoB;
    Area2=LadoC*LadoD;
    printf("El Area1 es: %i y el Area2 es: %i", Area1, Area2);

    if (Area1<Area2){
        return Area1;
    }else if (Area1==Area2){
        printf("Las areas son iguales");
    }else{
        return Area2;
    }
}



int main()
{
    //Variables
    int LadoA1=0, LadoA2=0, LadoB1=0, LadoB2=0, resultado=0; 

    //Entrada de datos
    printf("Ingrese un lado del rectangulo1: ");
    scanf("%i", &LadoA1);

    printf("Ingrese el segundo lado del rectangulo1: ");
    scanf("%i", &LadoA2);

    printf("Ingrese el lado del rectangulo2: ");
    scanf("%i", &LadoB1);

    printf("Ingrese el segundo lado del rectangulo2: ");
    scanf("%i", &LadoB2);

    //Salida de datos
    resultado=area(LadoA1, LadoA2, LadoB1, LadoB2);

    //Cierre
    getch();
    return 0;
}
