#include <stdio.h>
#include <string.h>

struct productos{    
        
    char marca[30];
    float precio;

};


int main(void){

    int i = 0;  //cantidad inicial de productos en cada caso
    int n;  //cantidad de productos a ingresar en cada caso
    int opcion;
    float iva = 1.15;   // (15%  -> 1.15)  (8% -> 1.08)    (0% -> 1.00)
    

    struct productos lacteos[10];     //Primer producto el cual viene en la caja
    struct productos granos[10];
    struct productos vegetales[10];













    
    printf("Que tipo de producto desea ingresar\n");
    printf("1. Lacteos\n2. Granos\n");
    printf(">>");
    scanf("%d", &opcion);
    
    switch (opcion){
    
        case 1:

            printf("Cuantos lacteos desea ingresar: \n");
            scanf("%d", &n);
            
            while (i < n){  //Hasta que registre la cantidad deseada de productos
                
                //Empieza a registrar cada producto desde el 0 hasta los deseados
                // se guarda en lacteos[0] el primero
                // en lacteos[1] el segundo y así sucesivamente
                 
                printf("Digite la marca del producto: \n");
                printf(">>");
                getchar();  //Para que se lea el dato y no el salto de linea
                fgets(lacteos[i].marca, sizeof(lacteos[i].marca), stdin);
                i++;    //Se suma 1 mas hasta que llegue a la cantidad deseada de productos
            }


            printf("%s", lacteos[0].marca);
            printf("%s", lacteos[1].marca);
            printf("%s", lacteos[2].marca);
            
            break;

        case 2:

            while (i < n){  //Hasta que registre la cantidad deseada de productos
                
                //Empieza a registrar cada producto desde el 0 hasta los deseados
                // se guarda en lacteos[0] el primero
                // en lacteos[1] el segundo y así sucesivamente
                 
                printf("Digite la marca del producto: \n");
                printf(">>");
                getchar();  //Para que se lea el dato y no el salto de linea
                fgets(granos[i].marca, sizeof(granos[i].marca), stdin);
                i++;    //Se suma 1 mas hasta que llegue a la cantidad deseada de productos
            }
            
            break;
    
        default:
    
            printf("Pan con queso\n");
    
            break;
    }





    /*
    strcpy(leche.marca, "Leche lala");
    leche.precio = 5;
    leche.peso = 1;
    srtpy(leche.tipo, "Lacteos");
    
    strcpy(arroz.marca, "Arroz Real");
    arroz.precio = 2;
    arroz.peso = 1;
    strcpy(arroz.tipo, "Granos");
    */
    
    
    return 0;
    
}