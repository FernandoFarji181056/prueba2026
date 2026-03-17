#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "../../libs/tp0repaso/headers/TP0_Repaso.h"
#include "../../libs/validaciones/headers/Validacion_datos.h"

//C:\Estructura2026\Repositorios\prueba2026\libs\tp0repaso\headers


int main() {

    char ingresoXfgets[100];
    int xc,yc,rc,xp,yp;
    bool validar=false;

    do{
    printf("ingrese xc: ");
    fgets(ingresoXfgets, 100, stdin);
    ingresoXfgets[strcspn(ingresoXfgets, "\n")] = 0;
    validar=validarEntero(ingresoXfgets);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoXfgets);
    xc = strtol(ingresoXfgets,NULL,10);    
    }while (!validar);
    validar=false;
    printf("Usted ingreso xc: %d\n\n",xc);
    
    fflush(stdout);
    clearScreen();
    do{
    printf("ingrese yc: ");
    fgets(ingresoXfgets, 100, stdin);
    ingresoXfgets[strcspn(ingresoXfgets, "\n")] = 0;
    validar=validarEntero(ingresoXfgets);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoXfgets);
    yc = strtol(ingresoXfgets,NULL,10);    
    }while (!validar);
    validar=false;
    printf("Usted ingreso yc: %d\n\n",yc);

    fflush(stdout);
        clearScreen();
        do{
    printf("ingrese rc: ");
    fgets(ingresoXfgets, 100, stdin);
    ingresoXfgets[strcspn(ingresoXfgets, "\n")] = 0;
    validar=validarEntero(ingresoXfgets);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoXfgets);
    rc = strtol(ingresoXfgets,NULL,10);    
    }while (!validar);
    validar=false;
    printf("Usted ingreso rc: %d\n\n",rc);

    fflush(stdout);
    clearScreen();
        do{
    printf("ingrese xp: ");
    fgets(ingresoXfgets, 100, stdin);
    ingresoXfgets[strcspn(ingresoXfgets, "\n")] = 0;
    validar=validarEntero(ingresoXfgets);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoXfgets);
    xp = strtol(ingresoXfgets,NULL,10);    
    }while (!validar);
    validar=false;
    printf("Usted ingreso xp: %d\n\n",xp);

fflush(stdout);
    clearScreen();
        do{
    printf("ingrese yp: ");
    fgets(ingresoXfgets, 100, stdin);
    ingresoXfgets[strcspn(ingresoXfgets, "\n")] = 0;
    validar=validarEntero(ingresoXfgets);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoXfgets);
    yp = strtol(ingresoXfgets,NULL,10);    
    }while (!validar);
    validar=false;
    printf("Usted ingreso yp: %d\n\n",yp);

    fflush(stdout);
    clearScreen();

    printf("Todos los ingresos fueron\n");
    printf("xc: %d\n",xc);
    printf("yc: %d\n",yc);
    printf("rc: %d\n",rc);
    printf("xp: %d\n",xp);
    printf("yp: %d\n",yp);
    system("pause");

    enum Referencia resultado = dondeEstaElPunto(xc, yc, rc, xp, yp);

       if (resultado == INTERNO){

        printf("El punto esta dentro de la circunferencia.\n");}

        
       if (resultado == EN_CIRCUNFERENCIA){

        printf("El punto esta sobre la circunferencia.\n");}

        
       if (resultado == EXTERNO){

        printf("El punto esta fuera de la circunferencia.\n");}
    



    system("pause");
    return 0;
}