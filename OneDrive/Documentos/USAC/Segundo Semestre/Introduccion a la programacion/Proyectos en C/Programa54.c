//Programa54 que analiza el peso de las piezas
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int  i=0, entre=0, mayor=0, menor=0;
    float peso;

    //Procesamiento
    do
    {
        printf("\nEscriba el peso de la pieza: ");
        scanf("%f", &peso);
        if (peso!=0){
            i++;
            if (peso>=9.8 && peso<=10.2){
                entre++;
            }else if(peso<9.8){
                menor++;
            }else{
                mayor++;
            }
        }else{
            printf("\nUsted cerro el programa");
        }
    } while (peso!=0);   

    //Salida
    printf("\nEl numero de piezas procesadas es %i: ", i);
    printf("\nEl numero de piezas mayores a 10.2 es %i", mayor);
    printf("\nEl numero de piezas menores a 9.8 es: %i", menor);
    printf("\nEl numero de piezas entre 9.8 y 10.2: %i", entre);

    //Cierre
    getch();
    return 0;
}
