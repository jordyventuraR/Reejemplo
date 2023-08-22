//Programa que evalua promedios de 3 periodos de tiempo
#include<stdio.h>
#include<conio.h>

int main()
{
    //Procedimiento
    int edadA=0, suma1=0, suma2=0, suma3=0, edadB=0, edadC=0;
    float promedio1=0, promedio2=0, promedio3=0;

    //Turno en la mañana
    printf("Ingrese la edad de los alumnos del turno del dia: \n");
    for (int i=1; i<=5; i++)
    {
        printf("Ingrese la edad del alumno %i: ", i);
        scanf("%i", &edadA);
        suma1=suma1+edadA;
    }

    //Turno de la tarde
    printf("Ingrese las edad de los alumnos del turno de la tarde: \n");
    for (int n=1; n<=6; n++)
    {
        printf("Ingrese la edad del alumno %i: ", n);
        scanf("%i", &edadB);
        suma2=suma2+edadB; 
    }

    //Turno de la noche
    printf("Ingrese las edad de los alumnos del turno de la noche: \n");
    for (int l=1; l<=11; l++)
    {
        printf("Ingrese la edad del alumno %i: ", l);
        scanf("%i", &edadC);
        suma3=suma3+edadC; 
    }

    //Operacion
    promedio1=(float)suma1/5;
    promedio2=(float)suma2/6; 
    promedio3=(float)suma3/6; 

    //Salida
    //Promedios
    printf("\nEl promedio del dia es: %.2f", promedio1);
    printf("\nEl promedio de la tarde es: %.2f", promedio2);
    printf("\nEl promedio de la noche es: %.2f", promedio3);

    //Promedio de edades menor
    if (promedio1<promedio2 && promedio2<promedio3){
        printf("\nEl promedio de la edad del dia es el menor de todos");
    }else if (promedio2<promedio1 && promedio1<promedio3){
        printf("\nEl promedio de la edad de la tarde es  el menor");
    }else if (promedio1==promedio2 && promedio2==promedio3){
        printf("\nLos promedios son iguales");
    }else{
        printf("\nEl promedio de la edad de la noche es el menor");
    }
    
    //Cierre
    getch();
    return 0;
}
