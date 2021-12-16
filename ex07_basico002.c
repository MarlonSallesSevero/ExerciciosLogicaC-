#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
int idade,sx;

printf("Informe o Sexo:\n");
printf("1 para Homem e 0 para Mulher\n");
    scanf("%i",&sx);
printf("Informe a Idade:");
    scanf("%i",&idade);
if (sx == 0 && idade < 25){
    printf("ACEITA\n");
}else if(sx == 0 && idade > 25){
    printf("NAO ACEITA\n");
}else if(sx == 1){
    printf("NAO ACEITA\n");
    }

}
