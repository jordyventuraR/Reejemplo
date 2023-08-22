//Programa 74 que indica si la palabra inicia con A o con a
#include<stdio.h>
#include<conio.h>

int main()
{
    //Variable
    char palabra[21];
    char letra=0;

    //Poner a cero 
    for (int i=0; i<21; i++){
        palabra[i]=0;
    }
    
    //Entrada
    printf("Ingrese una palabra que inicie con a o A: ");
    gets(palabra);

    //Procesamiento
        if (palabra[0]=='a'){
            letra='a';
        }else if (palabra[0]=='A'){
            letra='A';
        }
   
    //Salida
    if (letra=='a' || letra=='A'){
        printf("La palabra inicia con: %c", letra);
    }else{
        printf("La palabra no inicia con A o a");
    }

    //Cierre
    getch();
    return 0;
}
