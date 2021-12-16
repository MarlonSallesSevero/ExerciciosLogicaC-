#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float tlReal,ctDol;

printf("Informe o total de Reais que voce tem:");
scanf("%f",&tlReal);
printf("Informe o atual valor do dolar:");
scanf("%f",&ctDol);

printf("Voce tem um total de: %.2f dolares",tlReal/ctDol);


}
