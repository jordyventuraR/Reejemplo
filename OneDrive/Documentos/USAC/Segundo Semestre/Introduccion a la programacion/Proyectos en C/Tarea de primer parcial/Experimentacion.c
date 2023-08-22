#include<stdio.h>
#include<conio.h>

int elimina(int matriz, int i){

}

int main()
{
    int matriz={1, 3, 8, 8, 2, 3, 4, 1};
    int n;
    n = sizeof(matriz) / sizeof(matriz[0]);
    for (int i = 0; i <n; i++)
    {
        elimina(matriz, i); 
    }

    getch();
    return 0;
}
