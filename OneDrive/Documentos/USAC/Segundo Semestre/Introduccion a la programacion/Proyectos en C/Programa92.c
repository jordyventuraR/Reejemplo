//Programa 92 que usa una funcion para devolver el mayor
#include<stdio.h>
#include<conio.h>

void mayor(int numeroA, int numeroB, int numeroC){
    if ((numeroA>numeroB && numeroB>numeroC) || (numeroA>numeroC && numeroC>numeroB) || (numeroA>numeroB && numeroB==numeroC)){
        printf("El numero mayor es: %i", numeroA);
    }else if ((numeroB>numeroA && numeroA>numeroC) || (numeroB>numeroC && numeroC>numeroB) || (numeroB>numeroA && numeroA==numeroC)){
        printf("El numero mayor es %i", numeroB);
    }else if ((numeroC>numeroA && numeroA>numeroC) || (numeroC>numeroB && numeroB>numeroC) || (numeroC>numeroA && numeroA==numeroB)){
        printf("El numero mayor es: %i", numeroC);
    }else{
        printf("No existe un  numero mayor");
    }
}

int main()
{
    //Variables
    int NumeroA=0, NumeroB=0, NumeroC=0;

    //Entrada de datos
    printf("Ingrese el numero A: ");
    scanf("%i", &NumeroA);
    printf("Ingrese el numero B: ");
    scanf("%i", &NumeroB);
    printf("Ingrese el numero C: ");
    scanf("%i", &NumeroC);

    //Llamado de la funcion
    mayor(NumeroA, NumeroB, NumeroC);

    //Cierre
    getch();
    return 0;
}

