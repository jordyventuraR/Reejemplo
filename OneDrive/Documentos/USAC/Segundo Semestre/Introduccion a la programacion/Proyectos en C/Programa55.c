//Programa55 que revisa la suma y hace uso del bucle do while
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero=0, suma=0;
    //Procesamiento
    do
    {
        //Entrada de datos
        printf("\nIngrese un numero que no sea 9999: ");
        scanf("%i", &numero);

        if (numero!=9999)
        {
            suma=suma+numero;
        }else{
            printf("\nSu reporte es este: ");
        }    
    } while (numero!=9999);
    
    //Salida
    printf("\nLa suma de los datos es: %i", suma);

    //Procesamiento de comparacion de la suma
    if (suma>0)
    {
        printf("\nLa suma es positiva");
    }else if (suma<0)
    {
        printf("\nLa suma es negativa");
    }else{
        printf("\nLa suma es 0");
    }

    //Cierre
    getch();
    return 0;
}
