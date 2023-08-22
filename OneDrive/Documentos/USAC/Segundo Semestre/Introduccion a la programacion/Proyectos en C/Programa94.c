//Programa94 donde una funcion recibe un caracter ya sea en mayuscula o en minuscula y dice si es vocal o no
#include<stdio.h>
#include<conio.h>

void minuscula(char caracter){
    if (caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U' || caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u')
    {
        printf("Es vocal");
    }else{
        printf("No es vocal");
    }
    
}

int main()
{
    //Declaracion de variables
    char letra=0;

    //Entradad de datos
    printf("Ingrese un caracter: ");
    scanf(" %c", &letra);

    //Lamado a la funcion
    minuscula(letra);

    //Cierre
    getch();
    return 0;
}
