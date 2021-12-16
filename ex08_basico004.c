#include <stdio.h>

int main(){

float vl_saldo, vl_opera,novo;
int opera,valid;

while(valid != 0){
    printf("Informe o saldo da conta:");
    scanf("%f",&vl_saldo);
    printf("1 - Para Saque\n");
    printf("2 - Para Deposito\n");
    printf("informe a operacao:");
    scanf("%i",&opera);
    switch (opera){
        case 1:
            printf("Informe o valor de Saque");
            scanf("%f",&vl_opera);
            novo = vl_saldo-vl_opera;
            printf("Seu saldo apos essa operacao eh de: %.2f\n",novo);
                break;
            case 2:
            printf("Informe o valor depositado");
            scanf("%f",&vl_opera);
            novo = vl_saldo+vl_opera;
            printf("Seu saldo apos essa operacao eh de:%.2f\n",novo);
                break;
        }
        printf("Quer Continuar ? 0 - Para Parar\n");
            scanf("%i",&valid);
    }
}
