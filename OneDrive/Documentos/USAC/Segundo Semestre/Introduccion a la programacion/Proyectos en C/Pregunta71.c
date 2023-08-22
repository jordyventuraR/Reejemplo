//Programa71, el programa evalua cuantas vocales tiene una palabra en minuscula
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    char palabra[30];
    char letra=0;
    int vocal=0;

    //Poner la palabra en cero
    for (int t=0; t<30; t++){
        palabra[t]=0;
    }

    //Entrada de datos
    printf("Ingrese la palabra: ");
    gets(palabra);

    //Procesamiento
    for (int i=0; i<30; i++){
        letra=palabra[i];
        if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
            vocal++;
        }   
    }

    printf("El numero de vocales en la palabra hay: %i", vocal);
    
    //Cierre
    getch();
    return 0;
}
