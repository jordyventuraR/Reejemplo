#include <stdio.h>
#include <conio.h>

int main() {
    char caracteres[100];
    int caracter = 0, letras = 0;

    printf("Escriba la cadena de texto: ");

    for (int i = 0; i < 100; i++) {
        scanf(" %c", &caracteres[i]);

        if (caracteres[i] == '\n') {
            break; // Si se presiona Enter, salimos del bucle
        }

        if (caracteres[i] >= 32 && caracteres[i] <= 126) {
            caracter++;
            if ((caracteres[i] >= 'A' && caracteres[i] <= 'Z') || (caracteres[i] >= 'a' && caracteres[i] <= 'z')) {
                letras++;
            }
        }
    }

    printf("La cantidad de caracteres es: %i\n", caracter);
    printf("La cantidad de letras es: %i\n", letras);

    getch();
    return 0;
}
