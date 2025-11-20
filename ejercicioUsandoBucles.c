/*
Hacer lo siguiente:

1
2   3
6   5   4
7   8   9   10
15  14  13  12  11
16  17  18  19  20  21
28  27  26  25  24  23  22
29  30  31  32  33  34  35  36




*/
#include <stdio.h>

int main(void){

    int filas;

    printf("Cuantas filas desea ingresar: ");
    scanf("%d", &filas);

    for (int i = 1; i <= filas; i++){
        //Patron de la fila 'i'
        for (int j = 0; j <= i; j++){
            
            printf("%d ", i + 1);

        }
        
        printf("\n");

    }

    return 0;
}