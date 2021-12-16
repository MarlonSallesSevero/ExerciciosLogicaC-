#include <stdio.h>

int main(){

/*
.Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento
com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º.
Mostre o vetor modificado.
*/


int arr[20], numAnter,i,j;

for(i = 0; i < 20; i++){
    printf("Informe o valor da posicao %i:",i);
        scanf("%i",&arr[i]);
    if(i == 19){
        printf("****************************\n");
        printf("Array Inverso\n");
        for(j = 19; j >= 0; j--){
            printf("%i\n",arr[j]);
            }
        }
    }
}
