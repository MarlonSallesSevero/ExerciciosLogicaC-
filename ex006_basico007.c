
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char palavra[15], letra;
int i,igual;
igual = 0;
printf("Informe uma palavra:");
    scanf("%s",&palavra);
printf("Informe uma letra:");
    scanf("%s",&letra);

for(i = 0; i < strlen(palavra); i++){
    if(palavra[i] == letra){
        igual = igual + 1;
        }
    }
printf("Na palavra '%s' tem um total de %i letras iguais a essa!!",palavra,igual);
}
