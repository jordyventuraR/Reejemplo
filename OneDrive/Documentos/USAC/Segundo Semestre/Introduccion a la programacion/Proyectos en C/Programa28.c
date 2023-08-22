//Programa que devuelve el rango donde estan los numeros
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numa, numb, numc;

    //Introduccion de datos
    printf("Ingrese el numero a: ");
    scanf("%i", &numa);
    printf("Ingrese el numero b: "); 
    scanf("%i", &numb);
    printf("Ingrese el numero c: ");
    scanf("%i", &numc);

    //Procesamiento
    if (numa<numb && numa<numc)
    {
       printf("Los numeros van de: %i", numa); 
    }else if (numb<numc)
    {
       printf("Los numeros van de %i", numb);
    }else{
        printf("Los numeros van de %i", numc);
    }

    if (numa>numb && numa>numc)
    {
        printf(" Hasta %i", numa);
    }else if (numb>numc)
    {
        printf(" Hasta %i", numb);
    }else{
        printf(" Hasta %i", numc);
    }

    //Cierre
    getch();
    return 0;
}
