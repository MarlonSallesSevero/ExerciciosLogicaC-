#include <stdio.h>

int main(){


int i , n;
float fatorial, resultado;


printf("Informe um valor:");
    scanf("%i",&n);

resultado = 1;
fatorial = 1;

for(i = 1; i <= n; i++){
    fatorial = fatorial * (1 / i);
    resultado = fatorial + resultado;
    }
printf("O valor de E eh: %.2f",resultado);
}
