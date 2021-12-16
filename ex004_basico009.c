#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){


/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor*/

int maior, i, j, matriz[4][4];

for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
        printf("Informe o valor da posicao [%i][%i]",i,j);
            scanf("%i",&matriz[i][j]);
        if(i == 0 && j == 0){
            maior = matriz[i][j];
            }else if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
printf("O maior valor informado foi: %i",maior);
}
