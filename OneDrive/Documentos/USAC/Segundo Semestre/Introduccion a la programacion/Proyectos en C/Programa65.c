//Programa65 Que devuelve el abecedario atravez de una variable char
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char letra;

    //Procesamiento
    //Letras mayusculas
    for (int t=65; t<=90; t++){
        letra=t;
        printf(" %c", letra);
    }

    //Letras minusculas
    for (int i=97; i<=122; i++){
        letra=i;
        printf(" %c", letra);
    }

    //Cierre
    getch();
    return 0;
}
