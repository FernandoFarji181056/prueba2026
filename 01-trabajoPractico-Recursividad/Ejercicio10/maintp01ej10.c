#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




// Ejercicio 1
/*1.	Construir una función recursiva que retorne verdadero si una cadena de caracteres pasada 
como parámetro es un palíndromo.  Ej. “neuquen” ya que se lee igual de atrás hacia adelante.*/
int main (){
    char ingresoPalindromo[1000];
    bool validar=true;

   do{
    validar=true;
    printf("ingrese una palabra o una frase de no mas 999 digitos: ");
    fgets(ingresoPalindromo, 1000, stdin);
    ingresoPalindromo[strcspn(ingresoPalindromo, "\n")] = 0;
    printf("usted ingreso: %s\n", ingresoPalindromo);
    int longitud = strlen(ingresoPalindromo);
    printf("cant caracteres: %d\n", longitud);
    for(int i=0;i<longitud;i++){
        //printf(" : %c\n", ingresoPalindromo[i]);
                    if (ingresoPalindromo[i]>64&&ingresoPalindromo[i]<91 ||  ingresoPalindromo[i]>96&&ingresoPalindromo[i]<123 || ingresoPalindromo[i]== ' ' ||  ingresoPalindromo[i]>47&&ingresoPalindromo[i]<58){
                    printf("correcto: \n");
                }
                    else {
                        printf("INcorrecto: \n");
                        validar=false;
                    }

                }
    
       if (validar==false)("INGRESO INVALIDO, INTENTELO \n");
       system("pause");
    }while (!validar);
  
    system("pause");
   

   }