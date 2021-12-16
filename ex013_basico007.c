#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char palavra[100],palavra2[100];

printf("Informe uma palavra:");
    scanf("%s",&palavra);
printf("Informe uma segunda palavra:");
    scanf("%s",&palavra2);
if(strcmp(palavra,palavra2)){
    printf("As duas Palavras sao Diferentes!");
    printf(strcat(palavra, palavra2));
    }else{
    printf("As duas Palavras sao Iguais!");
    }
}
