

#include <stdio.h>

int main(void){

float sl,cont,n;
cont = 0 ;
n = 1;
while(n != 0){
    printf("Informe o valor do seu Salario:");
        scanf("%f",&sl);
            if(sl < 1637.11){
                printf("Seu imposto de renda é: Isento\n");
            }else if(sl > 1637.12 && sl <= 2453.50){
                printf("Seu imposto de renda é:%f\n",(7.5/100)*sl);
            }else if((sl > 2453.51) && (sl <= 3271.38)){
                printf("Seu imposto de renda é:%f\n",(15/100)*sl);
            }else if(sl > 3271.39 && sl <= 4087.65){
                printf("Seu imposto de rende é:%f\n",(22.5/100)*sl);
            }else if(sl >= 4087.66){
                printf("Seu imposto de rende é:%f\n",(27.5/100)*sl);
            }
            printf("Quer Continuar ? 0 - Para parar o Programa:");
                scanf("%f",&n);
        cont = cont + 1;
    }
};
