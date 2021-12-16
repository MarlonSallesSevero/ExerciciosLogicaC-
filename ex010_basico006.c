#include <stdio.h>

/*Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em
cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado
na posição anterior. Imprima o vetor N.*/

int main(){

int n,arr[100],i;
float numAtual,numAnterior;


printf("Informe um valor:");
    scanf("%i",&n);

for(i = 0; i < 100; i++){
    if(i == 0){
        arr[i] = n;
        numAtual = n;
        numAnterior = n;
    }else{
        numAnterior = numAnterior/2;
        arr[i] = numAnterior;
        }
    }
    for(i = 0; i < 100; i++){
        printf("%i\n",arr[i]);
        if(arr[i] == 0){
            printf("Nao eh possivel mais dividir!!\n");
                break;
        }
    }
}
