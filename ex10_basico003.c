#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main(){
int  i_controle,x_linhas,y_colunas;
i_controle = 0;
x_linhas = 0;
y_colunas = 0;

printf("Informe o total de Linhas:\n");
scanf("%f",&x_linhas);
printf("Informe o total de Colunas:\n");
scanf("%f",&y_colunas);

while(i_controle < y_colunas){
    printf("*");
    while(i_controle < x_linhas){
        printf("*");
        i_controle = i_controle + 1;
        }
    }
};





*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float n,x ;

printf("Informe um valor:\n");
scanf("%f",&n);

    while(n>=1){
        x = 1;
        while(x <= n){ //escreve uma linha
            printf("*");
            x = x + 1;
        }
        n = n - 1;
        printf("\n");
    }
    printf("\n");
}
