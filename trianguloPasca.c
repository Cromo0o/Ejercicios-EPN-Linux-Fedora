//Codificar un programa en C que imprima las primeras n filas del triangulo de Pascal
#include <stdio.h>

long long coeficiente(int n, int k){

    long long res = 1;
    int i;

    if (k > n - k){

        k = n - k;

    }

    for ( i = 1; i <= k; i++){
        
        res = res * (n - i + 1) / i;

    }    

    return res;
}

