#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand(time(NULL));  //semilla aleatoria segun un parametro (genera numeros aleatorios)
    const int secretNumber = rand() % 11;
    int guess;
    int difference;

    printf("Adivina el numero secreto (entre 0 y 10)\n");

    do{
        printf("Ingrese tu intento: ");
        scanf("%d", &guess);

        if (guess == secretNumber){
            
            printf("Felicidades, adivinaste el numero.\n");
            break;

        }
        
        difference = abs(secretNumber - guess);

        if (difference <= 5){
            printf("Caliente. ");
        }
        else{
            printf("Frio. ");
        }

        
        if(guess < secretNumber){

            printf("El numero secreto es mayor.\n");

        }
        else{

            printf("El numero secreto es menor\n");
        }

    } while (1);

    return 0;
}