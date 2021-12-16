#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float perCvtB, perCvNul, perCvVal,tlElei,vtB, vNul, vVal;

printf("Informe o total de eleitores:");
scanf("%f",&tlElei);
printf("************************************************************************************\n");
printf("Informe o total de Votos em Branco:");
scanf("%f",&vtB);

printf("Informe o total de  Votos Nulos:");
scanf("%f",&vNul);

printf("Informe o total de  Votos Validos:");
scanf("%f",&vVal);

perCvtB = ((vtB/tlElei)*100);
perCvNul = ((vNul/tlElei)*100);
perCvVal = ((vVal/tlElei)*100);

printf("Teve um total de: %.2f %% de votos em Branco\n",perCvtB);
printf("Teve um total de votos nulos: %.2f %% de votos Nulos\n",perCvNul);
printf("Teve um total de votos validos: %.2f %% de votos Validos\n",perCvVal);

}
