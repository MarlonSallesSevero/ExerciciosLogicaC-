#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char tel[12], codPos[3];
int i;

printf("Informe o seu numero sem espaco:");
    scanf("%s",tel);
if(tel[0] == '4' && tel[1] == '5'){
    printf("O Numero '%s' eh de Cascavel!",tel);
    }else if(tel[0] == '4' && tel[1] == '1'){
        printf("O Numero '%s' eh de Curitiba!",tel);
    }else if(tel[0] == '2' && tel[1] == '1'){
        printf("O Numero '%s' eh de Rio de Janeiro!",tel);
    }else if(tel[0] == '5' && tel[1] == '1'){
        printf("O Numero '%s' eh de Porto Alegre!",tel);
    }else if(tel[0] == '6' && tel[1] == '7'){
        printf("O Numero '%s' eh de Mato Grosso do Sul!",tel);
    }else if(tel[0] == '6' && tel[1] == '3'){
        printf("O Numero '%s' eh de Tocantins!",tel);
    }else{
        printf("DDD ou NUMERO INVALIDO");
    }
}
/*Solicite ao usuário que informe seu numero de celular, sendo DDD+numero (sem digito
e sem espaço). Informe a qual região o código pertence.
a. Considere:
i. 45 – Cascavel;
ii. 41 – Curitiba;
iii. 21 – Rio de Janeiro;
iv. 51 – Porto Alegre;
v. 67 – Mato Grosso do Sul;
vi. 63 – Tocantins*/
