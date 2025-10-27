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

    if( n > 1 ){
        
        d = 2;
        verificarPrimo = 1; //Asumimos que es primo hasta verificar lo contrario
        
        while ( d <= trunc(sqrt(n)) ){
            residuoDivision = n % d;    //Si al dividir n de 2 en adelante, queda uno residuo 0, no es primo
            
            if(residuoDivision == 0){
                verificarPrimo = 0;     //El numero no es primo, se hace 0
                break;
            }
            d++;
        }
        
        if(verificarPrimo == 1){
            printf("El numero %d es un número primo.\n", n);
        
        }else{
            printf("El numero %d no es un número primo.\n", n);
        }
    }
    else{

        printf("El numero ingresado debe ser un natural N = {1, 2, 3, 4,..., n}");

    }
    
    return 0;

}