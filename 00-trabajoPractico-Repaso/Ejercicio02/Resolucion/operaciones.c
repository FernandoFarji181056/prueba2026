//#include "TP0_Repaso.h"
#include "../../../libs/tp0repaso/headers/TP0_Repaso.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 


/*
int sumarDosEnteros(int a,int b){
return a + b;

}*/
bool digitoEnNumero(long n, short d){

    //bool esta=false;
    bool esta=false;

    printf("long n= %d\n",n);    
    if (n<0)n=-n;
    long n2=n;

    printf("long n= %d\n",n);
    printf("long n2= %d\n",n2);
    printf("digito: %d\n",d);
    system("pause");

    if (n==0 && d==0)return true;

    while (n>9){
        
        printf("long n= %d\n",n);

        float fl=n/10;
        float fl2=n/10.0;
        float fl3=fl2-fl;
        fl3=fl3*10;
        long n2=n/10;


        

        printf("float fl= %f\n",fl);
        printf("float fl2= %f\n",fl2);
        printf("float fl3= %f\n",fl3);

        printf("long n= %d\n",n);
        n=n/10;
        printf("ahora long n es= %d\n\n",n);
        system("pause");

    }



    return esta;
}


