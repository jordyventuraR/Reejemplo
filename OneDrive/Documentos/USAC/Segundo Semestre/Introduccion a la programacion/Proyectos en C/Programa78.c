//Programa 78 que copia la variable
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //variables
    char texto1[19];
    char texto2[19];
    char textolargo[19];
    int comparacion=0, cantidad1=0, cantidad2=0;

    //Entrada
    printf("Ingrese el texto 1: ");
    gets(texto1);
    printf("Ingrese el texto 2: ");
    gets(texto2);

    //Procedimiento
    cantidad1=strlen(texto1);
    cantidad2=strlen(texto2);

     if (cantidad1 < cantidad2){
        printf("La cadena 2 es mayor");
        strcpy(textolargo, texto2);
    } else if (cantidad2 < cantidad1){
        printf("La cadena 1 es mayor");
        strcpy(textolargo, texto1);
    } else {
        printf("Las cadenas son iguales");
    }
    
    //Salida
    printf("\nLa palabra mayor es: %s", textolargo);

    //Cierre
    getch();
    return 0;
}
