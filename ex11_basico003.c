#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float n,x ;

printf("Informe um valor:\n");
scanf("%f",&n);

    while(n>=1){
        x = 1;
        while(x <= n){ //escreve uma linha
            printf("*");
            x = x + 1;
        }
        n = n - 1;
        printf("\n");
    }
    printf("\n");
}



