#include <stdio.h>

int main(void){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int key = 3;
    int size = 6;

    for ( int i = 0; i < size; i++){
        if (arr[i] == key){

            printf("Element found at position: %d\n", (i + 1));
            break;

        }
    }

    return 0;
}