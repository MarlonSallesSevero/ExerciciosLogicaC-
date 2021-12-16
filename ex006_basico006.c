#include <stdio.h>

int main(){

int a[8],i,x,y,soma;

for(i = 0; i < 8; i++){
    printf("Informe o %i valor:",i);
        scanf("%i",&a[i]);
        }
    printf("Informe o primeiro valor de 0 a 7:");
        scanf("%i",&x);
    printf("Informe o segundo valor de 0 a 7:");
        scanf("%i",&y);
    for(i = 0; i < 8; i++){
        soma = a[x] + a[y];
    }
    printf("A soma dos dois termos e igual a: %i",soma);
}
