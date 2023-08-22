//Programa 76 Programa que devuelve el numero de letras de una palabra con un comando
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //variables
    char texto[21];
    int cantidad=0;

    //Poner a cero
    for (int i=0; i<21; i++)
    {
        texto[i]=0;
    }
    

    //entrada
    printf("Ingrese una palabra: ");
    gets(texto);

    //Procedimiento
    cantidad=strlen(texto);

    //Salida
    printf("El numero de palabras es: %i", cantidad);

    //Cierre
    getch();
    return 0;
}

