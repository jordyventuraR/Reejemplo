//Programa 64 que usa el char como confirmacion 
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero=0;
    char letra;

    //Procedimiento
    //Entrada de datos
    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    Opcion: 
    printf("\nConfirme la carga del dato si con s y no con n: ");
    scanf(" %c", &letra);

    if (letra=='s'){
        printf("El numero es: %i", numero);
    }else if (letra=='n'){
        printf("No se cargo el dato");
        numero=0;
    }else{
        printf("La opcion no es correcta vuelva seleciciona la opcion");
        goto Opcion;
    }
    
    //Cierre
    getch();
    return 0;
}
