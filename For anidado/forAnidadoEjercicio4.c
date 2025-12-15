//Imprime una matriz de 4x4. El valor en cada posicion debe ser la suma de los indices ij
#include <stdio.h>

int main(void){

    for ( int i = 1; i <= 4; i++){
        
        for ( int j = 1; j <= 4; j++){
            
            printf("%d ", i + j);

        }

        printf("\n");

    }
    
    return 0;
}