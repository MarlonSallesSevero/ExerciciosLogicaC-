#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int validaNumero(int x){
    if(x > 0){
        printf("Positivo!");
    }else if(x == 0){
        printf("Zero");
    }else{
        printf("Negativo!");
    }
}

int main(){

int x;
printf("Informe um Valor:");
    scanf("%i",&x);
validaNumero(x);

}
