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

    
    
    return 0;
    
}