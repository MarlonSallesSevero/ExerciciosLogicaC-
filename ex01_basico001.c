#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float a;
float b;
float soma;
float div;
float sub;
float mult;

printf("Informe o primeiro valor:");
scanf("%f",&a);
printf("Informe o segundo valor:");
scanf("%f",&b);

soma = a + b;
div = a / b;
sub = a - b;
mult = a * b;

printf("**********************\n");
printf("Soma desses valores %.2f \n",soma);
printf("Sub desses valores %.2f \n",sub);
printf("Multi desses valores %.2f \n",mult);
printf("Div desses valores %.2f \n",div);

}
