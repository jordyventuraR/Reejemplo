//Programa57 Vectores
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int salario[6];

    for (int l=1; l<=5; l++)
    {
        salario[l]=0;
    }
    
    //Proceso
    for (int i=1; i<=5; i++){
        printf("Escriba el salario %i: ", i);
        scanf("%i", &salario[i]);    
    }

    for (int n=1; n<=5; n++){
        printf("\nSalario %i es: ", n);
        printf("%i", salario[n]);
    }

    //Cierre
    getch();
    return 0;
}
