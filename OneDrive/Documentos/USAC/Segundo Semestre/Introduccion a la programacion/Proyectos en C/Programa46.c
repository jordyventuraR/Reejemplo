//Programa que da la tabla del 5 desde el 5 al 50
#include<stdio.h>
#include<conio.h>

int main()
{
    //Procemiento
    for (int i = 5; i <50; i=5+i)
    {
        printf(" -%i, ", i);
    }
    
    //Cierre
    getch();
    return 0;
}
