#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero, multiplo3=0, multiplo5=0;

    //Procedimiento
    for (int i = 1; i <=10; i++)
    {
        printf("Escriba el dato %i: ", i);
        scanf("%i", &numero);

        if (numero%3==0){
            multiplo3++;
        }else if (numero%5==0){
            multiplo5++;
        }
    }

    printf("Exister %i multiplos de 3", multiplo3);
    printf("\nExisten %i multiplos de 5", multiplo5);
    
    //Cierre
    getch();
    return 0;
}
