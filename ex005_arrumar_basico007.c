/*Solicite ao usuário a digitação de uma palavra e verifique se ela é um palíndromo (ex.:
ovo, osso).*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char palavra[15], inverso[15],letra;
int j,i,len;
i, j = 0 ;
printf("Informe uma palavra:");
    scanf("%s",&palavra);

len = strlen(palavra);

j = 0;

for(i = len - 1; i >= 0; i--){
     strcpy(inverso[j], palavra[i]);
     j++;
    }
printf("%s\n",inverso);


if(strcmp(inverso,palavra)){
        printf("Isto e uma palavra Normal!!!");
    }else{
        printf("Isto e uma palavra palíndromo!!!");
    }
}
