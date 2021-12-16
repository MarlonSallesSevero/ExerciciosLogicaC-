#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[3][2],i,j,soma = 0;

for(i = 0; i < 3; i++){
    for(j = 0; j < 2; j++){
        printf("matriz[%i][%i]:",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
            for(j = 0; j < 2; j++){
                printf("[%i]\n",matriz[i][j] * 11);
        }
    }
}
