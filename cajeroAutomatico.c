//Ejercicio de cajero automatico hecho por el profesor
#include <stdio.h>

int main(void){

    float saldo;
    int opcion;
    float monto;

    printf("Ingrese el saldo inicial: \n");
    scanf("%f", &saldo);

    do{     //Creamos un buble para que se repita el programa mientras se desee

        printf("----- Cajero Automatico ----- \n");
        printf("1. Deposito\n");
        printf("2. Retiro\n");
        printf("3. Consultar saldo\n");
        printf("4. Salir\n");
        printf("Ingrese la opcion deseada: \n");
        scanf("%d", &opcion);
        printf("\n\n");

        switch (opcion){
        
            case 1:
            
                printf("Digite el monto a depositar: ");
                scanf("%f", &monto);

                saldo += monto; //A saldo de sumo (+) el monto y luego esa suma la asigno(=) a la variable saldo

                printf("Su nuevo saldo es: %.2f", saldo);

                break;
            
            case 2:
            
                printf("Ingrese el valor a retirar: ");
                scanf("%f", &monto);

                if( monto > saldo ){

                    printf("Su saldo es insuficiente para completar esta transaccion");

                }
                else{

                    saldo -= monto;

                    printf("Retiro exitoso, su nuevo saldo es: ", saldo);

                }
            
                break;
            
            case 3:
            
                printf("Su saldo actual es: \n", saldo);

                break;
            
            case 4:
            
                printf("Gracias por usar el cajero");
            
                break;
        
        default:
            
            printf("\nOpcion ingresada no valida, ingrese un valor correcto\n");
            
            break;
        
        }


    }while(opcion != 4);

    return 0;

}