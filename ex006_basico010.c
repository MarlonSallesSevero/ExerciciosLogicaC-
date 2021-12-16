#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){

float valorDes;
int controle;

struct carro{
    char marca[15];
    int ano;
    float preco;
    }cr[2];

printf("VAMOS CADASTRAR 5 CARROS!\n");
for(int j = 0; j < 2; j++){
    printf("INFORME A MARCA DO %i° CARRO:",j+1);
        scanf("%s",&cr[j].marca);
    printf("INFORME A ANO DO %i CARRO:",j+1);
        scanf("%s",&cr[j].ano);
    printf("INFORME O PRECO DO %i CARRO:",j+1);
        scanf("%s",&cr[j].preco);
    printf("*****\n");
}
printf("INFORME UM VALOR PARA SEU CARRO:");
        scanf("%f",&valorDes);

while(controle != 0){

    for(int h = 0; h < 2; h++){
        for(int x = valorDes; x > 0; x--){
            if(valorDes == cr[x].preco || valorDes < cr[x].preco){
                printf("%s",cr[x].marca);
                }
            }
        }

    }
    printf("Se quiser continuar, digite uma numero diferente de zero!");
        scanf("%i",&controle);
}
