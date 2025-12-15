#include <stdio.h>

int main(void){


    for ( int i = 1; i <= 10; i++){

                
        if (i == 6){

            continue;   //Automaticamente ignora todo lo que viene despues

        }
        else{

            printf("%d", i);

        }
    }

    return 0;
}