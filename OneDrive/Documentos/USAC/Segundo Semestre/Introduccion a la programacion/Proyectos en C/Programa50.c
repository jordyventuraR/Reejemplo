//Programa que evalua 10 numeros
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero, negativos=0, positivos=0, divisores_15=0, pares=0;

    //Procesamiento
    for (int i=1; i <= 10; i++)
    {
        printf("Ingrese el valor del dato %i: ", i);
        scanf("%i", &numero);
        
        if (numero<0){
            negativos++;
        }else{
            positivos++;
        }

        if (numero%15==0){
           divisores_15++; 
        }

        if (numero%2==0){
            pares++;
        }  
    }

    //Salida
    printf("\nLos numeros positivos son: %i", positivos);
    printf("\nLos numeros negativos son: %i", negativos);
    printf("\nLos numeros divisores de 15 son: %i", divisores_15);
    printf("\nLos numeros pares es: %i", pares);
    
    //Cierre
    getch();
    return 0;
}
