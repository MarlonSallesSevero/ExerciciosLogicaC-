#include <stdio.h>
#include <math.h>
int main(){

int n,b,i,c;

printf("Informe a base:");
    scanf("%i",&b);
printf("Informe o expoente:");
    scanf("%i",&n);


for(i = n; i >= 0; i--){
    c = pow(n, i);
    printf("%i\n",c);
    }
}
