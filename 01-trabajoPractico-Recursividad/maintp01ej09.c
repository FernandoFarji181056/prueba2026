#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <limits.h>
#include "../libs/tp0repaso/headers/TP0_Repaso.h"
#include "../libs/recursividad/headers/TP_1_recursividad.h"

#include "../libs/validaciones/headers/Validacion_datos.h"

//C:\Estructura2026\Repositorios\prueba2026\libs\tp0repaso\headers
//-2.147.483.648
// 2.147.483.647
int main() {


    char ingresoNumero[100];
    int numero;
    bool validar=false;

    do{
    printf("DIVISIBLE POR 7\n");
    printf("ingrese un numero entero mayor a -1000000 y menor a 1000000: ");
    fgets(ingresoNumero, 100, stdin);
    ingresoNumero[strcspn(ingresoNumero, "\n")] = 0;
    validar=validarEntero(ingresoNumero);

    if (validar){

        numero = strtol(ingresoNumero,NULL,10);

        if (numero <-1000000 || numero > 1000000){
        printf("el numero esta fuera del rango permitido\n");
        printf("intentelo nuevamente\n\n");
        validar=false;
            }  

        }
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    //printf("Usted ingreso: %s\n",ingresoNumero);


        
    }while (!validar);

    validar=false;
    printf("Usted ingreso: %d\n\n",numero);
    
    //fflush(stdout);
    clearScreen();

   if (numero<0){
    numero=-numero;
   }

    if(divisiblePor7(numero)){
        printf("el numero es divisible por 7\n");
        

        }
        else{
            printf("el numero NO es divisible por 7\n");
    }

    

    printf("el  numero es: %d\n",numero);
  
    system("pause");

    return 0;
}