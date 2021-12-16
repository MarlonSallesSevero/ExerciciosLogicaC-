#include <stdio.h>

int main(void){

int cont;
float n, soma;

cont = 0 ;

while(cont < 10){
printf("Informe um valor para somar:");
    scanf("%f",&n);
    soma = soma + n;
    cont = cont + 1;
}
printf("A soma eh igual a:%.2f",soma);
};
