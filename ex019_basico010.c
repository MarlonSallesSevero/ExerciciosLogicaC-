
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){


struct aluno{
    int matricula;
    char nome[15];
    struct disci{
        int cod;
        char nmDis[15];
        struct prof{
            int cpf;
            char nm;
        }pf[3];
    }dis[3];
}al[3];


for(int j = 0; j < 3; j++){
    printf("Informe o nome do %i aluno:",j + 1);
        scanf("%s",&al[j].nome);
    printf("Informe a matricula do %i aluno:",j + 1);
        scanf("%i",&al[j].matricula);
    printf("Informe o nome da diciplina que o %i aluno esta matriculada:",j + 1);
        scanf("%s",&al[j].dis[j].nmDis);
    printf("Informe o codigo da diciplina que o %i aluno esta matriculada:",j + 1);
        scanf("%i",&al[j].dis[j].cod);
    printf("Informe o nome do professor da diciplina que o %i aluno esta matriculada:",j + 1);
        scanf("%s",&al[j].dis[j].pf[j].nm);
    printf("Informe o CPF do professor da diciplina que o %i aluno esta matriculada:",j + 1);
        scanf("%i",&al[j].dis[j].pf[j].cpf);
        printf("********************\n");
}

for(int j = 0; j < 3; j++){
    printf("O aluno %s de matricula %i esta matriculado na materia %i:%s\n",al[j].nome, al[j].matricula,al[j].dis[j].cod,al[j].dis[j].nmDis);
    }
}
