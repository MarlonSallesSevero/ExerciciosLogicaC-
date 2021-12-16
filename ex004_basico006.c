#include <stdio.h>

int main(){

int i, a[5],b[5],c[5],vl_atu;

for(i = 0; i < 5; i++){
    printf("Informe o valor para o A%i:",i+1);
        scanf("%i",&a[i]);
    printf("Informe o valor para o B%i:",i+1);
        scanf("%i",&b[i]);
    c[i] = a[i] + b[i];
    }
    printf("***Imprimindo a soma dos valores de A + B***\n");
    for(i = 0; i < 5; i++){
        printf("%i\n",c[i]);
    }

}
