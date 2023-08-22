//Programa83 que ordena las palabras en orden alfabetico y luego une todo en una sola palabra separada por comas
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //Variable
    char palabra[19];
    char palabra1[19];
    char palabra2[19];
    char palabra3[19];
    size_t cantidad1, cantidad2, cantidad3;
    int j;

    //Poner en cero las variables
    for (int i=0; i<19; i++){
      palabra1[i]=0;
      palabra2[i]=0;
      palabra3[i]=0;  
    }

    //Entrada
    printf("Ingrese la palabra 1: ");
    gets(palabra1);

    printf("Ingrese la palabra 2: ");
    gets(palabra2);

    printf("Ingrese la palabra 3: ");
    gets(palabra3);


    //Procesamiento
    igualdad:
    if (palabra1[j]==palabra2[j] && palabra2[j]==palabra3[j]){
        j++;
        goto igualdad;
    }else if (palabra1[i]==palabra3)
    {
        /* code */
    }
    
    
    
    

    //Salida


    //Cierre
    getch();
    return 0;
}
