//Primer examen parcial segundo programa 
/*Un muchacho desea obtener algunos datos estadisticos de
5 notas como mediana, media, moda,  el rango, la desviacion 
estandar, y la varianza*/
#include<stdio.h>
float mediana(int nota1, int nota2, int nota3, int nota4, int nota5, int indice){
    int notas[4];
    int ordenadas[4];
    for (int i = 0; i <5; i++)
    {
        notas[i]=0;
        ordenadas[i]=0;
    }
    
    int nota=0, medianaS=0;

    notas[0]=nota1;
    notas[1]=nota2;
    notas[2]=nota3;
    notas[3]=nota4;
    notas[4]=nota5;

    for (int  l= 0; l<5; l++)
    {
        int salir=0;
        for (int i = 0; i<5 && !salir; i++)
        {
            notas[0]=nota1;
            notas[1]=nota2;
            notas[2]=nota3;
            notas[3]=nota4;
            notas[4]=nota5;

            nota=notas[i];

            switch (i)
            {
                //Nota1
                case 0:
                    if (nota<=nota2 && nota<=nota3 && nota<=nota4 && nota<=nota5)
                    {
                        ordenadas[l]=nota;
                        nota1=101;
                        salir=1;
                        break;
                    } 
                    break;

                //Nota2
                case 1:
                    if (nota<=nota1 && nota<=nota3 && nota<=nota4 && nota<=nota5)
                    {
                        ordenadas[l]=nota;
                        nota2=101;
                        salir=1;
                        break;
                    }
                    break;
                    
                //Nota3
                case 2:
                    if (nota<=nota1 && nota<=nota2 && nota<=nota4 && nota<=nota5)
                    {
                        ordenadas[l]=nota;
                        nota3=101;
                        salir=1;
                        break;
                    }
                    break;

                //Nota4
                case 3:
                    if (nota<=nota1 && nota<=nota2 && nota<=nota3 && nota<=nota5)
                    {
                        ordenadas[l]=nota;
                        nota4=101;
                        salir=1;
                        break;
                    }
                    break;

                //Nota5
                case 4:
                    if (nota<=nota1 && nota<=nota2 && nota<=nota3 && nota<=nota4)
                    {
                        ordenadas[l]=nota;
                        nota5=101;
                        salir=1;
                        break;
                    }
                    break;
                
                default:
                    break;
            }
        }
    } 
    medianaS=ordenadas[indice];
    return medianaS;
}

float media(int nota1, int nota2, int nota3, int  nota4, int  nota5){
    float media=(float)(nota1+nota2+nota3+nota4+nota5)/5;
    return media;
}

float moda(int nota1, int nota2, int nota3, int  nota4, int  nota5){
    int notas[4];
    int modas[4];
    notas[0]=nota1;
    notas[1]=nota2;
    notas[2]=nota3;
    notas[3]=nota4;
    notas[4]=nota5;
    int nota=0, iguales=0, frecuencia_mayor=0;
    for (int i = 0; i <5; i++)
    {
        nota=notas[i];
        for(int j = 0; j <5; j++)
        {
            if (nota==notas[j])
            {
                iguales++;
            }   
        }
        modas[i]=iguales-1;
    }
    int moda1=modas[0];
    int moda2=modas[1];
    int moda3=modas[2];
    int moda4=modas[3];
    int moda5=modas[4];
    for (int  i = 0; i < 5; i++)
    {
        frecuencia_mayor=modas[i];
        if (frecuencia_mayor>=moda1 && frecuencia_mayor>moda2 && frecuencia_mayor>=moda3 && frecuencia_mayor>=moda4 & frecuencia_mayor>=moda5)
        {
            return notas[i];
            break;
        }
    }
}

float varianza(int nota1, int nota2, int nota3, int  nota4, int  nota5, float promedio){
    int notas[4];
    int suma=0;
    float varianza=0;
    notas[0]=nota1;
    notas[1]=nota2;
    notas[2]=nota3;
    notas[3]=nota4;
    notas[4]=nota5;
    for (int i = 0; i <5; i++)
    {
        float producto=promedio-notas[i];
        producto=producto*producto;
        suma=suma+producto;
    }
    varianza=suma/5;
    return  varianza;
}

void enviar_nota(){

}

void enviar_reporte(){

}

void historial_de_archivo(){

}

void historial_de_programas(){

}

#include<stdio.h>
#include<conio.h>
int main()
{
    int notas[4];
    int valor_de_la_mediana=0, valor_de_la_moda=0, max=0, min=0, rango=0, var=0;
    float valor_de_la_media=0;

    for (int i = 0; i < 5; i++)
    {
        notas[i]=0;
    }
    
    for (int i = 0; i <5; i++)
    {
        do
        {
            printf("Ingrese el valor de la nota: ");
            scanf("%i", &notas[i]);
        } while (notas[i]>100);        
    }
    valor_de_la_mediana=mediana(notas[0], notas[1], notas[2], notas[3], notas[4], 2);
    valor_de_la_media=media(notas[0], notas[1], notas[2], notas[3], notas[4]);
    valor_de_la_moda=moda(notas[0], notas[1], notas[2], notas[3], notas[4]);
    max=mediana(notas[0], notas[1], notas[2], notas[3], notas[4], 4);
    min=mediana(notas[0], notas[1], notas[2], notas[3], notas[4], 0);
    rango=max-min;
    var=varianza(notas[0], notas[1], notas[2], notas[3], notas[4], valor_de_la_media);
    printf("\nEl valor de la mediana es: %i", valor_de_la_mediana);
    printf("\nEl valor de la media es: %0.2f", valor_de_la_media);
    if (valor_de_la_moda!=0)
    {
        printf("\nEl valor de la moda es: %i", valor_de_la_moda);
    }else{
        printf("\nNo existe la moda");
    }
    printf("\nEl valor maximo es: %i", max);
    printf("\nEl valor minimo es: %i", min);
    printf("\nEl valor del rango es: %i", rango);
    printf("\nLa varianza es: %i", var);

    getch();
    return 0;
}
