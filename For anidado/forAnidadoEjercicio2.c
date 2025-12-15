//Imprimir una matriz 3x3. En lugar de numeros, imprime la coordenada de la fila i en cada posicion.
#include <stdio.h>

int main(void){

    for ( int i = 1; i <= 3 ; i++){

        for (int j = 1; j <=3; j++){

            printf("%d ", i);

        }
        
        printf("\n");

    }
    

    return 0;
}