
#include <stdio.h>

int main(void){
int n, m, x;


printf("Informe um valor:");
    scanf("%i",&n);
printf("Quantos numeros impares voce quer apos esse?");
    scanf("%i",&m);

while(m >= 0){
    if(n % 2 != 0){
        printf("%i\n",n);
        m = m - 1;
        }
n = n + 1;
    }
};
