#include <stdio.h>

int main(){

int n,maior,i;


maior = 0;

for(i = 0; i <= 10; i++){
    printf("Informe um valor:");
        scanf("%i",&n);
    if(i == 0){
        maior = n;
    }else if(n > maior){
            maior = n;
        }
    }
printf("O maior numero e:%i\n",maior);
}

