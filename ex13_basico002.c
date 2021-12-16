#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float sl, emp;
int pres;


printf("informe o salario:");
    scanf("%f",&sl);
printf("informe o valor que quer de credito:");
    scanf("%f",&emp);
printf("informe o valor da prestacao:");
    scanf("%f",&pres);
if(pres > (sl*0.3)){
    printf("N permitido");
}else{
    printf("Emprestimo possivel");
    }
    printf("%.2f\n",sl*0.3);S

}
