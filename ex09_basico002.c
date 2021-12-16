#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float nt, nt2, media;

printf("Informe o vl a primeira nota:");
    scanf("%f",&nt);
printf("Informe o vl a segunda nota:");
    scanf("%f",&nt2);
media = (nt+nt2)/2;
if( media < 5.0){
    printf("Reprovado");
}else if(media > 5.1 && media < 6.9) {
    printf("Em Exame");
} else {
    printf("Aprovado");
    }
}




