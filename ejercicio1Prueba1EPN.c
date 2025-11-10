//Identificar si un triangulo es equilatero, isosceles o escaleno. Verificar si es un triangulo.
#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Ingrese los lados del triangulo: \n");
    scanf("%d %d %d", &a, &b, &c);

    //Utilizamos la definicion de desigualdad triangular
    if ( a+b <= c || a+c<=b || b+c<=a ){

        printf("Los lados ingresados no forman un triangulo\n");
        return 1;

    }
    
    if (a==b && b==c){

        printf("El triangulo es equilatero\n");

    }
    else if( a==b || b==c || a==c ){

        printf("El triangulo es isosceles\n");

    }
    else{

        printf("El triangulo es escaleno\n");

    }

    return 0;

}