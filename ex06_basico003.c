
#include <stdio.h>

int main(void){

float medH,medM,n,x,vl1,vl2,tlHom,tlMul,qtRep;

medH = 0;
medM = 0;
n = 0;
x = 0;
vl1 = 0;
vl2 = 0;
tlHom = 0;
tlMul = 0;
qtRep = 0;

while(x < 5){
    printf("Informe o sexo:\n");
    printf("1 - HOMEM OU 2 - Mulher:");
    scanf("%f",&n);
    if(n == 2){
        printf("Informe a altura da Mulher:");
            scanf("%f",&vl1);
        medM = medM + vl1;
        tlHom = tlHom + 1;
        x = x + 1;
    }else if( n == 1){
        printf("Informe a altura do Homem:");
            scanf("%f",&vl2);
        medH = medH + vl2
        tlMul = tlMul + 1;
        x = x + 1;
    }else{
        printf("Codigo Invalido!!\n");
        }
    }
    printf("Total Homem %.2f\n",tlHom);
    printf("Total Mulher %.2f\n",tlMul);
    printf("A media da altura dos homens é: %.2f\n",medM/tlHom);
    printf("A media da altura dos mulheres é: %.2f\n",medM/tlMul);
};


