#include <stdio.h>

int main(void){

float n,cont,maior,menor;
cont = 0 ;

while(cont < 5){
printf("Informe um valor:");
    scanf("%f",&n);
    if(cont == 0){
        maior = n;
        menor = n;
    }
    if(n > maior){
        maior = n;
    }else if( n < menor){
        menor = n;
    }
 cont = cont + 1;
}
printf("O maior valor informado eh:%f\n",maior);
printf("O menor valor informado eh:%f\n",menor);
};

