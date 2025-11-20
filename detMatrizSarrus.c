#include <stdio.h>

int main(void){

    int matriz[3][3];
    int i, j;
    long determinante;

    printf("## Calculadora de determinante 3x3 ##\n");
    
    for ( i = 0; i < 3; i++){
        
        for (j = 0; j < 3; j++){
            
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
        

    }

    printf("\nMatriz ingresada:\n");
    for ( i = 0; i < 3; i++){
        
        for ( j = 0; j < 3; j++){
            
            printf("%4d", matriz[i][j]);

        }
        printf("\n");

    }
    
    long positivos = (long)matriz[0][0] * matriz[1][1] * matriz[2][2] +
                     (long)matriz[0][1] * matriz[1][2] * matriz[2][0] + 
                     (long)matriz[0][2] * matriz[1][0] * matriz[2][1];


    long negativos = (long)matriz[0][2] * matriz[1][1] * matriz[2][0] +
                     (long)matriz[0][0] * matriz[1][2] * matriz[2][1] + 
                     (long)matriz[0][1] * matriz[1][0] * matriz[2][2];
                     
    determinante = positivos - negativos;

    printf("\nEl determinante de la matriz es: %1d\n", determinante); 

    return 0;
}