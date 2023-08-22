//Programa 87 dicho programa revisa el orden de numeros
#include<stdio.h>
#include<conio.h>

void menor(){
    int numero1, numero2, numero3;

    //Entrada de datos
    printf("\nIngrese el numero 1: ");
    scanf("%i", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%i", &numero2);
    printf("Ingrese el numero 3: ");
    scanf("%i", &numero3);

    //Procesamiento
    if((numero1<numero2 && numero2<numero3) || (numero1<numero3 && numero3<numero2)){
        printf("el numero: %i es el menor", numero1);
    }else if ((numero2<numero1 && numero2<numero3) && (numero2<numero3 && numero3<numero2)){
        printf("El numero: %i es el menor", numero2);
    }else{
        printf("El numero %i es el menor", numero3);
    }
}

int main()
{
    menor();
    menor();
    menor();
    getch();
    return 0;
}
