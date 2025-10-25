//Operaciones basicas en C utilizando solo dos variables
#include <stdio.h>

int main(void){

    float a = 10, b = 4;

    printf("a + b = %.0f\n", a + b);
    printf("a - b = %.0f\n", a - b);
    printf("a * b = %.0f\n", a * b);
    printf("a / b = %.0f\n", a / b);

    {

        //El operador mod solo admite valores enteros        
        int a = 10, b = 4;

        printf("a && b = %d\n", a % b);

    }

    return 0;
}