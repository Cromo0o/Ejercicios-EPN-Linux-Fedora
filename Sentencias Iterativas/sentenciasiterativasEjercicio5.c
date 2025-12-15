//Suma de los primeros 5 numeros
#include <stdio.h>

int main(void){

   int number;  //tabla del n numero
   int filaMax; //hasta que numero se multiplica
   int i;

    printf("De que numero quieres que sea la tabla de multiplicar: ");
    scanf("%d", &number);

    printf("Hasta que numero quieres multiplicar?: ");
    scanf("%d", &filaMax);

   for ( i = 1; i <= filaMax; i++)
   {
        printf("%d x %d = %d\n", number, i, number * i);

   }

    return 0;
}