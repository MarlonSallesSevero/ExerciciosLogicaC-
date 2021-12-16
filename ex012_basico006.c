#include <stdio.h>

/*Faça um programa que leia dois vetores de 10 posições e calcule outro vetor
contendo, nas posições pares os valores do primeiro e nas posições impares os
valores do segundo.*/

int main(){

int arr[10],arrDois[10], arrTres[10],i;

for(i = 0; i < 10; i++){
    printf("Informe o valor %i do primeiro Array:",i);
        scanf("%i",&arr[i]);
        if(i == 9){
            printf("Primeiro Array Ok\n");
            for(i = 0; i < 10; i++){
                printf("Informe o valor %i do segundo Array:",i);
                    scanf("%i",&arrDois[i]);
                    if(i == 9){
                        printf("Segundo Array Ok\n");
                }
            }
        }
    }

for(i = 0; i < 10; i++){
    if(i % 2 == 0){
        arrTres[i] = arr[i];
        }else{
        arrTres[i] = arrDois[i];
        }
    }

printf("Imprimindo o terceiro array com as posicoes!!\n");
for(i = 0; i < 10; i++){
    printf("%i\n",arrTres[i]);
    }
}
