#include <stdio.h>

int main(){

int a[10],maior,menor,i,posMaior,posMenor;
posMaior,posMenor = 0;

for(i = 0; i < 10; i++){
    printf("Informe o valor na posicao %i:",i);
        scanf("%i",&a[i]);
     if(i == 0){
        maior = a[i];
        menor = a[i];
        }
        else if(a[i] > maior){
            maior = a[i];
            posMaior = i;
        }else if(a[i] < menor){
            menor = a[i];
            posMenor = i;
        }
    }
    printf("O maior Numero Informado foi :%i e ele esta na posicao %i\n",maior,posMaior);
    printf("O menor Numero Informado foi :%i e ele esta na posicao %i\n",menor,posMenor);
}
