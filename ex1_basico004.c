#include <stdio.h>

int main(){

int n,m,oper;
int contin;
float res;

res = 0;
oper = 0;
while(contin != 0){

    printf("Informe o 1 valor:");
    scanf("%i",&m);

    printf("Informe o 2 valor:");
    scanf("%i",&n);

    printf("Informe uma operacao:\n");
    printf("1 - Para SOMA:\n");
    printf("2 - Para DIVISAO:\n");
    printf("3 - Para SUBTRACAO:\n");
    printf("4 - Para MULTIPLICACAO:\n");
    scanf("%i",&oper);
        switch(oper){
            case 1:
                res = m + n;
                break;
            case 2:
                res = m / n;
                break;
            case 3:
                res = m - n;
                break;
            break;
            }
        printf("Resultado da Operacao Selecionada eh igual a:%f\n",res);

    printf("******Quer Continuar? 0 - Para Nao*****\n");
    scanf("%i",&contin);
    }
}

