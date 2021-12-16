#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float peso,alt,imc;

printf("Informe sua Altura:");
scanf("%f",&alt);
printf("Informe o seu Peso:");
scanf("%f",&peso);

imc = peso/(alt*alt);

printf("Sua IMC eh igual a: %.3f",imc);


}
