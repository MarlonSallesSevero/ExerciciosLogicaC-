#include <stdio.h>

int main(){

int n, i;

printf("Informe o numero INTEIRO que voce quer o fatorial:");
    scanf("%i",&n);

for(i = 1; n > 1;n--){
    i = i*n;
        printf("%i\n",i);
    }
}
