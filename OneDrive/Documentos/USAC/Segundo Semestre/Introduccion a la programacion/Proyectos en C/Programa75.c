//Programa75 que cambia las letras mayusculas por minusculas
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char frase[22];
    char letra=0;
    char nuevapalabra[22];

    //Poner en cero
    for (int s=0; s<21; s++){
        frase[s]=0;
        nuevapalabra[s]=0;
    }

    //Entrada
    printf("Ingrese la palabra: ");
    gets(frase);

    //Procedimiento
    for (int i=0; i<21; i++)
    {
        letra=frase[i];
        if (letra>=65 && letra<=90)
        {
            nuevapalabra[i]=letra+32;
        }else{
            nuevapalabra[i]=letra;
        }  
    }

    //Salida
    printf("La palabra en minusculas es:  %s", nuevapalabra);

    //Cierre
    getch();
    return 0;
}
