#include <stdio.h>

int main(){

int n,menor,maior,i;

maior = 0;

printf("Informe o numero limite:");
        scanf("%i",&n);

printf("Numeros Pares no Intervalo:\n");
for(i = 0; i < n; i++){
    if(i % 2 == 0){
    printf("%i\n",i);
        }
    }
printf("Numeros Impares no Intervalo:\n");
for(i = 0; i < n; i++){
    if(i % 2 != 0){
    printf("%i\n",i);
        }
    }
}




