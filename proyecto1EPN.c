#include <stdio.h>
#include <string.h>


struct productos{       //Esta es la caja
        
    char marca[30];
    float precio;
    int peso;

};


int main(void){

    int opcion;
    float iva = 1.15;   // (15%  -> 1.15)  (8% -> 1.08)    (0% -> 1.00)
    
    struct productos leche;     //Primer producto el cual viene en la caja
    struct productos arroz;
    
    
    
    strcpy(leche.marca, "Leche lala");
    leche.precio = 5;
    leche.peso = 1;
    
    strcpy(arroz.marca, "Arroz Real");
    arroz.precio = 2;
    arroz.peso = 1;

    
    
    printf("Digite el numero de opcion a hacer: \n");
    printf("1. Sumar dos numeros\n");
    printf("2. Restar dos numeros\n");
    printf(">>");
    scanf("%d",&opcion);

    switch (opcion) {
    case 1:

        int num1, num2;

        printf("Digite el primer numero: \n");
        scanf("%d",&num1);
        printf("Digite el otro numero: \n");
        scanf("%d",&num2);

        printf("La suma de ambos numeros es: %d", num1 + num2);

        break;

    case 2:

        printf("Digite dos numeros para restarlos: \n");

        break;
    
    default:
        break;
    }
    



    

    return 0;
}