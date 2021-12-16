#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

struct bandas{

    char nome[15];
    char genero[15];
    int numIntegrantes;
    int posRanki;
}bd[3];

int listaBandas[3];

for(int i = 0; i < 3; i ++){
    printf("Informe o nome da %i banda:",i + 1);
        scanf("%s",&bd[i].nome);
    printf("Informe o genero da %i banda:",i + 1);
        scanf("%s",&bd[i].genero);
    printf("Informe o numIntegrantes da %i banda:",i + 1);
        scanf("%i",&bd[i].numIntegrantes);
    printf("Informe a posRanki da %i banda:",i + 1);
        scanf("%i",&bd[i].posRanki);
    printf("********\n");
    }
    for(int j = 0; j < 3; j++){
        if(bd[j].posRanki < bd[j + 1].posRanki){
            listaBandas[j] = bd[j].posRanki;
            printf(" Na %i posicao esta a banda %s do genero %s com um total de %i integrantes\n",bd[j].posRanki,bd[j].nome,bd[j].genero,bd[j].numIntegrantes);
    }
}
