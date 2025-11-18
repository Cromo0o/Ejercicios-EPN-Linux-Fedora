#include <stdio.h>

int main(void){

    int numbers = 12345;

    int revNumbers = 0;


    while (numbers){
        
        revNumbers = revNumbers * 10 + numbers % 10;

        numbers = numbers / 10;     // numbers /= 10;
           

    }
       
    printf("%d\n", revNumbers);


    return 0;
}