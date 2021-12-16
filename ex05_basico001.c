#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float raio,area;
int ano,meses,dias;
int totalDias,totalDiasAno,totalDiasMes,total;

printf("Informe quantos anos voce tem de idade:");
scanf("%i",&ano);
printf("Informe quantos meses voce tem de idade:");
scanf("%i",&meses);
printf("Informe quantos dias voce tem de idade:");
scanf("%i",&dias);

totalDiasAno= ano*365;
totalDiasMes= meses*30;
totalDias= dias;

total = totalDiasAno+totalDiasMes+totalDias;

printf("tem atualmente um total de: %i dias de vida",total);


}





;
