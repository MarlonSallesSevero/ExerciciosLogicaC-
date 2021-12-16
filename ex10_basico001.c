#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float bMa, bMe, alt,are;

printf("Informa a base Maior:");
scanf("%f",&bMa);

printf("Informa a base Menor:");
scanf("%f",&bMe);

printf("Informa a Altura:");
scanf("%f",&alt);

are = (((bMa + bMe)/2)*alt);

printf("Area igual a = %.2f ",are);

}
