
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

/*13.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma
casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência
(real, em kW) e tempo ativo por dia (real, em horas).
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o
consumo relativo de cada eletrodoméstico (consumo/consumo total) nesse
período de tempo. Apresente este último dado em porcentagem.*/

int t;
float consumoTotal, consumoRelativo;

struct eletro{
    char nome[15];
    float potencia;
    int tempoAtividade;

}el[5];

for(int i = 0; i < 5; i++){
    printf("Informe o nome do %i eletro:",i + 1);
        scanf("%s",&el[i].nome);
    printf("Informe a potencia do %i eletro:",i + 1);
        scanf("%f",&el[i].potencia);
    printf("Informe o tempoAtividade em horas do %i eletro:",i + 1);
        scanf("%i",&el[i].tempoAtividade);
    }

printf("Informe quantos dias de consumo total voce quer calcualar:");
    scanf("%i",&t);

for(int i = 0; i < 5; i++){
    for(int j = 0; j < t; j++){
        consumoTotal = consumoTotal + (el[i].potencia *  el[i].tempoAtividade);
        }
    }
for(int x = 0; x < 5; x++){
    printf("O gasto total do item %i que é a %s foi de %.2f %% ou seja %.2f\n",x + 1, el[x].nome,((((el[x].potencia *  el[x].tempoAtividade) * t)/consumoTotal) * 100), (el[x].potencia *  el[x].tempoAtividade) * t);

}
printf("O Consumo total dos 5 equipamentos é de %.2f em %i dias",consumoTotal,t);
}
