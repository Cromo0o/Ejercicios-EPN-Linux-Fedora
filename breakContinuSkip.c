#include <stdio.h>

int main(void){

    for (int i = 0; i < 5; i++){
        
        if (i == 3){
            
            //sale del bucle si i es igual a 3
            break;
        
        }
        
        printf("%d ", i);

    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        
        if (i == 3){
            
            //Salta la iteracion actual cuando i = 3
            continue;
        
        }
        
        printf("%d ", i);

    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        
        if ( i == 3 ){

            //va al label(etiqueta) skip cuando i es igual a 3
            goto skip;

        }
        
        printf("%d ", i);
    
    }
    

skip:
    
    printf("\nJumped to the 'skip' label %s","when i equals 3.\n");
    

    return 0;
}