#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char nome[10],sobrenome[10],ultimoNome[10];
int i,total;
total = 0;
printf("Informe seu nome:");
    scanf("%s",&nome);
printf("Informe seu sobrenome:");
    scanf("%s",&sobrenome);
printf("Informe seu ultimo nome:");
    scanf("%s",&ultimoNome);
for(i = 0; i < strlen(nome); i++){
    total = total + 1;
    if((i + 1) == strlen(nome)){
        for(i = 0; i < strlen(sobrenome); i++){
            total = total + 1;
            if((i + 1 ) == strlen(sobrenome)){
                for(i = 0; i < strlen(ultimoNome);i++){
                    total = total + 1;
                    }
                }
            }
        }
    }
printf("O nome '%s %s %s' tem um total de %i letras",nome,sobrenome,ultimoNome,total);
}
