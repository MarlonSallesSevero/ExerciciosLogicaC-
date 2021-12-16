#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float raio,area;

printf("Informe o Raio do Circulo:");
scanf("%f",&raio);

area = (raio*raio)*3.14;
printf("A Area do Circulo e igual a:%2.f",area);


}
