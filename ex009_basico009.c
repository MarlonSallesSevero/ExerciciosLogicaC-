#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[3][3],matrizTransp[3][3];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("matriz[%i][%i]:",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
printf("** Imprimindo a matriz Transposta**")
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        matrizTransp[j][i] = matriz[j][i];
        printf("%i\n",matriz[j][i]);
        }
    }
}
