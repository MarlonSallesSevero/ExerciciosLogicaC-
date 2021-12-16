#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float temp, vel;
int dist;

dist =50;
printf("Informe o temp que levou em horas:");
    scanf("%f",&temp);
vel = dist/temp;
printf("Vel %.2f:\n", vel);
if( vel < 80){
    printf("Ultrapassou a vel maxima!!");
}else{
    printf("Velocidade Ok");
}
}
