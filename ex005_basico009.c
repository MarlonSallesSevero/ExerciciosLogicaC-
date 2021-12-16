
/*Faça um programa que leia uma matriz numérica 5 X 5 e calcule a soma dos
elementos da diagonal principal. Mostrar na tela a matriz original e a soma.*/

/*Criar duas matrizes 2X2, contendo números inteiro, e, em uma terceira matriz
armazenar a soma das duas, apresentando-a na tela.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[2][2],i,j,soma = 0;

for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("Informe o valor da posicao [%i][%i] da matriz 01:",i,j);
            scanf("%i",&matriz[i][j]);
            if(i == j){
                soma = soma + matriz[i][j];
            }
        }
    }
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
        printf("%i\n",matriz[i][j]);
        }
    }
printf("A soma da Diagonal Principal desta matriz e igual a :%i",soma);
}
