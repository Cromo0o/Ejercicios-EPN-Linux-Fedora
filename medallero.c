//Simulador de medallero olimpico hecho por el profesor

#include <stdio.h>

int main(void){

    int oroA, plataA, bronceA;
    int oroB, plataB, bronceB;
    
    printf("Ingrese la cantidad de medallas del equipo A");
    scanf("%d %d %d", &oroA, &plataA, &bronceA);

    printf("Ingrese la cantidad de medallas del equipo B");
    scanf("%d %d %d", &oroB, &plataB, &bronceB);

    if(oroA>oroB){

        printf("El equipo A es el ganador por medallas de oro");

    }
    else if(oroA<oroB){

        printf("El equipo B es el ganador po medallas de oro");

    }
    else{

        if(plataA>plataB){

            printf("El equipo A es el ganador por medallas de plata");

        }
        else if(plataA<plataB){

            printf("El equipo B es el ganador por medallas de plata");

        }
        else{

            if(bronceA>bronceB){

                printf("El equipo A es el ganador por medalals de bronce");

            }
            else if (bronceA<bronceB){

                printf("El equipo B es el ganador por medallas de bronce");

            }
            else{

                printf("Ambos equipos quedan en empate por tener la misma cantidad de medallas ");

            }
        }
    }

    return 0;
}