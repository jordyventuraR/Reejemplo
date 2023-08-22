//Programa81 dicho programa recibe dos nombres y los ordena alfabeticamente
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    //Variables
    char palabra1[19];
    char palabra2[19];
    char palabra[19];
    int i=0;

    //entrada de datos
    printf("Escribe la palabra 1: ");
    gets(palabra1);
    for (int i=0; i<19; i++){
        palabra1[i]=tolower(palabra1[i]);
    }

    printf("Escribe la palabra 2: ");
    gets(palabra2);
    for (int i=0; i<19; i++){
        palabra2[i]=tolower(palabra2[i]);
    }

    //Procedimiento
    evaluacion:
    if (palabra1[i]==palabra2[i]){
        i++;
        goto evaluacion;

     //Salida
    }else if (palabra1[i]<palabra2[i]){
        printf("\nLa primera palabra es: %s", palabra1);
        printf("\nLa segunda palabra es: %s", palabra2);
    }else{
        printf("\nLa primera palabra es: %s", palabra2);
        printf("\nLa segunda palabra es: %s", palabra1);
    }
    
    //Cierre
    getch();
    return 0;
}
