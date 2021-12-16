#include <stdio.h>

int main(void){
int cont, n, soma;

cont = 1;
soma = 0;

printf("Informe um valor:");
    scanf("%i",&n);
while(cont != n){
    if(n % cont == 0){
        soma = soma + cont;
        printf("%i\n",cont);
    }
    cont = cont + 1;
    }
printf("A soma dos numeros eh:%i",soma);
};
