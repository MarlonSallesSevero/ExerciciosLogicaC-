#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

struct aumoveis{
    struct carro{
    char modelo[15];
    int ano;
    char placa[6];
    struct proprietario{
        long int cpf;
        char nome[15];
        }prop[2];
    }carr[2];
}autom[2];

for(int i = 0; i < 2; i++){
    printf("Informe o modelo do %i automovel:", i + 1);
        scanf("%s",&autom[i].carr[i].modelo);
     printf("Informe o ano do %i automovel:", i + 1);
        scanf("%i",&autom[i].carr[i].ano);
    printf("Informe a placa do %i automovel:", i + 1);
        scanf("%s",&autom[i].carr[i].placa);
    printf("Informe o cpf do proprietario do %i automovel:", i + 1);
        scanf("%i",&autom[i].carr[i].prop[i].cpf);
    printf("Informe o nome do proprietario do %i automovel:", i + 1);
        scanf("%s",&autom[i].carr[i].prop[i].nome);
    }
for(int i = 0; i < 2; i++){
    printf("1° carro :\n MODELO - %s\n ANO - %i\n PLACA %s\nNOME PROPRIETARIO:%s CPF:%i\n",autom[i].carr[i].modelo,autom[i].carr[i].ano,autom[i].carr[i].placa,autom[i].carr[i].prop[i].nome,autom[i].carr[i].prop[i].cpf);
    }
}
