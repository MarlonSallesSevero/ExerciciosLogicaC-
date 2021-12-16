#include <stdio.h>

int main(){

int n,i;

printf("Informe um valor que voce quer ver os divisores:");
    scanf("%i",&n);

for( i = 1; i < n; i++){
    if(n % i == 0){
        printf("%i\n",i);
        }
    }

}
