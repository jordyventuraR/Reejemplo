/*Programa4 Jordy Ventura 202300587 Determine el seno de un ángulo 
ingresado por el usuario a partir de su serie de Taylor: */
#include<stdio.h>
#include<conio.h>

int main()
{
    float angulo;
    int n=0, potencia=0, facorial=0, Factorialn=1, producto=0;
    printf("Ingrese el angulo: ");
    scanf("%f", angulo);
    n=4;
    if (n%2==0)
    {
        potencia=1;
    }else{
        potencia=-1;
    }
    
    for (int i = 0; i <n; i++)
    {
        facorial=(2*n)+1;
        for (int l = 1; l <=facorial; l++)
        {
            Factorialn=Factorialn*l;
        }
    }
    
    getch();
    return 0;
}
