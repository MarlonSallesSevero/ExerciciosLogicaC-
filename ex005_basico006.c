#include <stdio.h>

int main(){

int i, a[10],b[10],c[10];

for(i = 0; i < 10; i++){
    printf("Informe o valor para o A%i:",i+1);
        scanf("%i",&a[i]);
    printf("Informe o valor para o B%i:",i+1);
        scanf("%i",&b[i]);
        if(a[i] == b[i]){
            c[i] = 0;
        }
        else if(a[i] > b[i]){
            c[i] = 1;
        }else if(a[i] < b[i]){
            c[i] = -1;
        }
    }
    printf("***Imprimindo o vetor C***\n");
    for(i = 0; i < 10; i++){
        printf("[%i]\n",c[i]);
        }
}
