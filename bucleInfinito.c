#include <stdio.h>
#include <unistd.h>

int main(void){

    for ( ; ; ){    //For. sin condiciones
        printf("This loop will run forever.\n");
        sleep(5);   //Frecuencia de ejecucion o que se detiene (un segundo)
    }
    
    while (1){
        printf("Este bucle se va a imprimir infinitamente\n");
    }
    

    return 0;
}