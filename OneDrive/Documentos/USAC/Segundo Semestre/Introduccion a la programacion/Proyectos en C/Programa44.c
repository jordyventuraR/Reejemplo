//Programa que pide el valor de un par de datos
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int pares_de_datos, base, altura, superficie, mayores=0, menores=0;

    //Entrada de datos
    printf("Ingrese el numero de pares de datos que va ingresar: ");
    scanf("%i", &pares_de_datos);

    for (int i = 1; i <=pares_de_datos; i++)
    {
        printf("\nEscriba la base del triangulo %i: ", i);
        scanf("%i", &base);
        printf("Escriba la altura del triangulo %i: ", i);
        scanf("%i", &altura);
        superficie=(base*altura)/2;
        printf("\nLa base del tringulo es: %i", base);
        printf("\nLa altura del triangula es: %i", altura);
        printf("\nLa superficie es: %i", superficie);

        if (superficie>12)
        {
            mayores++;
        }else{
            menores++;
        }
    }

    printf("\nEl numero de triangulos con superficie mayor a 12 es: %i", mayores);
    printf("\nEl numero de triangulos con superficie menor a 12 es: %i", menores);
    
    //Cierre
    getch();
    return 0;
}
