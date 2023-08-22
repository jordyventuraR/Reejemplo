//Programa que pregunta los sueldos
#include<stdio.h>
#include<conio.h>
int main()
{
    //Variables
    int no_Trabajadores=0, i=0, salario=0, mayor=0, menor=0, salario=0, gasto=0;

    //Entrada de datos
    printf("Cuantos trabajadores son en la empresa: %i", no_Trabajadores);
    scanf("%i", &no_Trabajadores);

    while (i<no_Trabajadores)
    {
        i++;
        printf("Cuanto gana el trabajador %i: ", i);
        scanf("%i", &salario);

        if(salario>300){
            mayor++;
            gasto=gasto+salario;
        }else{
            menor++;
            gasto=gasto+salario;
        }
    }

    //Salida
    printf("El numero de trabajadores que ganan mas de 300 es: %i", mayor);
    printf("\nEl numero de trabajadores que gana menos de 300 es: %i", menor);
    printf("\nEl gasto de la empresa es: %i", gasto);

    //Cierre
    getch();
    return 0;
}
