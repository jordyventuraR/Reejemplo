//Programa que devuelve cuantos puntos hay en cada cuadrante
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int  NoPuntos, varX, varY, cuadranteI=0, cuadranteII=0, cuadranteIII=0, cuadranteIV=0, origen=0;
    //Ingreso de datos
    printf("Ingrese cuantos puntos van a evaluar: ");
    scanf("%i", &NoPuntos);

    //Procesamiento
    for (int i=1; i<=NoPuntos; i++)
    {
        printf("\nIngrese el punto %i\n", i);
        printf("Ingrese la variable X: ");
        scanf("%i", &varX);
        printf("Ingrese la variable Y: ");
        scanf("%i", &varY);

        if (varX>0 && varY>0){
            printf("El cuadrante  es: I");
            cuadranteI++;
        }else if (varX<0 && varY>0){
            printf("El cuadrante es: II");
            cuadranteII++;
        }else if (varX<0 && varY<0){
            printf("El cuadrante es: III");
            cuadranteIII++;
        }else if (varX==0 && varY==0){
            printf("El punto esta en el origen");
            origen++;
        }else{
            printf("El cuadrante es: IV");
            cuadranteIV++;
        }
    }

    //Salida
    printf("\nLos puntos en el cuadrante I es: %i", cuadranteI);
    printf("\nLos puntos en el cuadrante II es: %i", cuadranteII);
    printf("\nLos puntos en el cuadrante III es: %i", cuadranteIII);
    printf("\nLos puntos en el cuadrante IV es: %i", cuadranteIV);
    printf("\nLos puntos estan en el origen: %i", origen);
    
    //Cierre
    getch();
    return 0;
}
