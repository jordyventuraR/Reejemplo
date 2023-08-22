/*Programa11 Jordy Ventura 202300587  Defina una función que elimine los duplicados
de una matriz de números no negativos y los  devuelva como resultado. El orden de la
secuencia tiene que permanecer igual.*/
#include <stdio.h>
#include <conio.h>

int eliminar(int matriz[], int t, int n)
{
    int iteracion1=0, l=0, iteracion2=0;
    int vector[]={};
    for (int i = 0; i<n; i++)
    {
        vector[i]=matriz[i];
        l++;
        iteracion2=matriz[l];
        if (iteracion1==iteracion2)
        {

        }else{
            vector[t]=matriz[i];   
        }
    }
    return vector[t];
}

int main()
{
    int vector[] = {1, 3, 8, 8, 2, 3, 4, 1};
    int cadena[] = {};
    int n = 0;
    n = sizeof(vector) / sizeof(vector[0]);

        cadena[1] = eliminar(vector, 1, n);
        printf("%i, ", cadena[1]);

    getch();
    return 0;
}
