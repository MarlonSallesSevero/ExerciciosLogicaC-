#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

char palavra[10];
int tlVog,i;
tlVog = 0;
printf("Informe uma palavra:");
    scanf("%s",&palavra);
for(i = 0; i < strlen(palavra); i++){
    if(palavra[i] == 'A' || palavra[i] == 'a'){
        tlVog = tlVog + 1;
        }else if(palavra[i] == 'E' || palavra[i] == 'e'){
        tlVog = tlVog + 1;
        }else if(palavra[i] == 'I' || palavra[i] == 'i'){
        tlVog = tlVog + 1;
        }else if(palavra[i] == 'O' || palavra[i] == 'o' ){
        tlVog = tlVog + 1;
        }else if(palavra[i] == 'U' || palavra[i] == 'u'){
        tlVog = tlVog + 1;
        }
    }
printf("A palavra '%s' tem um total de %i vogais", palavra, tlVog);
}
