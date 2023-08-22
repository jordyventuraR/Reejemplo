//Programa 77 devuelve la cadena mayor
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //Variable
    char texto1[19];
    char texto2[19];
    int comparacion = 0;

    //Entrada
    printf("Ingrese la palabra 1: ");
    gets(texto1);
    printf("Ingrese la palabra 2: ");
    gets(texto2);

    //Procedimiento
    comparacion=strncmp(texto1, texto2, 19);

    //Salida
    if (comparacion < 0){
        printf("La cadena 1 es menor");
    } else if (comparacion > 0){
        printf("La cadena 2 es menor");
    } else {
        printf("Las cadenas son iguales");
    }

    //Cierre
    getch();
    return 0;
}
