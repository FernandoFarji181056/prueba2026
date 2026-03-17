#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "../../libs/tp0repaso/headers/TP0_Repaso.h"
#include "../../libs/validaciones/headers/Validacion_datos.h"

//C:\Estructura2026\Repositorios\prueba2026\libs\tp0repaso\headers


int main() {

    char ingresoNumero[100];
    long numero;
    short digito;
    bool validar=false;

    do{
    printf("ingrese un numero entero menor a 1000000: ");
    fgets(ingresoNumero, 100, stdin);
    ingresoNumero[strcspn(ingresoNumero, "\n")] = 0;
    validar=validarEntero(ingresoNumero);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoNumero);
    numero = strtol(ingresoNumero,NULL,10);    
    }while (!validar);

    validar=false;
    printf("Usted ingreso: %d\n\n",numero);
    
    fflush(stdout);
    clearScreen();

    do{
    printf("ingrese digito: ");
    fgets(ingresoNumero, 100, stdin);
    ingresoNumero[strcspn(ingresoNumero, "\n")] = 0;
    validar=validarEntero(ingresoNumero);

    if (validar){printf("es un entero valido\n");}
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoNumero);
    digito = strtol(ingresoNumero,NULL,10);    
    }while (!validar);
    //validar=false;
    printf("Usted ingreso el digito: %d\n\n",digito);

       
    system("pause");

    bool esta = digitoEnNumero(numero , digito);


    return 0;
}