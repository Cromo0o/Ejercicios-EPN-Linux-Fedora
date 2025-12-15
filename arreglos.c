//Codificar un progrma en C que calcule el valor promedio de los valores de un arreglo
//lenght - numero de elementos
#include <stdio.h>

int main(void){

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    int lenght = sizeof(ages) / sizeof(ages[0]);

    for ( i = 0; i < lenght; i++){
        
        sum += ages[i];

    }
    
    avg = sum /lenght;

    printf("The average age is: %.2f", avg);

    return 0;
}