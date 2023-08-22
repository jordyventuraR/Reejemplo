//Programa90 que devuelve el area y el perimietro de cuadrados
#include <stdio.h>
#include<conio.h>

void area(int Lado){
    Lado=Lado*Lado;
    printf("\nEl Area es: %i", Lado);
}

void perimetro(int Lado){
    Lado=4*Lado;
    printf("\nEl perimetro es: %i", Lado);
}

int main()
{
    //Procesamiento
    for (int i=10; i<20; i++)
    {
        printf("\n El lado es de: %i", i);
        area(i);
        perimetro(i);
        printf("\n");
    }
    
    //Cierre
    getch();
    return 0;
}
