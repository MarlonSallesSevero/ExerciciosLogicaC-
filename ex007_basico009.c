/*Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou
uma mensagem de “não encontrado”.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

int matriz[5][5],x,soma = 0,encontrado = 0;

for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
         printf("matriz[%i][%i]:",i,j);
            scanf("%i",&matriz[i][j]);
        }
    if(i == 4){
        printf("Informe um valor X:");
            scanf("%i",&x);
        }
    }
for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        if(matriz[i][j] == x){
            encontrado = encontrado + 1;
            }
        }
    }
if(encontrado == 0){
    printf("NUMERO NAO ENCONTRADO");
    }else{
    printf("O NUMERO %i FOI ENCONTRADO %ix NO ARRAY!",x,encontrado);
    }
}
