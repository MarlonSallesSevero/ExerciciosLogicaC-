#include <stdio.h>

int main(){

int numInfo[8], i;
i = 0;
for(i = 0; i < 8; i++){
    printf("Informe o valor %i da lista de 8:",i + 1);
        scanf("%i",&numInfo[i]);
    }
    printf("**Ordem Inversa do que Foi Informado**\n");
for(i = 8; i >= 0; i--){
    printf("%i\n", numInfo[i]);
    }
}
