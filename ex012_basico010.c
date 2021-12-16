#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){


int mesProcura,anoProcura;

struct agenda{
    char compr[60];
    int dataDiaC;
    int dataMesC;
    int dataAnoC;
}dtD[3];

for(int i = 0; i < 3; i++){
    printf("Informe o %i compromisso:",i + 1);
        scanf("%s",&dtD[i].compr);
    printf("Informe o DIA do %i compromisso:",i + 1);
        scanf("%i",&dtD[i].dataDiaC);
    printf("Informe o MES do %i compromisso:",i + 1);
        scanf("%i",&dtD[i].dataMesC);
    printf("Informe o ANO do %i compromisso:",i + 1);
        scanf("%i",&dtD[i].dataAnoC);
    }
    printf("Informe um mes que procura compromissos:");
        scanf("%i",&mesProcura);
    printf("Informe um ano que procura compromissos:");
        scanf("%i",&anoProcura);

    for(int j = 0; j < 3; j++){
        if(dtD[j].dataMesC == mesProcura && dtD[j].dataAnoC == anoProcura){
            printf("Nesta data, dia %i/%i/%i tem o compromisso *%s*\n",dtD[j].dataDiaC,dtD[j].dataMesC,dtD[j].dataAnoC, dtD[j].compr);
        }
    }
}
