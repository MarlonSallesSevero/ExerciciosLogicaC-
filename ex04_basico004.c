#include <stdio.h>

int main(){
int tp_carro,vl_km;
printf("Informe o valor andado andado em Km/h:");
scanf("%i",&vl_km);
printf("Informe o tipo do carro : \n1 - A\n2 - B\n3 - C\n");
scanf("%i",&tp_carro);
switch (tp_carro){
       case 1:
            printf("O valor total gasto foi de:%i",vl_km*12);
                break;
       case 2:
            printf("O valor total gasto foi de:%i",vl_km*9);
                break;
       case 3:
            printf("O valor total gasto foi de:%i",vl_km*8);
                break;
    }
}
