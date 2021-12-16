#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float dist,media,combus;

printf("Informe a distancia percorrida em Km/h:");
scanf("%f",&dist);

printf("Informe o total de combustivel gasto p/L:");
scanf("%f",&combus);

media = dist/combus;
printf("A media de consumo e:%2.f Km/L",media);


}
