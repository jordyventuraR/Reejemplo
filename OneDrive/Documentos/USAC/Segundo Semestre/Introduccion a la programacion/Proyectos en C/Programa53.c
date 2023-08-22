//Programa 52 que pide el valor de un numero y devuelve el promedio
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero=0, suma=0, i=0;
    float promedio=0;

    //Procesamiento
    do
    {   
        i++;
        printf("\nEscriba un numero: ");
        scanf("%i", &numero);
        suma=suma+numero;
        promedio=(float)suma/i;
        printf("El promedio es: %.2f", promedio);
    } while (numero!=0);
    printf("\nUsted cerro el programa");

    //Cierre
    getch();
    return 0;
}
