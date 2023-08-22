//Programa 52 con do While que pregunta cuantos diguitos tiene un numero del 1 al 999
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int numero;

    //Proceso
    do
    {
        printf("\nIngrese un numero del 1 - 999: ");
        scanf("%i", &numero);
        if (numero>99 && numero<=999){
            printf("El numero tiene 3 diguitos");
        }else{
            if (numero<=99 && numero>9){
                printf("El numero tiene 2 diguitos");
            }else if (numero<=9 && numero>0){
                printf("El numero tiene 1 diguito");
            }else if (numero!=0){
                printf("Ese numero no es valido");
            }else{
                printf("Ese numero es el 0");
            }  
        }
    } while (numero!=0);
    
    //Cierre
    getch();
    return 0;
}

 