//Programa para verificacion del salario y del  tiempo de trabajo
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int salario, tiempo;

    //Entrada
    printf("Ingrese su salario: ");
    scanf("%i", &salario);
    printf("Ingrese su tiempo de vigencia: ");
    scanf("%i", &tiempo);

    //Procesamiento
    if (salario<=500 && tiempo>=10){
        salario=(salario*0.20)+salario;
        printf("Su salario debe de ser: %i", salario);
    }else if (salario<=500 && tiempo<=10){
        salario=(salario*0.05)+salario;
        printf("Su salario debe de ser: %i", salario);
    }else{
        printf("Su salario es: %i", salario);
    }
    
    //Cierre
    getch();
    return 0;
}
