#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float tempC,tempF;

printf("Informe a temperatura em Celcius:");
scanf("%f",&tempC);
tempF = (((9 * tempC) + 160)/5);

printf("Essa temperatura em Fahe e igual a: %.2f",tempF);


}
