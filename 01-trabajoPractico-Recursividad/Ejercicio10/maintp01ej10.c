#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "../../libs/tp0repaso/headers/TP0_Repaso.h"
#include "../../libs/recursividad/headers/TP_1_recursividad.h"

#include "../../libs/validaciones/headers/Validacion_datos.h"

//C:\Estructura2026\Repositorios\prueba2026\libs\tp0repaso\headers


int main() {

    char ingresoNumero[100];
    int numero;
    int bomba;
    bool validar=false;

    do{
    printf("ingrese un numero entero menor a 1000000: ");
    fgets(ingresoNumero, 100, stdin);
    ingresoNumero[strcspn(ingresoNumero, "\n")] = 0;
    validar=validarEntero(ingresoNumero);

    if (validar){
        printf("es un entero valido\n");
        numero = strtol(ingresoNumero,NULL,10);    
        }
    else{printf("NOO es un entero valido, intentelo nuevamente\n");}
    
    printf("Usted ingreso: %s\n",ingresoNumero);
        
    }while (!validar);

    validar=false;
    printf("Usted ingreso: %d\n\n",numero);
    
    fflush(stdout);
    clearScreen();

    do{
    printf("ingrese bomba: ");
    fgets(ingresoNumero, 100, stdin);
    ingresoNumero[strcspn(ingresoNumero, "\n")] = 0;
    validar=validarEntero(ingresoNumero);

    if (validar){printf("es un entero valido\n");
            bomba = strtol(ingresoNumero,NULL,10); 
             }

            else{
                printf("NOO es un entero valido, intentelo nuevamente\n");
                }
    

      
    }while (!validar);

    

    printf("el  numero es: %d\n",numero);
    printf("la bomba es: %d\n",bomba);
    printf("\n");

    int* resultado = explosion(numero,bomba);

    for (int i = 0; resultado[i] != -1; i++) {
    printf("%d ", resultado[i]);

        }
    
    


    system("pause");


    return 0;
}