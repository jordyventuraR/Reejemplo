//Jordy Ventura 2023005487
//Programa 4 Examen parcial 1
#include<stdio.h>
#include<conio.h>
int main()
{
    int numero=0, divisores=0;
    printf("Ingrese el numero entero: ");
    scanf("%i", &numero);
    for (int i = 1; i < numero; i++)
    {
        if (numero%i==0)
        {
            divisores++;
        } 
    }
    if (divisores>2)
    {
        printf("Es un numero compuesto");
    }else{
        printf("Es un numero primo");
    }
    getch();
    return 0;
}
