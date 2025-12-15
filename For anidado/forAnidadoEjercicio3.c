//Imprimir un triangulo rectangulo derecho de 5 filas.
#include <stdio.h>

int main(void){

    for (int i = 0; i <= 5; i++){
        
        for (int j = 1; j <= i; j++){
            
            printf("@ ");

        }

        printf("\n");

    }
    

    return 0;
}