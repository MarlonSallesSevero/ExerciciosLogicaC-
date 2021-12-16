/*12. Faça programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[3][6],i,j,soma = 0;
float media;
for(i = 0; i < 3; i++){
    for(j = 0; j < 6; j++){
        printf("matriz[%i][%i]:",i,j);
            scanf("%i",&matriz[i][j]);
            if(j % 2 != 0){
                soma = soma + matriz[i][j];
            }
            else if(j == 1 || j == 3){
                media = media + matriz[i][j];
            }
        }
    }
    printf("A soma dos elementos das colunas impares e igual a : %i\n",soma);
    printf("A media dos elementos das colunas 1 e 4 e igual a : %.2f",media/6);
}
