#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int validMaior(int a, int b){
    if(a > b){
        printf("O primeiro numero informado e o maior");
    }else{
        printf("O segundo numero informado e o maior");
    }
}

int main(){

int a, b;
printf("Informe o primeiro numero:");
    scanf("%i",&a);
printf("Informe o segundo numero:");
    scanf("%i",&b);
validMaior(a, b);
}

