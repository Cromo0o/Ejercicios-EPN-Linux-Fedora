//Imprime un tablero de ajedrez 8x8. Usar W white y B black.
/*
W B W B W B W B
B W B W B W B W
W B W B W B W B
B W B W B W B W
W B W B W B W B
B W B W B W B W
W B W B W B W B
B W B W B W B W
*/
#include <stdio.h>

int main(void){


    for (int i = 1; i <= 8; i++){
        
        for (int j = 1; j <= 8; j++){

            if( (i % 2) == 0){

            printf("B ");
            }
            else{

            printf("W ");

            }
            
        }
        
        printf("\n");
        
    }
    
    return 0;
}