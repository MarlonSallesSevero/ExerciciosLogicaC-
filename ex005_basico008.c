#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float conversao(float metros){

printf("Isto e igual a %.2f Centimetros\n",metros*1000);
printf("Isto e igual a %.2f Milimetros\n",metros*100);
printf("Isto e igual a %.2f Decimetros\n",metros*10);
}

int main(){

float x;
printf("Informe o valor de metros:");
    scanf("%f",&x);
conversao(x);

}
