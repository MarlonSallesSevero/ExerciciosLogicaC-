#include <stdio.h>

int main(){

int n, i;

printf("Informe o numero limite do intervalo:");
scanf("%i",&n);
printf("Os numeros Impares Positivos menores que %i sao :\n",n);

for(i = 0; i < n; i++){

    if(i % 2 != 0){
    printf("%i\n",i);
        }
    }
}

