#include <stdio.h>

/*(Isto é, P = A[1]*B[1] +
A[2]*B[2] + ... A[N]+B[N]).*/
int main(){

int arr[10],arrB[10],i,j,n,P;

P = 0;
for(i = 0; i < 10; i++){
    printf("Informe o valor da posicao %i Array do Array A:",i);
        scanf("%i",&arr[i]);
    if(i == 9){
    printf("Primeiro Array Ok\n");
        for(i = 0; i < 10; i++){
            printf("Informe o valor da posicao %i Array do Array B:",i);
                scanf("%i",&arrB[i]);
                }
            }
        }
for(j = 0; j < 10; j++){
    P = (P + (arr[j] * arrB[j]));
    }
printf("O valor de P referente a P = A[N]+B[N]) eh igual a : %i",P);
}
