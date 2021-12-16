#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float sl;

printf("Informe seu salario:");
    scanf("%f",&sl);

if( sl < 600){
    printf("Voce nao tem desconto");
}else if(sl > 600 && sl < 1200) {
    printf("Voce tem um desconto de:%.2f",sl*0.2);
}else if (sl > 1200 && sl < 2000) {
    printf("Voce tem um desconto de:%.2f",sl*0.25);
    }else{
    printf("Voce tem um desconto de:%.2f",sl*0.3);
    }
}
