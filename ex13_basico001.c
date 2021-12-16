#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float a,b,c,r,s,d;

printf("Informe o primeiro numero:");
scanf("%f",&a);
printf("Informe o segundo numero:");
scanf("%f",&b);
printf("Informe o terceiro numero:");
scanf("%f",&c);
r = ((a+b)*(a+b));
s = ((b+c)*(b+c));
d = ((r+s)/2);
printf("resultado = %.2f", d);
}





