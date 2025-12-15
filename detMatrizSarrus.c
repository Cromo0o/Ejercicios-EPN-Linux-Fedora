#include <stdio.h>

int main(void){


    //arr = {1, 2, 3}, pero se lee el 1 como el valor 0, el 2 como el valor 1 y el 3 como el valor 2
    int matriz[3][3];   //matriz de 3 filas y 3 columnas //Numero de elementos
    int i, j;
    long determinante;

    printf("## Calculadora de determinante 3x3 ##\n");
    
    for ( i = 0; i < 3; i++){
        
        for (j = 0; j < 3; j++){
            
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

        }
        

    }

    //Mostrar la matriz ingresada en la terminal
    printf("\nMatriz ingresada:\n");
    for ( i = 0; i < 3; i++){
        
        for ( j = 0; j < 3; j++){
            
            printf("%4d", matriz[i][j]);

        }
        printf("\n");

    }

    //Calcular el determinante (Regla de Sarrus)
    //Sarrus: (a11*a22*a33 + a12*a23*a31 +.........


    //Suma de las diagonales principales (positivas)
    long positivos = (long)matriz[0][0] * matriz[1][1] * matriz[2][2] +
                     (long)matriz[0][1] * matriz[1][2] * matriz[2][0] + 
                     (long)matriz[0][2] * matriz[1][0] * matriz[2][1];


    //Suma de las diagonales principales (negativas)
    long negativos = (long)matriz[0][2] * matriz[1][1] * matriz[2][0] +
                     (long)matriz[0][0] * matriz[1][2] * matriz[2][1] + 
                     (long)matriz[0][1] * matriz[1][0] * matriz[2][2];
                     
    determinante = positivos - negativos;

    printf("\nEl determinante de la matriz es: %1d\n", determinante); 

    return 0;
}