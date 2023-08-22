//Programa 89 que reevisa el pago por hora
#include<stdio.h>
#include<conio.h>

void total( int horas, float salario){
    //Variables
    float total=0;

    //Entrada
    total=horas*salario;

    //Salida
    printf("\n El total por dia es: %0.2f", total);
}

int main()
{
    int Cantidad_Horas=0;
    float Costo_Horas=0.0;
    do
    {
        printf("\nLa cantidad de horas que trabaja: ");
        scanf("%i", &Cantidad_Horas);

        if (Cantidad_Horas==0)
        {
            break;
        }
        

        printf("\nIngrese el valor del salario por hora: ");
        scanf("%f", &Costo_Horas);
        total(Cantidad_Horas, Costo_Horas);
    } while (1);
    
    //Cierre
    getch();
    return 0;
}
