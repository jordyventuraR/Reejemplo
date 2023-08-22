//Programa 82 que regresa la palabra con mas caracteres  de primero y despues da la segunda
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //Entrada
    char palabra1[19];
    char palabra2[19];
    char palabra[19];
    size_t cantidad1, cantidad2;

    //Entrada
    printf("Ingrese la palabra 1: ");
    gets(palabra1);

    printf("Ingrese la palabra 2: ");
    gets(palabra2);

    //Procesamiento
    cantidad1=strlen(palabra1);
    cantidad2=strlen(palabra2);

    //Salida
    if (cantidad1>cantidad2){
        printf("La palabra con mas caracteres es: %s", palabra1);
        printf("\nLa segunda palabra es: %s", palabra2);
    }else if (cantidad2>cantidad1){
        printf("La primera palabra con mas caracteres es: %s", palabra2);
        printf("\nLa palabra con menor caracteres es: %s", palabra1);
    }else{
        printf("Las dos palabras tiene la misma cantidad de caracteres");
    }
    
    //Cierre
    getch();
    return 0;
}
