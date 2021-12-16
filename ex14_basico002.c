
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
float sl,aum;

printf("Informe seu salario:");
scanf("%f",&sl);

if (sl <= 280){
    aum = sl+(sl*0.2);
    printf("Aumento de:%.2f\n",sl*0.2);
    printf("Aumento de 20%% totalizando um valor total de:%.2f",aum);

}else if (sl > 280 && sl < 700){
    sl+(sl*0.15);
    printf("Aumento de:%.2f\n",sl*0.15);
    printf("Aumento de 15%% totalizando um valor total de:%.2f\n",aum);

}else if(sl > 700 && sl < 1500){
    aum = sl+(sl*0.10);
    printf("Aumento de:%.2f\n",sl*0.15);
    printf("Aumento de 10%% totalizando um valor total de:%.2f\n",aum);

}else{
    aum = sl+(sl*0.05);
    printf("Aumento de:%.2f\n",sl*0.05);
    printf("Aumento de 5%% totalizando um valor total de:%.2f\n",aum);

    }
}
