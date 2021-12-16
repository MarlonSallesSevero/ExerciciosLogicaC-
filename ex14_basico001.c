#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float x1,y1,x2,y2,dist,num;
int a;
printf("Informe o ponto o valor de x para o P1:");
scanf("%f",&x1);
printf("Informe o ponto o valor de y para o P1:");
scanf("%f",&y1);
printf("Informe o ponto o valor de x para o P2:");
scanf("%f",&x2);
printf("Informe o ponto o valor de y para o P2:");
scanf("%f",&y2);

num = (((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)))*(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));

printf("A distancia entre os pontos é de: %.2f", num);
}

