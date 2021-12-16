#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

/*Criar uma matriz 3X3, contendo números inteiros, e armazene a soma de cada linha
dentro de um vetor.*/


int arr[3][3],arrSoma[3][3];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Informe o valor da posicao [%i][%i]",i,j);
            scanf("%i",&arr[i][j]);
        }
    }
}
