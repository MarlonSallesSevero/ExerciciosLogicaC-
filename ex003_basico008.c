#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int delta(int a, int b, int c){
int x;
    if(a == 0){
        printf("Numero Invalido");
    }else{
        x = ((b * b) - ((4 * a) * c));
        printf("Delta igual a :%i",x);
    }
}

int main(){

int a, b, c;
printf("Informe de A:");
    scanf("%i",&a);
printf("Informe de B:");
    scanf("%i",&b);
printf("Informe de C:");
    scanf("%i",&c);
delta(a, b, c);
}
