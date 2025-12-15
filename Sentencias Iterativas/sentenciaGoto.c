//sentencia de control Go To o goto
//sirve para saltar de un punto a otro dentro de una funcion
#include <stdio.h>

int main(void){

    int n = 1;

    label:
        printf("%d", n);
        n++;

        if (n <= 10){

            goto label; //Regresa a "label" y ejecuta todo hasta que ya no se cumpla el condicional

        }

    return 0;
}