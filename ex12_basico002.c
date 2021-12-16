#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float ld1, ld2, h;

printf("informe o lado A:");
scanf("%f",&ld1);
printf("informe o lado B:");
scanf("%f",&ld2);

h = sqrt((ld1*ld1)+(ld2*ld2));

if(h > 100){
printf("N permitido",h);
}else {
printf("OK!");
        }
    }

