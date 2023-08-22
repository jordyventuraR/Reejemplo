//Programa que evalua cuantos datos son mayores a 1000 
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numeros_evaluados, valor, mayores=0, menores=0;

    //Entrada de datos
    printf("Ingrese cuantos datos seran evaluados: ");
    scanf("%i", &numeros_evaluados);

    //Proceso
    for (int i = 1; i <=numeros_evaluados; i++)
    {
        printf("Ingrese el valor del dato %i: ", i);
        scanf("%i", &valor);

        if (valor>=1000)
        {
            mayores++;
        }else{
            menores++;
        }  
    }  
    
    //Salida
    printf("La cantidad de numeros iguales o mayores a 1000 es: %i", mayores);
    printf("\nLa cantidad de numeros menores a 1000 es: %i", menores);

    //Cierre
    getch();
    return 0;
}
