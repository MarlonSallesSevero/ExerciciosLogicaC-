#include <stdio.h>

int main(){

int i, numero,aux;

aux = 0;
i = 0;
printf("Informe um numero:");
scanf("%i",&numero);

for(i = 1; i < numero; i++){
    if (numero % i == 0){
        aux += i;
        }
    }
    if(aux == numero){
        printf("PERFEITO:%i",aux);
    }else{
        printf("N PERFEITO: %i",aux);
    }

}
