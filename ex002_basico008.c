#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int validaNumero(int x){
    if(x % 2 != 0){
        printf("Impar!");
    }else{
        printf("Par!");
    }
}

int main(){

int x;
printf("Informe um Valor:");
    scanf("%i",&x);
validaNumero(x);

}
