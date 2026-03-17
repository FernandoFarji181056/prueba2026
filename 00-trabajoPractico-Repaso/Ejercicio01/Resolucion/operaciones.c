//#include "TP0_Repaso.h"
#include "../../../libs/tp0repaso/headers/TP0_Repaso.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 


/*
int sumarDosEnteros(int a,int b){
return a + b;

}*/
enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp)
{
    double distancia;
    double restaX=xp-xc;
    double restaY=yp-yc;
    double restaXelevada=pow(restaX,2);
    double restaYelevada=pow(restaY,2);
    double suma=restaXelevada+restaYelevada;
    distancia=sqrt(suma);

    
    printf("xp-xc: %f\n",restaX);
    printf("yp-yc: %f\n",restaY);
    printf("X elevado: %f\n",restaXelevada);
    printf("Y elevado: %f\n",restaYelevada);
    printf("la suma de las potencias es: %f\n",suma);
    printf("la raiz o sea la distancia es: %f\n",distancia);

    system("pause");
    
       if (distancia<rc){

        printf("El punto esta dentro de la circunferencia.\n");
        return INTERNO;
        }

        
       if (distancia==rc){

        printf("El punto esta sobre la circunferencia.\n");
    return EN_CIRCUNFERENCIA;
    }

        
       if (distancia>rc){

        printf("El punto esta fuera de la circunferencia.\n");
     return EXTERNO;
    }
    

   
}

