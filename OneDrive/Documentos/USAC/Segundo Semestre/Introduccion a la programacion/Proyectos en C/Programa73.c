//Programa 73 que evalua cuantas palabras tiene una oracion
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char oracion[200];
    char caracter=0;
    int palabra=0;

    //Poner a cero la variable
    for (int i=0; i<200; i++){
        oracion[i]=0;
    }

    //Entrada de datos
    printf("Ingresar la oracion: ");
    gets(oracion);

    //Procedimiento
    for (int t=0; t<200; t++)
    {
        caracter=oracion[t];
        if (caracter==32){
            palabra++;
        }   
    }
    palabra=palabra+1;

    //Salida de datos
    printf("El numero de palabras es: %i", palabra);
    
    //Cierre
    getch();
    return 0;
}
