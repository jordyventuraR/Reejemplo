//Primer examen parcial
//Tercer programa
//Evalua el precio de un producto y devuelve el precio sin IVA
#include<stdio.h>
#include<conio.h>
int main()
{
    float precio=0, precio_sin_IVA=0, IVA=0;
    printf("Ingrese el valor del producto con IVA: ");
    scanf("%f", &precio);
    IVA=0.12*precio;
    precio_sin_IVA=precio-IVA;
    printf("\nEl precio sin iva es: %0.2f", precio_sin_IVA);
    printf("\nEl IVA es: %0.2f", IVA);

    getch();
    return 0;
}
