//Programa que revisa los lados de un triangulo 
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variables
    int no_triangulo, ladoA, ladoB, ladoC, equilatero=0, isoseles=0, escaleno=0;

    //Entrada de datos
    printf("Cuantos triangulos se van analizar: ");
    scanf("%i", &no_triangulo);

    //Procesamiento
    for (int i = 1; i <= no_triangulo; i++)
    {
        printf("\n");
        printf("Ingrese el dato A: ");
        scanf("%i", &ladoA);

        printf("Ingrese el dato B: ");
        scanf("%i", &ladoB);

        printf("Ingrese el lado C: ");
        scanf("%i", &ladoC);

        if (ladoA==ladoB && ladoB==ladoC)
        {
            printf("El triangulo %i es equilatero", i);
            equilatero++;
        }else if ((ladoA==ladoB && ladoB!=ladoC) || (ladoA==ladoC && ladoA!=ladoB) || (ladoB==ladoC && ladoB!=ladoA)){
            printf("El triangulo %i es isoceles", i);
            isoseles++;
        }else{
            printf("El triangulo %i es escaleno", i);
            escaleno++;
        }     
    }

    printf("\nEl numero de triangulos equilatero es: %i", equilatero);
    printf("\nEl numero de triangulos isoceles es: %i", isoseles);
    printf("\nEl numero de triangulo escaleno es: %i", escaleno);
    
    if (equilatero<isoseles && isoseles<escaleno)
    {
        printf("\nEl que tiene menor cantidad de triangulos es el equilatero");
    }else if (isoseles<equilatero && equilatero<escaleno)
    {
        printf("\nEl que tiene menor cantidad de triangulos es el isoseles");
    }else if (equilatero==isoseles && isoseles==escaleno)
    {
        printf("\nTodas las cantidades de triangulos son iguales");
    }else{
        printf("\nEl que tiene menor cantidad de triangulos es el escaleno");
    }
    
    //Cierre
    getch();
    return 0;
}
