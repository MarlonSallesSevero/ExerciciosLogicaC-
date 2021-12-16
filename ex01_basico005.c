#include <stdio.h>

int main(){

int n, i;

printf("Informe a tabuada que quer verificar:");
scanf("%i",&n);

for(i = 0; i <= 10; i++){
    printf("%i x % i = %i\n",n,i,i*n);
    }
}
