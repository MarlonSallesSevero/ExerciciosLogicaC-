#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

struct cliente{

    int matricula;
    char nome[15];

    struct endereco{
        char lagra[15];
        int num;
        char bairr[15];
        long int cep;
        }ed[1];
    }cl[1];


for(int i = 0; i < 1; i++){
    printf("Informe o nome do %i° cliente:",i   +  1);
        scanf("%s",&cl[i].nome);
    printf("Informe a matricula do %i° cliente:",i   +  1);
        scanf("%i",&cl[i].matricula);
    printf("**AGORA VAMOS INFORMAR O END**\n");
    printf("Informe o logradouro:");
        scanf("%s",&cl[i].ed[i].lagra);
    printf("Informe o numero:");
        scanf("%i",&cl[i].ed[i].num);
    printf("Informe o bairro:");
        scanf("%s",&cl[i].ed[i].bairr);
    printf("Informe o CEP:");
        scanf("%i",&cl[i].ed[i].cep);
    printf("*****\n");
    }
    for(int i = 0; i < 1; i++){
        printf("Cliente num %i e o %s e tem num de matricula %i mora em %s no numero %i do bairro %s no CEP:%i\n ",i + 1,cl[i].nome,cl[i].matricula,cl[i].ed[i].lagra,cl[i].ed[i].num,cl[i].ed[i].bairr,cl[i].ed[i].cep);
    }
}
