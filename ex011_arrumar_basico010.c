#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

struct acao{
    char nmComp[15];
    char areAt[15];
    float vlAtual;
    float vlAnter;
    double varAca;

    }ac[2];

for(int i = 0; i < 2; i++){
   // printf("Informe o nome da compania da %i acao:",i + 1);
        //scanf("%s",&ac[i].nmComp);
   // printf("Informe Area Atuacao:");
   //    scanf("%s",&ac[i].areAt);
   // printf("Informe o Vl Atual da Acao:");
        scanf("%f",&ac[i].vlAtual);
    printf("Informe o Vl Anterior da Acao:");
        scanf("%f",&ac[i].vlAnter);
    //printf("Informe a variacao em porcentagem da compania:");
        //scanf("%s",&ac[i].varAca);
    ac[i].varAca = ((ac[i].vlAnter-ac[i].vlAtual)/100)*1000;
    printf("****\n");
    }
    for(int i = 0; i < 2; i++){
        printf("A acao numero %i da compania %s de atuacao em %s esta com valorAtual de %.2f e um anterior de %.2f\nEsta acao deve um crecimento de %2.f porcento\n", i + 1,ac[i].nmComp,ac[i].areAt,ac[i].vlAtual,ac[i].vlAnter,ac[i].varAca);
    }
}



