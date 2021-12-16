#include <stdio.h>

int main(){

int i, a[10],codigo;

codigo = 0;

for(i = 0; i < 10; i++){
    printf("Informe o valor da posicao %i:",i);
        scanf("%i",&a[i]);
    }
printf("Informe um codigo:");
    scanf("%i",&codigo);
if(codigo == 1){
    printf("**Array Normal**\n");
    for(i = 0; i < 10; i++){
        printf("%i\n",a[i]);
            }
        }
else if(codigo == 2){
    printf("**Array Inverso**\n");
    for(i = 9; i >= 0; i--){
        printf("%i\n",a[i]);
            }
}else{
        printf("Codigo Invalido");
    }
}
