//Programa62 que revisa el promedio de dos vectores
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int cursoA[6], cursoB[6], suma1, suma2, promedio1, promedio2;

    printf("Curso A \n");
    //Procedimiento
    for (int i=1; i<=5; i++)
    {
        printf("Escribe la nota del alumno %i: ", i);
        scanf("%i", &cursoA[i]);
        suma1=suma1+cursoA[i];
    }

    promedio1=suma1/5;

    printf("Curso B \n");
    for (int l=1; l<=5; l++)
    {
        printf("Escribe la nota del alumno %i: ", l);
        scanf("%i", &cursoB[l]);
        suma2=suma2+cursoB[l];
    }

    promedio2=suma2/5;

    if (promedio1>promedio2){
        printf("El promedio de la clase A es el mayor");
    }else if (promedio1==promedio2){
        printf("El promedio de las clases son iguales");
    }else{
        printf("El promedio de la clase B es el mayor");
    }
    
    //Cierre
    getch();
    return 0;
}
