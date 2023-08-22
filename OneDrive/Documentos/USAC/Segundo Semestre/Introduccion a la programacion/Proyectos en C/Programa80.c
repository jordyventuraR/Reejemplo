//Programa 80 que pide una contraseña y devuelve si es correcto
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    //Variable
    char nombre[19];
    char clave[8];

    //entrada
    printf("Ingrese su nombre de usuario: ");
    gets(nombre);
    printf("Cual es su clave: ");
    gets(clave);

    //salida
    if (strcmp(clave, "abc123")==0){
        printf("Clave correcta");
    }else{
        printf("Clave incorrecta");
    }
    
    //Cierre
    getch();
    return 0;
}
