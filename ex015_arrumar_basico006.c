/*15.Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números
que estão em ambos os vetores. Não deve conter números repetidos.*/

#include <stdio.h>

int main(){

int arr[5],arrB[5],nvArr[5],i,j,vl,vl2,qt;

for(i = 0; i < 5; i++){
    printf("Informe o valor da posicao %i Array do Array A:",i);
        scanf("%i",&arr[i]);
    if(i == 4){
    printf("Primeiro Array Ok\n");
        for(i = 0; i < 5; i++){
            printf("Informe o valor da posicao %i Array do Array B:",i);
                scanf("%i",&arrB[i]);
            }
        }
    }
}
