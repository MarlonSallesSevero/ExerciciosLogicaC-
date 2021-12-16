#include <stdio.h>

int main(){
float sl_atual, alm_anual;
int ano_atual,cont_ano;

printf("O funcionario 1995 foi contratado por 2000 reais.\n");
printf("Em 1996 recebeu aumento de 1.5%\n");

sl_atual = 2030;
alm_anual = 0.015;
cont_ano = 1996;
ano_atual= 2021;

printf("Ou seja o salario dele em 1996 é de:%.2f\n",sl_atual);

while(cont_ano  < ano_atual){
    printf("No ano de %i o funcionario estava recebendo: %.2f\n ",cont_ano,sl_atual);
         sl_atual = sl_atual + (sl_atual * (alm_anual * 2));
         cont_ano = cont_ano + 1;
             if(cont_ano == 2021){
                printf("Este ano o funcionario esta recebendo:%.2f\n",sl_atual);
             }
    }
};
