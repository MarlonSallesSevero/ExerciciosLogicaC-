#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int i;
char nmPai[100],nmMae[100],sobrenome[100],nmFilho[100];

printf("Informe o Primeiro nome do seu Pai:");
    scanf("%s",&nmPai);
printf("Informe o Primeiro nome da sua Mae:");
    scanf("%s",&nmMae);
printf("Informe o sobre nome da familia:");
    scanf("%s",&sobrenome);
strcat(nmPai, " ");
strcat(nmMae, " ");
printf("Bem-Vindo Sr %s\n", strcat(nmPai, sobrenome));
printf("Bem-Vinda Sra %s\n", strcat(nmMae, sobrenome));
printf("Informe o nome do seu filho:");
    scanf("%s",&nmFilho);
strcat(nmFilho, " ");
printf("Ola %s Bem-Vindo(a) tambem!!",strcat(nmFilho, sobrenome));
}
