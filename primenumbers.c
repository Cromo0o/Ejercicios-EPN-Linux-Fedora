/* Un numero primo es un numero natural N = {1, 2, 3, 4...} 
    mayor que 1 que no tiene divisores positivos más que el uno y él mismo.

    Es decir que al dividirlo por 1 y por si mismo, su residuo es cero.

*/

#include <stdio.h>
#include <math.h>

int main(void){ 

    int n, d, residuoDivision, verificarPrimo; // n = Number   d = divisor 

    printf("* Programa para saber si un numero es primo o no*\n");
    printf("Digite el numero que desea verificar: \n");
    printf(">>");
    scanf("%d",&n);

    if( n > 0 ){

        d = 1;
        verificarPrimo = 0;
        
        while ( d <= trunc(sqrt(n)) ){

            
            residuoDivision = n % d;
            //verificarPrimo = verificarPrimo + residuoDivision; 
            
            printf("%d",residuoDivision);
            d++;

        }
        
                


        /*
        if ( verificarPrimo == 0 ){

            printf("%d",verificarPrimo);
            
            printf("\nEl numero %d es primo\n", n);
        }
        else{
            printf("%d",verificarPrimo);
            printf("\nEl numero %d no es primo\n", n);
        }
        */
    }
    else{

        printf("El numero ingresado debe ser un natural N = {1, 2, 3, 4,..., n}");

    }
    
    return 0;

}