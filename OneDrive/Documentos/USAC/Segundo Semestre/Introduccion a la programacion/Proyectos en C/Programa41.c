//Programa que revisa la nota de 10 alumnos 
#include<stdio.h>
#include<conio.h>
int main()
{
    //Variables
    int nota=0, aprobados=0, reprobadas=0;
    //Procesamiento
    for (int i = 1; i <=10; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%i", &nota);

        if (nota>=7){
            aprobados++;
        }else{
            reprobadas++;
        }    
    }

    //Salida
    printf("Los alumnos aprobados: %i", aprobados);
    printf("\nLos alumnos reprobados: %i", reprobadas);

    //Cierre
    getch();
    return 0;
}
