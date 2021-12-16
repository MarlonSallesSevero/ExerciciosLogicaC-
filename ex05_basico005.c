#include <stdio.h>

int main(){

int rep,n,menor,maior,i;
float soma;

printf("Informe o total de repeticoes:");
        scanf("%i",&rep);

for(i = 0; i < rep; i++){
    printf("Informe um valor:");
        scanf("%i",&n);
    if(i == 0){
        menor == n;
        maior == n;
    }
    if(n < menor){
        menor = n;
    }else if(n > maior ){
        maior = n;
        }
        soma = soma + n;
    }
printf("A media dos numeros informados:%f\n",soma/rep);
printf("Menor numero da lista eh:%i\n",menor);
printf("Maior numero da lista eh:%i\n",maior);
}



