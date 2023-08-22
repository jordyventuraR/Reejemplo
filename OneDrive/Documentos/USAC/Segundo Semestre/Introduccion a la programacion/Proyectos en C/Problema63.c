//Programa 63 que revise el orden
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variable
    int valor[11], O=0, orden=0;

    //Procesamiento
    //Poner en cero la veriable
    for (int t=1; t<=10; t++){
        valor[t]=0;
    }
    
    //Revision del orden
    for (int i=1; i<=10; i++)
    {
        printf("Ingrese el valor del dato %i: ", i);
        scanf("%i", &valor[i]);
        O=i-1;
        if (i==1){
            orden=1; 
        }else{
            if (valor[i]>valor[O])
            {
                orden=1;
            }else{
                orden=0;
            }    
        }   
    }

    if (orden==1){
        printf("Si esta ordenado");
    }else{
        printf("No esta ordenado");
    }
    
    //Cierre
    getch();
    return 0;
}
