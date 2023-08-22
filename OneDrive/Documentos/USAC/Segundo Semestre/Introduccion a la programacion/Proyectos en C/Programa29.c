//Programa que escribe los numeros de 1 al 100 con el ciclo while
#include<stdio.h>

int main()
{
    //variables
    int i=0;
    
    //Procesamiento
    while (i<=100)
    {
        printf("%i", i);
        printf(",");
        i++;
    }
    
    //Cierre
    while (getchar()!='\n')
    {
        
    }
    
    return 0;
}
