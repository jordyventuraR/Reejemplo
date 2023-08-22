//Programa93 que mediante el uso de una funcion nos dice hasta que valor debe de llegar 
#include<stdio.h>
#include<conio.h>

void hasta(int numero){
    if (numero<=0){
       printf("Error el codigo inicia en 1 como va llegar a un numero menor a 1 si tiene que ir por delante"); 
    }else{
        for (int i=1; i<=numero; i++)
        {
            printf(" - %i, ", i);
        }  
    }  
}

int main()
{
    //Variable
    int numero=0;

    //Entrada de dinero
    printf("El numero al que debe de llegar: ");
    scanf("%i", &numero);
    hasta(numero);

    //Cierre
    getch();
    return 0;
}
