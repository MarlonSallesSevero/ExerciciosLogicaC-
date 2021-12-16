
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float n;

printf("Informe sua idade:");
    scanf("%f",&n);
if(n > 70 || n==16 || n==17){
    printf("Seu voto é facultativo");
}else if(n > 18 && n < 70){
    printf("Voto Obrigatorio");
}else{
    printf("Nao pode Votar");
    }
}
