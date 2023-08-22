//Programa88 que usa funciones con un valor de entrada llamado parametros
#include<stdio.h>
#include<conio.h>


void menor(int numeroA, int numeroB){
   if (numeroA>numeroB){
        printf("El numero %i es el mayor: ",  numeroA);
   }else if (numeroB<numeroA){
        printf("El numero %i es el mayor: ", numeroB);
   }else{
        printf("Los numeros son iguales");
   }
}

int main()
{
    menor(66, 55);
    getch();
    return 0;
}
