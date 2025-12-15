#include <stdio.h>

int main(void){

        //  (for externo)
    for (int i = 0; i < 3; i++){

        //  (for interno) 
        //no se ejecuta el for externo hasta que se complete de ejecutar el for interno
        for (int j = 0; j < 2; j++){
            
            printf("i = %d, j = %d\n", i, j);

        }
    }
    return 0;
}