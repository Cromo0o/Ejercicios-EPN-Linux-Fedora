//Imprimir un rectangulo de 4 filas y 7 columnas usando el caracter *
#include <stdio.h>

int main(void){

    for ( int i = 1; i <= 4; i++){  //Controla las filas
        
        for ( int j = 1; j <= 7; j++){  //Controla las columnas
            
            printf("*");

        }
        
        printf("\n");

    }

    return 0;
}