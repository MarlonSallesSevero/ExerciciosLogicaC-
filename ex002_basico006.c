#include <stdio.h>

int main(){

int numInfo[5], i, soma;
soma = 0;

for(i = 0; i < 5; i++){
    printf("Informe o valor %i da lista de 5:",i + 1);
        scanf("%i",&numInfo[i]);
    soma += numInfo[i];
    }
    printf("A soma desses numeros eh:%i",soma);
}
