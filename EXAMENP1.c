// Programa examen parcial 1 Jordy René Ventura Rivera
// Se debe de almacenar los datos en un archivo de texto llamado salida.txt, los datos son:
/*Debes de lanzar un par de dados, si la suma de las caras es un 8, ganas si sale un 7 pierdes, sino ha
salido ni 8 ni 7, puedes seguir lanzando, pero si en algun otro lanzamiento sale 7, pierdes*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void enviar_mensaje(int dado1, int dado2, char estado[100])
{
    int suma = dado1 + dado2;
    char mensaje_a_enviar[100];
    FILE *chd;
    chd = fopen("salidaD.txt", "a");
    sprintf(mensaje_a_enviar, "\ndado1: %i dado 2: %i suma: %i, por lo tanto %s", dado1, dado2, suma, estado);
    fputs(mensaje_a_enviar, chd);
    fclose(chd);
}

void enviar_mensaje_general(int dado1, int dado2, char estado[100])
{
    int suma = dado1 + dado2;
    char mensaje_a_enviar[100];
    FILE *chd;
    chd = fopen("salida.txt", "a");
    sprintf(mensaje_a_enviar, "\nDel juego de dados: dado1: %i dado 2: %i suma: %i, por lo tanto %s", dado1, dado2, suma, estado);
    fputs(mensaje_a_enviar, chd);
    fclose(chd);
}

void revisar_historial(char archivo[100])
{
    char borrar=0;
    char actividad[100];
    printf("\nDesea conocer el historial(c) o borrar el historial(e): ");
    scanf(" %c", &borrar);
    if (borrar == 'e' || borrar == 'E')
    {
        FILE *chd;
        chd = fopen(archivo, "w");
        printf("\nYa se borro su historial del juego de dados");
        fclose(chd);
    }
    else if (borrar == 'c' || borrar == 'C')
    {
        FILE *chd;
        chd = fopen(archivo, "r");
        while (fgets(actividad, 100, chd) != NULL)
        {
            printf("%s", actividad);
        }
        fclose(chd);
    }
    else
    {
        printf("Opcion invalida se cerrar el programa");
    }
}

int main()
{
    int suma = 0, dado1 = 0, dado2 = 0, accionh = 0;
    char decision1 = 0, decision2 = 0, salir = 0, historial = 0, borrar = 0, accion = 0;
    char actividad[100];
    char mensaje_a_enviar[100];
    char estado[100];
    srand(time(NULL));
    dado1 = 1 + rand() % 6;

    printf("Que desea hacer: jugar(j) o conocer el historial de todos los programas: ");
    scanf(" %c", &historial);
    if (historial == 'j' || historial == 'J')
    {
        do
        {
            printf("\nLanza el primer dado(l): ");
            scanf(" %c", &decision1);
            printf("Lanze el segundo dado(l): ");
            scanf(" %c", &decision2);
            if ((decision1 == 'l' || decision1 == 'L') && (decision2 == 'l' || decision2 == 'L'))
            {
                dado1 = 1 + rand() % 6;
                printf("\nobtuviste un: %i", dado1);
                dado2 = 1 + rand() % 6;
                printf("\nobtubiste un: %i", dado2);
                suma = dado1 + dado2;
                printf("\nEso te suma un: %i", suma);
            }
            else
            {
                printf("No decidiste lanzar los dados deseas seguir o cerrar(s)");
                scanf("%s", &salir);
            }

            if (suma == 8)
            {
                printf("\nGanaste que suerte!");
                sprintf(estado, "%s", "gano");
                enviar_mensaje(dado1, dado2, estado);
                enviar_mensaje_general(dado1, dado2, estado);
                break;
            }
            else if (suma == 7)
            {
                printf("\nQue mala suerte perdiste!");
                sprintf(estado, "%s", "perdio");
                enviar_mensaje(dado1, dado2, estado);
                enviar_mensaje_general(dado1, dado2, estado);
            }
            else if (salir != 's')
            {
                printf("\nSige probando suerte");
                sprintf(estado, "%s", "continua");
                enviar_mensaje(dado1, dado2, estado);
                enviar_mensaje_general(dado1, dado2, estado);
            }
            else
            {
                printf("Comprendo que ya no quieras jugar, suerte en la proxima!");
                suma = 7;
            }

        } while (suma != 7);
    }
    else
    {
        printf("\nDesea conocer el historial de: ");
        printf("\n(opcion 1) Este programa");
        printf("\n(opcion 2) De todos los programas\n");
        scanf("%i", &accionh);

        FILE *salida;
        switch (accionh)
        {
        case 1:
            revisar_historial("salidaD.txt");
            break;

        case 2:
            revisar_historial("salida.txt");
            break;

        default:
            printf("Opcion invalida");
            break;
        }
    }

    getch();
    return 0;
}
