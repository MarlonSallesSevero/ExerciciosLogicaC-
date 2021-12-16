#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char palavra[100],letra;
int i;

printf("Informe uma palavra a ser codificada:");
    scanf("%s",&palavra);

for(i = 0; i < strlen(palavra); i++){
    if(palavra[i] == 'z' || palavra[i] == 'Z'){
        palavra[i] = 'A';
        }else if(palavra[i] == 'y' || palavra[i] == 'Y'){
            palavra[i] = 'E';
        }else if(palavra[i] == 'w' || palavra[i] == 'W'){
            palavra[i] = 'O';
        }else if(palavra[i] == 'k' || palavra[i] == 'K'){
            palavra[i] = 'T';
        }else if(palavra[i] == 'b' || palavra[i] == 'B'){
            palavra[i] = 'M';
        }else if(palavra[i] == 'd' || palavra[i] == 'D'){
            palavra[i] = 'N';
        }else if(palavra[i] == 'f' || palavra[i] == 'F'){
            palavra[i] = 'P';
        }
    }
    printf("%s",palavra);
}
