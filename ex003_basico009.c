/*Criar duas matrizes 2X2, contendo números inteiro, e, em uma terceira matriz
armazenar a soma das duas, apresentando-a na tela.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[2][2],matrizDois[2][2],matrizTres[2][2],i,j,soma = 0;

for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("Informe o valor da posicao [%i][%i] da matriz 01:",i,j);
            scanf("%i",&matriz[i][j]);
        }
    }
printf("*********************\n");
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("Informe o valor da posicao [%i][%i] da matriz 02:",i,j);
            scanf("%i",&matrizDois[i][j]);
        }
    }
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        matrizTres[i][j] = matriz[i][j] * matrizDois[i][j];
        printf("[%i]x[%i] = [%i]\n",matriz[i][j],matrizDois[i][j],matrizTres[i][j]);
        }
    }
}
