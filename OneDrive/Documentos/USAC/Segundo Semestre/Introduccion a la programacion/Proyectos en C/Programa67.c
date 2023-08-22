//Programa que pregunta la edad y el sexo con una variable char y devuelve la mayor
#include<stdio.h>
#include<conio.h>

int main()
{
    //variables
    char sexo[2];
    int edad[2];

    //Procesidimiento
    for (int i= 0; i<2; i++)
    {
        printf("\nIngrese la edad de de la persona: ");
        scanf("%i", &edad[i]);
        regreso: 
        printf("\nIngrese el sexo, m para masculino y f para femenino, y si es no binario chige a su re...: ");
        scanf(" %c", &sexo[i]);
        if (sexo[i]=='m' ||  sexo[i]=='f'){
            printf("Su sexo fue registrado...");
        }else{
            goto regreso;
        }
    }

    if (edad[0]>edad[1]){
        printf("La persona mayor tiene: %i de edad con sexo: ", edad[0]);
        if (sexo[0]=='m'){
            printf("Masculino");
        }else{
            printf("Femino");
        }  
    }else if (edad[0]<edad[1]){
        printf("\nLa persona mayor tiene: %i  de edad con sexo: ", edad[1]);
        if (sexo[1]=='m'){
            printf("Masculino");
        }else{
            printf("Femino");
        } 
    }  
    
    //cierre
    getch();
    return 0;
}
