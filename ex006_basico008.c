
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int enesPot(base, potencia){
int vl, x, res;
res = 1;
for(x = 1; x <= potencia; x++){
    res = res * base;
    }
return printf("O valor de %i elevado a %i e igual a: %i",base,potencia,res);
}

int main(){

int base,potencia;
printf("Informe o valor da base:");
    scanf("%i",&base);
printf("Informe o valor da potencia:");
    scanf("%i",&potencia);
enesPot(base, potencia);
}
