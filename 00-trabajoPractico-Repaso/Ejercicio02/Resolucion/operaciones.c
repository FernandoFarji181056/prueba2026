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
    /*
    long n2=n;

    printf("long n= %d\n",n);
    printf("long n2= %d\n",n2);
    printf("digito: %d\n",d);
    system("pause");
    */
    if (n==0 && d==0)return true;

    while (n>0){
        
        printf("long n= %d\n",n);

        short resto=n%10;        
           
        printf("resto = %d\n",resto);
 

        if (d==resto){
            esta=true;
            printf("hay coincidencia en este digito: %d\n",resto);
        }
        else{
            printf("NO hay coincidencia en este digito: %d\n",resto);
        }

        printf("long n= %d\n",n);
        n=n/10;
        printf("ahora long n es= %d\n\n",n);
        system("pause");

    }



    return esta;
}


