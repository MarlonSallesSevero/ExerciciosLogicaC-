
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){

int aux = 1;
float distancia = 0;
struct ponto2d{
    struct pontoInicial{
        int x1;
        int y1;
    }pI[1];
    struct pontoFinal{
        int x2;
        int y2;
    }pF[1];
}p2[1];

while(aux != 0){
    for(int i = 0; i < 1; i++){
        printf("Informe o valor inicial do X1:");
            scanf("%i",&p2[i].pI[i].x1);
        printf("Informe o valor inicial do Y1:");
            scanf("%i",&p2[i].pI[i].y1);
        printf("Informe o valor inicial do X2:");
            scanf("%i",&p2[i].pF[i].x2);
        printf("Informe o valor inicial do Y2:");
            scanf("%i",&p2[i].pF[i].y2);
        printf("**********\n");
        distancia = pow(((p2[i].pI[i].x1 - p2[i].pF[i].x2) * (p2[i].pI[i].x1 - p2[i].pF[i].x2)) + ((p2[i].pI[i].y1 - p2[i].pF[i].y2) * (p2[i].pI[i].y1 - p2[i].pF[i].y2)),2);
        printf("DISTANCIA DE [%i,%i][%i,%i] = %.2f\n",p2[i].pI[i].x1,p2[i].pI[i].y1,p2[i].pF[i].x2,p2[i].pF[i].y2,distancia);
        printf("*******\n");
        }
        printf("QUER CALCULAR NOVAMENTE?\n 0 - Nao\nQualquer Tecla - Sim\n");
            scanf("%i",&aux);
        if(aux == 0){
            printf("Bye-Bye!");
        }
    }
}
