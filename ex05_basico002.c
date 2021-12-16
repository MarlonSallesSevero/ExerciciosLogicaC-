
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int num;
float imp;
float raiz;
printf("Informe um numero:");
    scanf("%i",&num);

raiz = sqrt(num);
if(num % 2 == 0){
    printf("Valor Par, entao a raiz quadrada desse valor eh:%f",raiz);
}else{
    imp = num;
    printf("Impar, entao sua metade eh igual a: %.2f",imp/2);
    }
}
