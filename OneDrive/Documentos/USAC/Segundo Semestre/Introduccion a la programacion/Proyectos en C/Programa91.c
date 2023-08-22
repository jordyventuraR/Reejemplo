//Programa91 que usa una funcion que recibe como parametro y devuelve una palabra en pantalla
#include<stdio.h>
#include<conio.h>

//Funciones
void sexo(char inicial){
    if (inicial=='h'){
        printf("\nHombre");
    }else if (inicial=='m'){
        printf("\nMujer");
    }else{
        printf("La letra no es identificada");
    }    
}

int main()
{
    //Lamado de funciones 
    sexo('h');
    sexo('m');

    //Cierre
    printf("\nGracias");
    getch();
    return 0;
}
