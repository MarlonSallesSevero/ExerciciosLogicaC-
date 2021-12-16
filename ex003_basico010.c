#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

struct aluno{

    int matri;
    char nome[10];
    int codDis;
    float nota1,nota2;
    float media;
}al[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o nome do(a) %i aluno:",i +1);
            scanf("%s",&al[i].nome);
        printf("Informe a matricula do(a) %s:",al[i].nome);
            scanf("%i",&al[i].matri);
        printf("Informe o codDis do(a) %s:",al[i].nome);
            scanf("%i",&al[i].codDis);
        printf("Informe a nota 01 do(a) %s:",al[i].nome);
            scanf("%f",&al[i].nota1);
        printf("Informe a nota 02 do(a) %s:",al[i].nome);
            scanf("%f",&al[i].nota2);
        al[i].media = (al[i].nota1+al[i].nota2)/3;
        printf("******\n");
    }
for(int j = 0; j < 10; j++){
    printf("Media do %s = %.2f\n",al[j].nome,al[j].media);
    }
}
