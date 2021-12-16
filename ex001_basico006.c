#include <stdio.h>

int main(){

int i, a[6], somaItens;

a[0] = 1;
a[1] = 0;
a[2] = 5;
a[3] = -2;
a[4] = -5;
a[5] = 7;

somaItens = a[0] + a[1] + a[5];
printf("%i\n",somaItens);

a[4] = 100;
printf("%i\n",a[4]);
printf("*****\n");
for(i = 0; i < 6; i++){
    printf("%i\n",a[i]);
    }
}
