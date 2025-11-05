//Un numero primo es aquel que sus unicas divisiones son dos y son exactas son para 1 y para si mismo.
//Debe ser un numero mayor que 1.   n>1

//Los numeros que dividiran el numero tienen que estar en un rango entre 2 y la raiz cuadrada del numero


#include <stdio.h>
#include <math.h>

int main(void){

    int n;

    printf("Digite el numero a verificar: ");
    scanf("%d",&n);


    if( n < 1 ){
    
        printf("Ingrese un numero valido\n");
        printf("Que sea mayor o igual que uno\n");

    }
    else if( n = 1 ){

        printf("El numero 1 no es primo\n");
        printf("Si bien cumple que dividir para 1 y para si mismo resulta en una division exacta,\n");
        printf("pero el 1 solo cuenta con un divisor.\n");

    }    
    else{

        int verificarPrimo = 1; //Asumimos que es primo hasta que se demuestre lo contrario
        int d = 2; //Divisor inicial
        int resto;  //Mientras el re
        
        while ( d <= trunc(sqrt(n))){   //Divide hasta que llegue al limite puesto
            
            resto = n % d;
            
            if(resto = 0){ 
                
                printf("El numero no es primo");
            
            }
            else{

                printf("El numero es primo");

            }

            d++;

        }

    }

    return 0;

}