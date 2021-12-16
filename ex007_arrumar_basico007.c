#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char palavra[15],nvPal[30],letra,letra2;
int i,j;

printf("Informe uma palavra:");
    scanf("%s",&palavra);
for(i = 0; i < strlen(palavra); i++){
    letra = palavra[i];
    letra2 = letra + palavra[i];
    }
printf("%s",nvPal);
}
