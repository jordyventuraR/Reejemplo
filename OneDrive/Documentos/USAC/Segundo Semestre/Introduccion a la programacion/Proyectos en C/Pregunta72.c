//Pregunta 72 que ve cuantos caracteres tiene una palabra
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char palabras[30];
    char letra;
    int caracteres=0;

    //Poner la palabra en cero
    for (int i=0; i<30; i++){
        palabras[i]=0;
    }

    //Entrada
    printf("Ingrese una palabra: ");
    gets(palabras);

    //Procesamiento
    for (int i=0; i<30; i++)
    {
        letra=palabras[i];
        if ((letra>=65 && letra<=90) || (letra>=97 && letra<=122)){
            caracteres++;
        }  
    }

    //Salida
    printf("El numero de caracteres es: %i", caracteres);

    ///Cierre
    getch();
    return 0;
}
