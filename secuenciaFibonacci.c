//Secuencia la cual sigue un patron numerico
//Donde cada numero es la suma de los dos anteriores
// 0, 1, 1, 2, 3, 5, 8...
#include <stdio.h>

int main(void){

    int i, j;


    for (i = 0; i <=4; i++){
        
        for (j = 0; j <= i; j++){

            if((i + j) == 2){
                
                j = 0;
                i = 1;
                break;
            }
            


            printf("%d ", i + j);

        }
        
        
    }

    return 0;
}