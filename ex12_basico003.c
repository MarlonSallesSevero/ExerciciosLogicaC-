#include <stdio.h>

int main(void){
int n, m, x;
m = 5;
x = 0;

printf("Os primeiros numeros multiplos de 3 sao :");
while(m >= 0){
    if(x % 3 == 0){
        printf("%i\n",x);
        m = m - 1;
        }
    x = x + 1;
    }
};
