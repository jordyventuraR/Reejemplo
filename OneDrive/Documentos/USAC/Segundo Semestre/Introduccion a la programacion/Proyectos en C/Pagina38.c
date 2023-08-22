//Programa con el While que devuelve cuantos numeros son pares y cuantos son impares
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int no_datos=0, i=0, valor=0, par=0, impar=0;

    //Entrada de datos
    printf("Cuantos datos son: ");
    scanf("%i", &no_datos);

    //Procedimientos
    while (i<no_datos)
    {
        i++;
        printf("Ingrese el valor del dato %i: ", i);
        scanf("%i", &valor);

        if(valor%2==0){
            par++;
        }else{
            impar++;
        }
    }
    
    printf("El numero de datos pares es: %i", par);
    printf("\nEl numero de datos impares: %i", impar);

    //Cierre
    getch();
    return 0;
}
