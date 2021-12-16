#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[4][4],i,j,soma = 0;

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("matriz[%i][%i]:",i,j);
            scanf("%i",&matriz[i][j]);
            soma = soma+matriz[i][j];
        }
    }
printf("A soma desses valores e igual a: %i",soma);
}
