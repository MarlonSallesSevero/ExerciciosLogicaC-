#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char usuario[10],senha[10], confirma[10];
int i,ok,naoOK;
naoOK = 0;
printf("Informe um nome de usuario:");
    scanf("%s",&usuario);
printf("Informe uma senha:");
    scanf("%s",&senha);
printf("Confirme sua senha:");
    scanf("%s",&confirma);

for(i = 0; i < strlen(senha); i++){
    if(senha[i] != confirma[i]){
        naoOK = naoOK + 1;
        }
    }
if(naoOK != 0){
    printf("Senha Incorreta!");
}else{
    printf("Senha Correta!");
    }
}
