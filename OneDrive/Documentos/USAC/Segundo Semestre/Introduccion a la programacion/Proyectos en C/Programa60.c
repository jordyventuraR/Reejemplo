//Programa para evaluar un vector que suma los distintos datos
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variable
    int  valor[9], suma1=0, suma2=0, suma3=0; 

    //Procedimiento
    for (int i=1; i<=8; i++)
    {
        valor[i]=0;
    }

    for (int t=1; t<=8; t++)
    {
        printf("Ingrese el valor %i: ", t);
        scanf("%i", &valor[t]);
        suma1=valor[t]+suma1;
        if (valor[t]>36)
        {
            suma2=valor[t]+suma2;
        }
        if (valor[t]>50)
        {
            suma3=valor[t]+suma3;
        }    
    }

    printf("\nEl valor de la suma de todos los datos es: %i", suma1);
    printf("\nEl valor de la suma de los datos mayores a 36 es: %i", suma2);
    printf("\nEl valor de la suma de los datos mayores a 50 es: %i", suma3);
    
    //Cierre
    getch();
    return 0;
}
