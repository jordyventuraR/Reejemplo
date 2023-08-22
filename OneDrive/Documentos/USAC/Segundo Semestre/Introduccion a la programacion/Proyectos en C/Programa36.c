//Programa que muestra los multiplos de 8
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0, multiplos=8;
    printf("Multiplos de 8, de 1 a 500\n");

    while (multiplos<496)
    {
        i++;
        multiplos=i*8;
        printf("-%i, ", multiplos);
    }   

    //Cierre
    getch();
    return 0;
}
