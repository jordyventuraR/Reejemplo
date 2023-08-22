//Programa58 para la revision de la altura 
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    float altura[6], suma, promedio;
    int mayor=0, menor=0;

    //Procedimiento

    for (int t=0; t<=5; t++)
    {
        altura[t]=0;
    }
    

    for (int i=1; i<=5; i++)
    {
        printf("\nIngrese la altura de la persona %i: ", i);
        scanf("%f", &altura[i]);
        suma=altura[i]+suma;
    }
    
    promedio=suma/5;
    for (int n=1; n<=5; ++n)
    {
        if (altura[n]>promedio){
            mayor++;
        }else if (altura[n]<promedio){
            menor++;
        }   
    }
    
    printf("\nEl numero de personas con altura mayor al promedio es: %i", mayor);
    printf("\nEl numero de personas con altura menor al promedio es: %i", menor);

    //Cierre
    getch();
    return 0;
}
