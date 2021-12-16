#include <stdio.h>

int main(){

/*
Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene
em um vetor com 10 posições. Preencha um segundo vetor apenas com os números
ímpares do primeiro vetor. Imprima os dois vetores.
*/


int arr[10],i,j,nvVet[10],qtd;

qtd = 0;

for(i = 0; i < 10; i++){
    printf("Informe um valor de 0 a 50:");
        scanf("%i",&arr[i]);
    if(arr[i] > 50 || arr[i] < 0){
        printf("Numero Invalido!");
            break;
        }else{
            if(i == 9){
                for(j = 0; j < 10; j++){
                    if(arr[j] % 2 != 0){
                        nvVet[j] = arr[j];
                        qtd = qtd + 1;
                    }
                }
            }
        }
    }

for(j = 0; j < qtd; j++){
    printf("%i\n",nvVet[j]);
    }
}
