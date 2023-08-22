#include <stdio.h>

int main() {
    int horas_por_dia;
    int pago_por_hora;
    int salario_mensual;

    printf("Ingrese las horas que trabaja diario: ");
    scanf("%i", &horas_por_dia);

    printf("Ingrese su pago por hora: ");
    scanf("%i", &pago_por_hora);

    salario_mensual = horas_por_dia * pago_por_hora * 30; // Suponemos un mes de 30 días

    printf("Su salario es: %i\n", salario_mensual);

    // Leer y descartar cualquier carácter adicional hasta que se presione "Enter"
    while (getchar() != '\n') {
        // Descartar caracteres adicionales
    }

    getchar(); // Esperar a que el usuario presione "Enter" para salir
    return 0;
}

