#include <stdio.h>
#include <string.h>

struct productos{    
        
    char marca[30];
    float precio;

};


int main(void){

    int i; 
    int n;  //cantidad de productos a ingresar en cada caso
    int opcion;
    float iva = 1.15;   // (15%  -> 1.15)  (8% -> 1.08)    (0% -> 1.00)
    

    struct productos lacteos[10];     //Primer producto el cual viene en la caja
    struct productos granos[10];
    struct productos vegetales[10];
    
    printf("Que tipo de producto desea ingresar\n");
    printf("1. Lacteos\n2. Granos\n3. vegetales\n");
    printf(">>");
    scanf("%d", &opcion);
    
    switch (opcion){
    
        case 1:

            printf("Cuantos lacteos desea ingresar: \n");
            scanf("%d", &n);

            for ( i = 0; i < n; i++){
                
                printf("Digite la marca del prodcuto: \n");
                printf(">>");
                getchar();
                fgets(lacteos[i].marca, sizeof(lacteos[i].marca), stdin);

            }
            


            printf("%s", lacteos[0].marca);
            printf("%s", lacteos[1].marca);
            printf("%s", lacteos[2].marca);
            
            break;

        case 2:

            printf("Cuantos prodcutos tipo grano desea ingresar: \n");
            scanf("%d", &n);
        
            for ( i = 0; i < n; i++){
                
                printf("Digite la marca del prodcuto: \n");
                printf(">>");
                getchar();
                fgets(lacteos[i].marca, sizeof(lacteos[i].marca), stdin);

            }
            
            break;
        case 3:
            
            printf("Cuantos vegetales desea ingresar: \n");
            scanf("%d", &n);

            for (i = 0; i < n; i++){
                printf("Digite el producto que desa comprar: \n");
                printf(">>");
                getchar();
                fgets(vegetales[i].marca, sizeof(vegetales[i].marca), stdin);
            }
            printf("%s", vegetales[0].marca);
            printf("%s", vegetales[1].marca);
            printf("%s", vegetales[2].marca);

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