/*Problema11 Jordy Ventura 202300587  Defina una función que elimine los duplicados
de una matriz de números no negativos y los  devuelva como resultado. El orden de la
secuencia tiene que permanecer igual.
Ejemplos:
• [1, 1, 2, 2, 3] → [1, 2, 3]
• [1, 3, 8, 8, 2, 3, 4, 1] → [1, 3, 8, 2, 4]*/
#include<stdio.h>
#include<conio.h>

int elimina(int matriz[], int n){
    int iteracion1=0, l=0, iteracion2=0;
    for (int i = 0; i<n; i++)
    {
        iteracion1=matriz[i];
        l++;
        iteracion2=matriz[l];
        if (iteracion1==iteracion2)
        {

        }else{
            return iteracion1;   
        }
    }
}

int main()
{
    int n=0, veces=0;
    int matriz[]={1, 3, 8, 8, 2, 3, 4, 1};
    int vector[]={};
    n = sizeof(matriz) / sizeof(matriz[0]);

    for (int i = 0; i<n; i++)
    {
        vector[i]=elimina(matriz, n);
        veces++;
    }
    for (int i = 0; i <veces; i++)
    {
        printf("%i", vector[i]);
    }
    
    getch();
    return 0;
}



