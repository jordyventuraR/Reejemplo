#include<stdio.h>
#include<conio.h>

int main()
{
    // Variables
    int i = 0, nota, aprobado = 0, reprobado = 0; // Inicializamos "i", "aprobado" y "reprobado" a cero.

    // Introduccion de datos
    while (i <= 9) // Cambiamos la condición para que el bucle se repita 9 veces (0 al 8)
    {
        i++;
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%i", &nota);
        if (nota >= 7)
        {
           aprobado++; 
        } else {
            reprobado++;
        }     
    }

    // Salida
    printf("La cantidad de alumnos que sacaron mas de 7 puntos es: %i\n", aprobado);
    printf("La cantidad de alumnos que sacaron menos de 7 puntos es: %i\n", reprobado);
    
    // Cierre
    getch();
    return 0;
}
