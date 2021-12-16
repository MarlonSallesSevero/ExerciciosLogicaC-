#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char nomeProcura[15];

struct livro{
char titulo[15];
char autor[15];
int ano;
}lv[5];

for(int i = 0; i < 5; i++){
    printf("Informe o titulo do %i livro:",i+1);
        scanf("%s",&lv[i].titulo);
    printf("Informe o autor do %i livro:",i+1);
        scanf("%s",&lv[i].autor);
    printf("Informe o ano do %i livro:",i+1);
        scanf("%i",&lv[i].ano);
    printf("*******\n");
    }
printf("Informe o titulo do livro que procura:");
            scanf("%s",&nomeProcura);
    for(int j = 0; j < 5; j++){
        if(lv[j].titulo == nomeProcura){
            printf("TEMOS O LIVRO %s ELE FOI LANÇADO NO ANO DE %i E SEU ALTOR E %s",lv[i].titulo,lv[i].ano,lv[i].autor);
        }
    }
}
